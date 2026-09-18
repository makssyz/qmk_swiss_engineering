#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  MAC_MISSION_CONTROL,
  MAC_SPOTLIGHT,
  MAC_SIRI,
  MAC_LOCK,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
};

#define DUAL_FUNC_0 LT(7, KC_3)
#define DUAL_FUNC_1 LT(12, KC_A)
#define DUAL_FUNC_2 LT(1, KC_6)
#define DUAL_FUNC_3 LT(7, KC_O)
#define DUAL_FUNC_4 LT(4, KC_X)
#define DUAL_FUNC_5 LT(14, KC_F1)
#define DUAL_FUNC_6 LT(6, KC_F1)
#define DUAL_FUNC_7 LT(14, KC_F9)
#define DUAL_FUNC_8 LT(13, KC_W)
#define DUAL_FUNC_9 LT(5, KC_F12)
#define DUAL_FUNC_10 LT(14, KC_F7)
#define DUAL_FUNC_11 LT(8, KC_O)
#define DUAL_FUNC_12 LT(5, KC_1)
#define DUAL_FUNC_13 LT(9, KC_F18)
#define DUAL_FUNC_14 LT(2, KC_F15)
#define DUAL_FUNC_15 LT(6, KC_B)
#define DUAL_FUNC_16 LT(3, KC_F6)
#define DUAL_FUNC_17 LT(14, KC_F22)
#define DUAL_FUNC_18 LT(5, KC_S)
#define DUAL_FUNC_19 LT(11, KC_F7)
#define DUAL_FUNC_20 LT(7, KC_D)
#define DUAL_FUNC_21 LT(5, KC_R)
#define DUAL_FUNC_22 LT(12, KC_F9)
#define DUAL_FUNC_23 LT(5, KC_Y)
#define DUAL_FUNC_24 LT(14, KC_F15)
#define DUAL_FUNC_25 LT(12, KC_L)
#define DUAL_FUNC_26 LT(1, KC_F18)
#define DUAL_FUNC_27 LT(3, KC_0)
#define DUAL_FUNC_28 LT(4, KC_F15)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    DUAL_FUNC_5,                                    DUAL_FUNC_11,   DUAL_FUNC_12,   DUAL_FUNC_13,   DUAL_FUNC_14,   DUAL_FUNC_15,   LCTL(KC_R),     
    DUAL_FUNC_6,    KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           DE_Z,           DUAL_FUNC_16,   KC_I,           DUAL_FUNC_17,   KC_P,           DUAL_FUNC_18,   
    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    MT(MOD_LCTL, KC_D),MT(MOD_LALT, KC_F),MT(MOD_LGUI, KC_G),                                MT(MOD_RGUI, KC_H),MT(MOD_RALT, KC_J),MT(MOD_RCTL, KC_K),KC_L,           DUAL_FUNC_19,   TD(DANCE_1),    
    DUAL_FUNC_10,   DE_Y,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           DUAL_FUNC_20,   DUAL_FUNC_21,   DUAL_FUNC_22,   DUAL_FUNC_23,   
                                                    KC_LEFT_SHIFT,  TD(DANCE_0),                                    TD(DANCE_2),    MT(MOD_LSFT, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    MAC_LOCK,       MAC_MISSION_CONTROL,DE_SQ2,         DE_SQ3,         DE_EURO,        LGUI(DE_PLUS),                                  KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        LSFT(DE_LESS),  LCTL(KC_SPACE), 
    MAC_SPOTLIGHT,  DE_LCBR,        DE_RCBR,        DE_LBRC,        DE_RBRC,        LGUI(DE_MINS),                                  KC_KP_PLUS,     KC_KP_4,        KC_KP_5,        KC_KP_6,        DE_PARA,        KC_TRANSPARENT, 
    MAC_SIRI,       LGUI(KC_A),     LGUI(LSFT(KC_5)),DE_LPRN,        DE_RPRN,        LGUI(LSFT(DE_Z)),                                KC_KP_MINUS,    KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ASTERISK, DE_TILD,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MAC_CUT,     KC_MAC_COPY,    KC_MAC_PASTE,   LGUI(DE_Z),                                     KC_TRANSPARENT, KC_KP_0,        KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_SLASH,    KC_KP_EQUAL,    
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 TD(DANCE_3),    KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 DUAL_FUNC_24,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_6),    KC_TRANSPARENT, DUAL_FUNC_25,   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_4),    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_26,   DUAL_FUNC_27,   KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TD(DANCE_5),                                    TD(DANCE_7),    KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, RGB_VAI,        KC_TRANSPARENT, KC_MS_UP,       KC_MS_BTN2,     KC_MS_WH_UP,                                    KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_UP,          KC_MEDIA_PLAY_PAUSE,KC_BRIGHTNESS_UP,KC_F12,         
    LED_LEVEL,      RGB_VAD,        KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_DOWN,                                  KC_AUDIO_VOL_DOWN,KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_BRIGHTNESS_DOWN,KC_F13,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,     KC_MS_WH_LEFT,  KC_MS_WH_RIGHT,                                 KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_RIGHT)),
                                                    KC_MS_BTN1,     TD(DANCE_8),                                    KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    LGUI(KC_L),     LGUI(KC_TAB),   DE_SQ2,         DE_SQ3,         DE_EURO,        LCTL(DE_PLUS),                                  KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        DE_RING,        LCTL(KC_LEFT_GUI),
    LALT(KC_SPACE), DE_LCBR,        DE_RCBR,        DE_LBRC,        DE_RBRC,        LCTL(DE_MINS),                                  KC_KP_PLUS,     KC_KP_4,        KC_KP_5,        KC_KP_6,        DE_PARA,        KC_TRANSPARENT, 
    LGUI(KC_H),     LCTL(KC_A),     LGUI(LSFT(KC_S)),DE_LPRN,        DE_RPRN,        LSFT(KC_PC_UNDO),                                KC_KP_MINUS,    KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ASTERISK, DE_TILD,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    LCTL(DE_Z),                                     KC_LEFT_ALT,    KC_KP_0,        KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_SLASH,    DE_EQL,         
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 DUAL_FUNC_28,   KC_TRANSPARENT
  ),
};





extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {88,68,255}, {88,68,255}, {88,68,255}, {88,68,255}, {88,68,255}, {88,68,255}, {88,143,255}, {88,143,255}, {88,143,255}, {88,208,255}, {88,208,255}, {88,143,255}, {88,208,255}, {88,208,255}, {88,143,255}, {88,208,255}, {88,208,255}, {88,208,255}, {88,255,255}, {88,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {88,68,255}, {88,68,255}, {88,68,255}, {88,68,255}, {88,68,255}, {88,68,255}, {88,143,255}, {88,143,255}, {88,143,255}, {88,143,255}, {88,143,255}, {88,143,255}, {88,208,255}, {88,208,255}, {88,208,255}, {88,208,255}, {88,208,255}, {88,208,255}, {88,255,255}, {88,255,255} },

    [1] = { {0,255,255}, {38,255,255}, {192,255,255}, {192,255,255}, {192,255,255}, {88,255,255}, {88,255,255}, {0,255,255}, {0,255,255}, {25,255,255}, {25,255,255}, {88,255,255}, {25,255,255}, {142,255,255}, {38,255,255}, {88,255,255}, {88,255,255}, {142,255,255}, {0,0,0}, {0,0,0}, {142,255,255}, {142,255,255}, {142,255,255}, {142,255,255}, {0,0,0}, {0,255,255}, {0,0,0}, {25,255,255}, {25,255,255}, {25,255,255}, {192,255,255}, {142,255,255}, {88,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {192,255,255}, {0,0,0}, {88,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {88,255,255}, {192,255,255}, {0,0,0}, {25,255,255}, {192,255,255}, {192,255,255}, {88,255,255}, {88,255,255}, {142,255,255}, {0,0,0} },

    [2] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {142,86,255}, {142,86,255}, {142,86,255}, {142,86,255}, {142,86,255}, {142,86,255}, {142,141,255}, {142,141,255}, {142,141,255}, {142,141,255}, {142,141,255}, {142,141,255}, {142,210,255}, {142,210,255}, {142,210,255}, {142,210,255}, {142,210,255}, {142,210,255}, {142,255,255}, {142,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {142,86,255}, {142,86,255}, {142,86,255}, {142,86,255}, {142,86,255}, {142,86,255}, {142,141,255}, {142,141,255}, {142,141,255}, {142,141,255}, {142,141,255}, {142,141,255}, {142,210,255}, {142,210,255}, {142,210,255}, {142,210,255}, {142,210,255}, {142,210,255}, {142,255,255}, {142,255,255} },

    [3] = { {0,0,0}, {142,255,255}, {142,255,255}, {142,255,255}, {142,255,255}, {142,255,255}, {0,0,0}, {38,255,255}, {0,0,0}, {192,255,255}, {88,255,255}, {25,255,255}, {0,255,255}, {37,255,127}, {192,255,255}, {192,255,255}, {192,255,255}, {25,255,255}, {142,255,255}, {142,255,255}, {142,255,255}, {88,255,255}, {38,255,255}, {38,255,255}, {88,255,255}, {192,255,255}, {142,255,255}, {142,255,255}, {142,255,255}, {142,255,255}, {142,255,255}, {142,255,255}, {88,255,255}, {88,255,82}, {192,255,255}, {88,255,255}, {38,255,255}, {142,255,255}, {88,255,255}, {192,255,255}, {192,255,255}, {192,255,255}, {37,255,127}, {142,255,255}, {38,255,255}, {38,255,255}, {25,255,255}, {25,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0} },

    [5] = { {0,255,255}, {38,255,255}, {192,255,255}, {192,255,255}, {192,255,255}, {88,255,255}, {88,255,255}, {0,255,255}, {0,255,255}, {25,255,255}, {25,255,255}, {88,255,255}, {25,255,255}, {142,255,255}, {38,255,255}, {88,255,255}, {88,255,255}, {142,255,255}, {0,0,0}, {0,0,0}, {142,255,255}, {142,255,255}, {142,255,255}, {142,255,255}, {0,0,0}, {0,255,255}, {0,0,0}, {25,255,255}, {25,255,255}, {25,255,255}, {192,255,255}, {142,255,255}, {88,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {192,255,255}, {0,0,0}, {88,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {88,255,255}, {192,255,255}, {142,255,255}, {25,255,255}, {192,255,255}, {192,255,255}, {88,255,255}, {88,255,255}, {88,255,255}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 5:
        set_layer_color(5);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[9];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case SINGLE_HOLD: layer_on(1); break;
        case DOUBLE_TAP: register_code16(KC_SPACE); register_code16(KC_SPACE); break;
        case DOUBLE_HOLD: layer_move(5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case SINGLE_HOLD:
          layer_off(1);
        break;
        case DOUBLE_TAP: unregister_code16(KC_SPACE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_GRV);
        tap_code16(DE_GRV);
        tap_code16(DE_GRV);
    }
    if(state->count > 3) {
        tap_code16(DE_GRV);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(DE_GRV); break;
        case SINGLE_HOLD: register_code16(DE_ACUT); break;
        case DOUBLE_TAP: register_code16(DE_TILD); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_GRV); register_code16(DE_GRV);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(DE_GRV); break;
        case SINGLE_HOLD: unregister_code16(DE_ACUT); break;
        case DOUBLE_TAP: unregister_code16(DE_TILD); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_GRV); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    }
    if(state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_ENTER); break;
        case SINGLE_HOLD: layer_on(3); break;
        case DOUBLE_TAP: register_code16(KC_ENTER); register_code16(KC_ENTER); break;
        case DOUBLE_HOLD: layer_move(3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ENTER); register_code16(KC_ENTER);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_ENTER); break;
        case SINGLE_HOLD:
          layer_off(3);
        break;
        case DOUBLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ENTER); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    }
    if(state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_ENTER); break;
        case DOUBLE_TAP: layer_move(2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ENTER); register_code16(KC_ENTER);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ENTER); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_C);
        tap_code16(KC_C);
        tap_code16(KC_C);
    }
    if(state->count > 3) {
        tap_code16(KC_C);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_C); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(KC_C))); break;
        case DOUBLE_TAP: register_code16(KC_C); register_code16(KC_C); break;
        case DOUBLE_HOLD: register_code16(LALT(LCTL(KC_4))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_C); register_code16(KC_C);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_C); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(KC_C))); break;
        case DOUBLE_TAP: unregister_code16(KC_C); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LCTL(KC_4))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_C); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case SINGLE_HOLD: layer_on(5); break;
        case DOUBLE_TAP: register_code16(KC_SPACE); register_code16(KC_SPACE); break;
        case DOUBLE_HOLD: layer_move(1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case SINGLE_HOLD:
          layer_off(5);
        break;
        case DOUBLE_TAP: unregister_code16(KC_SPACE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_O);
        tap_code16(KC_O);
        tap_code16(KC_O);
    }
    if(state->count > 3) {
        tap_code16(KC_O);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_O); break;
        case SINGLE_HOLD: register_code16(DE_OE); break;
        case DOUBLE_TAP: register_code16(KC_O); register_code16(KC_O); break;
        case DOUBLE_HOLD: register_code16(LALT(LCTL(KC_O))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_O); register_code16(KC_O);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_O); break;
        case SINGLE_HOLD: unregister_code16(DE_OE); break;
        case DOUBLE_TAP: unregister_code16(KC_O); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LCTL(KC_O))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_O); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    }
    if(state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_ENTER); break;
        case SINGLE_HOLD: layer_on(3); break;
        case DOUBLE_TAP: register_code16(KC_ENTER); register_code16(KC_ENTER); break;
        case DOUBLE_HOLD: layer_move(3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ENTER); register_code16(KC_ENTER);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_ENTER); break;
        case SINGLE_HOLD:
          layer_off(3);
        break;
        case DOUBLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ENTER); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
    }
    if(state->count > 3) {
        tap_code16(KC_TAB);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_TAB); break;
        case SINGLE_HOLD: layer_move(0); break;
        case DOUBLE_TAP: layer_move(2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_TAB); register_code16(KC_TAB);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_TAB); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_TAB); break;
    }
    dance_state[8].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case MAC_MISSION_CONTROL:
      HCS(0x29F);
    case MAC_SPOTLIGHT:
      HCS(0x221);
    case MAC_SIRI:
      HCS(0xCF);
    case MAC_LOCK:
      HCS(0x19E);

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_TAB);
        } else {
          unregister_code16(KC_TAB);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_ESCAPE);
        } else {
          unregister_code16(KC_ESCAPE);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_EXLM);
        } else {
          unregister_code16(DE_EXLM);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_AT);
        } else {
          unregister_code16(DE_AT);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_HASH);
        } else {
          unregister_code16(DE_HASH);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_DLR);
        } else {
          unregister_code16(DE_DLR);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_PERC);
        } else {
          unregister_code16(DE_PERC);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_SLSH);
        } else {
          unregister_code16(DE_SLSH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_QST);
        } else {
          unregister_code16(DE_QST);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_SCLN);
        } else {
          unregister_code16(DE_SCLN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_COLN);
        } else {
          unregister_code16(DE_COLN);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_A);
        } else {
          unregister_code16(KC_A);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_AE);
        } else {
          unregister_code16(DE_AE);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_S);
        } else {
          unregister_code16(KC_S);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_SS);
        } else {
          unregister_code16(DE_SS);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_CAPS);
        } else {
          unregister_code16(KC_CAPS);
        }
      } else {
        if (record->event.pressed) {
          layer_move(2);
        } else {
          layer_move(2);
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_CIRC);
        } else {
          unregister_code16(DE_CIRC);
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_AMPR);
        } else {
          unregister_code16(DE_AMPR);
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_ASTR);
        } else {
          unregister_code16(DE_ASTR);
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_LPRN);
        } else {
          unregister_code16(DE_LPRN);
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_0);
        } else {
          unregister_code16(KC_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_RPRN);
        } else {
          unregister_code16(DE_RPRN);
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_U);
        } else {
          unregister_code16(KC_U);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_UE);
        } else {
          unregister_code16(DE_UE);
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_O);
        } else {
          unregister_code16(KC_O);
        }
      } else {
        if (record->event.pressed) {
          register_code16(CH_OE);
        } else {
          unregister_code16(CH_OE);
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_BSLS);
        } else {
          unregister_code16(DE_BSLS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_PIPE);
        } else {
          unregister_code16(DE_PIPE);
        }  
      }  
      return false;
    case DUAL_FUNC_19:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_QUOT);
        } else {
          unregister_code16(DE_QUOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_DQOT);
        } else {
          unregister_code16(DE_DQOT);
        }  
      }  
      return false;
    case DUAL_FUNC_20:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_LESS);
        } else {
          unregister_code16(DE_LESS);
        }  
      }  
      return false;
    case DUAL_FUNC_21:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_MORE);
        } else {
          unregister_code16(DE_MORE);
        }  
      }  
      return false;
    case DUAL_FUNC_22:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_MINS);
        } else {
          unregister_code16(DE_MINS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_UNDS);
        } else {
          unregister_code16(DE_UNDS);
        }  
      }  
      return false;
    case DUAL_FUNC_23:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_EQL);
        } else {
          unregister_code16(DE_EQL);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_PLUS);
        } else {
          unregister_code16(DE_PLUS);
        }  
      }  
      return false;
    case DUAL_FUNC_24:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_LESS);
        } else {
          unregister_code16(DE_LESS);
        }  
      }  
      return false;
    case DUAL_FUNC_25:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_BSLS);
        } else {
          unregister_code16(DE_BSLS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(DE_CIRC));
        } else {
          unregister_code16(LALT(DE_CIRC));
        }  
      }  
      return false;
    case DUAL_FUNC_26:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_CIRC);
        } else {
          unregister_code16(DE_CIRC);
        }  
      }  
      return false;
    case DUAL_FUNC_27:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(DE_CIRC));
        } else {
          unregister_code16(LSFT(DE_CIRC));
        }  
      }  
      return false;
    case DUAL_FUNC_28:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_ENTER);
        } else {
          unregister_code16(KC_ENTER);
        }
      } else {
        if (record->event.pressed) {
          layer_move(0);
        } else {
          layer_move(0);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
