#!/usr/bin/env bash
# Build the layout (Oryx source + custom QMK changes) and flash it to the Voyager.
#
#   ./flash.sh           build, then wait for the keyboard's bootloader and flash
#   ./flash.sh --build   build only; the .bin is copied to ~/Downloads
#
# When it says "Bootloader not found. Trying again...", press the Voyager's reset button
# (the small hole on the left half, e.g. with a paperclip). Flashing then starts by itself.
set -euo pipefail

LAYOUT_ID="dY4LZ"
GEOMETRY="voyager"
FIRMWARE_BRANCH="firmware25"

REPO="$(cd "$(dirname "$0")" && pwd)"
QMK="$REPO/qmk_firmware"
VENV="$REPO/.venv"

# --- tools -----------------------------------------------------------------
if ! command -v brew >/dev/null; then
  echo "Homebrew is required: https://brew.sh" >&2; exit 1
fi
GCC_PREFIX="$(brew --prefix)/opt/arm-none-eabi-gcc@8"
BINUTILS_PREFIX="$(brew --prefix)/opt/arm-none-eabi-binutils"
if [ ! -x "$GCC_PREFIX/bin/arm-none-eabi-gcc" ]; then
  echo "==> Installing ARM compiler"
  brew install osx-cross/arm/arm-none-eabi-gcc@8
fi
command -v dfu-util >/dev/null || { echo "==> Installing dfu-util"; brew install dfu-util; }
if [ ! -x "$VENV/bin/qmk" ]; then
  echo "==> Installing qmk CLI into .venv"
  "$(brew --prefix)/bin/python3" -m venv "$VENV"
  "$VENV/bin/pip" install -q qmk
fi
export PATH="$VENV/bin:$GCC_PREFIX/bin:$BINUTILS_PREFIX/bin:$PATH"

# --- ZSA's QMK fork ----------------------------------------------------------
if [ ! -f "$QMK/Makefile" ]; then
  echo "==> Fetching ZSA QMK ($FIRMWARE_BRANCH)"
  git -C "$REPO" submodule update --init --depth=1
  git -C "$QMK" fetch --depth=1 origin "$FIRMWARE_BRANCH"
  git -C "$QMK" checkout -B "$FIRMWARE_BRANCH" FETCH_HEAD
  git -C "$QMK" submodule update --init --recursive --depth=1
fi
"$VENV/bin/pip" install -q -r "$QMK/requirements.txt"

# --- build / flash -----------------------------------------------------------
KEYMAP_DIR="$QMK/keyboards/zsa/$GEOMETRY/keymaps/$LAYOUT_ID"
rm -rf "$KEYMAP_DIR"
cp -r "$REPO/$LAYOUT_ID" "$KEYMAP_DIR"

cd "$QMK"
if [ "${1:-}" = "--build" ]; then
  make "zsa/$GEOMETRY:$LAYOUT_ID"
  cp "zsa_${GEOMETRY}_${LAYOUT_ID}.bin" ~/Downloads/
  echo "==> Built ~/Downloads/zsa_${GEOMETRY}_${LAYOUT_ID}.bin"
else
  echo "==> Building, then waiting for the keyboard: press the Voyager's reset button when asked"
  make "zsa/$GEOMETRY:$LAYOUT_ID:flash"
  echo "==> Done. Your keyboard is running the new layout."
fi
