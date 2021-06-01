#include "protomartyr.h"
#include QMK_KEYBOARD_H

#define _BL0 0
#define _FL1 1
#define _FL2 2
#define _FL3 3
#define LT_FL1 LT(_FL1, KC_ENT)

// #define MACOSLK LCTL(LGUI(KC_Q)) // CTRL+CMD+Q == screen lock in macOS 10.13+

enum rys_keycodes {
  STOKEN1 = SAFE_RANGE,
  STOKEN2,
  STOKEN3,
  STOKEN4,
  STOKEN5,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
    case STOKEN1:
      if (record->event.pressed) {
        SEND_STRING(RYS_STOKEN1);
      }
      break;
    case STOKEN2:
      if (record->event.pressed) {
        SEND_STRING(RYS_STOKEN2);
      }
      break;
    case STOKEN3:
      if (record->event.pressed) {
        SEND_STRING(RYS_STOKEN3);
      }
      break;
    case STOKEN4:
      if (record->event.pressed) {
        SEND_STRING(RYS_STOKEN4);
      }
      break;
    case STOKEN5:
      if (record->event.pressed) {
        SEND_STRING(RYS_STOKEN5);
      }
      break;
  }
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap base layer (_BL0) - default layer
   * ,---------------------------.
   * | ST1  | ST2  | ST3  | ST4  |
   * |---------------------------|
   * |MO(1  | LOCK | VOL-| MO(1) |
   * `---------------------------'
   */
   [_BL0] = LAYOUT(
    STOKEN1,  STOKEN2,  K_CSCN, MACOSLK,
    MIC_MUTE, TEAMS_MUTE, KC_ENT, LT_FL1),
  /* Keymap base layer (_FL1) - function layer 1
   * ,---------------------------.
   * |      |      |      | RST  |
   * |---------------------------|
   * |      | ST5  |   \  |      |
   * `---------------------------'
   */
   [_FL1] = LAYOUT(
     BL_INC, _______, BL_TOGG, RESET,
     BL_DEC, TEAMS_MUTE, KC_NUBS, _______),
  /* Keymap base layer (_FL2) - function layer 2
   * ,---------------------------.
   * |      |      |      |      |
   * |---------------------------|
   * |      |      |      |      |
   * `---------------------------'
   */
   [_FL2] = LAYOUT(
     _______, _______, _______, _______,
     _______, _______, _______, _______),
  /* Keymap base layer (_FL3) - function layer 3
   * ,---------------------------.
   * |      |      |      |      |
   * |---------------------------|
   * |      |      |      |      |
   * `---------------------------'
   */
   [_FL3] = LAYOUT(
     _______, _______, _______, _______,
     _______, _______, _______, _______),
};

void matrix_init_user(void)
{
#ifdef BACKLIGHT_ENABLE
    backlight_level(100);
#endif
}
