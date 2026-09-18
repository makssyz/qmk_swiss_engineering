// Remaps Oryx's German (DE_*) keycodes so they type the intended character
// when macOS is set to the "Swiss German" input source (Voyager set to ISO / "International" keyboard type).
// Derived from macOS's own SwissGerman keyboard layout data.
// Included from keymap.c right after i18n.h, so Oryx updates don't overwrite it.
#pragma once

#undef DE_EXLM
#define DE_EXLM S(KC_RBRC)     // !
#undef DE_AT
#define DE_AT   A(KC_G)        // @
#undef DE_HASH
#define DE_HASH A(KC_3)        // #
#undef DE_DLR
#define DE_DLR  KC_BSLS        // $
#undef DE_PERC
#define DE_PERC S(KC_5)        // %
#undef DE_SLSH
#define DE_SLSH S(KC_7)        // /
#undef DE_QST
#define DE_QST  S(KC_MINS)     // ?
#undef DE_SCLN
#define DE_SCLN S(KC_COMM)     // ;
#undef DE_COLN
#define DE_COLN S(KC_DOT)      // :
#undef DE_AE
#define DE_AE   KC_QUOT        // ä
#undef DE_SS
#define DE_SS   A(KC_S)        // ß
#undef DE_Y
#define DE_Y    KC_Z           // y
#undef DE_Z
#define DE_Z    KC_Y           // z
#undef DE_AMPR
#define DE_AMPR S(KC_6)        // &
#undef DE_ASTR
#define DE_ASTR S(KC_3)        // *
#undef DE_LPRN
#define DE_LPRN S(KC_8)        // (
#undef DE_RPRN
#define DE_RPRN S(KC_9)        // )
#undef DE_UE
#define DE_UE   KC_LBRC        // ü
#undef DE_OE
#define DE_OE   KC_SCLN        // ö
#undef CH_OE
#define CH_OE   KC_SCLN        // ö
#undef DE_BSLS
#define DE_BSLS S(A(KC_7))     // backslash
#undef DE_PIPE
#define DE_PIPE A(KC_7)        // |
#undef DE_QUOT
#define DE_QUOT KC_MINS        // '
#undef DE_DQOT
#define DE_DQOT S(KC_2)        // "
#undef DE_LESS
#define DE_LESS KC_NUBS        // <
#undef DE_MORE
#define DE_MORE S(KC_NUBS)     // >
#undef DE_MINS
#define DE_MINS KC_SLSH        // -
#undef DE_UNDS
#define DE_UNDS S(KC_SLSH)     // _
#undef DE_EQL
#define DE_EQL  S(KC_0)        // =
#undef DE_PLUS
#define DE_PLUS S(KC_1)        // +
#undef DE_EURO
#define DE_EURO A(KC_E)        // €
#undef DE_LCBR
#define DE_LCBR A(KC_8)        // {
#undef DE_RCBR
#define DE_RCBR A(KC_9)        // }
#undef DE_LBRC
#define DE_LBRC A(KC_5)        // [
#undef DE_RBRC
#define DE_RBRC A(KC_6)        // ]
#undef DE_PARA
#define DE_PARA KC_GRV         // §
#undef DE_RING
#define DE_RING S(KC_GRV)      // °
#define DE_DEG  S(KC_GRV)      // °
#undef DE_CIRC
#define DE_CIRC KC_EQL         // ^ (dead key, as on German)
#undef DE_GRV
#define DE_GRV  S(KC_EQL)      // ` (dead key, as on German)
#undef DE_ACUT
#define DE_ACUT A(KC_EQL)      // ´ (dead key, as on German)

// ~ only exists as a dead key (Option+N) on Swiss German, so send Option+N then
// Space to get a literal ~ in one press. process_record_user() intercepts DE_TILD.
#undef DE_TILD
#define DE_TILD A(KC_N)
static inline void swiss_send_tilde(void) {
  tap_code16(A(KC_N));
  tap_code(KC_SPC);
}

// ² and ³ don't exist on the macOS Swiss German layout; these keys do nothing.
#undef DE_SQ2
#define DE_SQ2  KC_NO
#undef DE_SQ3
#define DE_SQ3  KC_NO

// Hold action for umlaut keys: ä/ö/ü, or Ä/Ö/Ü while Shift is held.
// Swiss German has no capital-umlaut keys (Shift+ä/ö/ü gives à/é/è), so capitals
// are typed as the dead ¨ key followed by Shift+vowel.
static inline void swiss_umlaut(keyrecord_t *record, uint16_t umlaut, uint16_t vowel) {
  if (record->event.pressed) {
    uint8_t shift = get_mods() & MOD_MASK_SHIFT;
    if (shift) {
      del_mods(shift);
      tap_code16(KC_RBRC);
      tap_code16(LSFT(vowel));
      add_mods(shift);
    } else {
      register_code16(umlaut);
    }
  } else {
    unregister_code16(umlaut);
  }
}
