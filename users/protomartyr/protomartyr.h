#pragma once

#include "quantum.h"
//#include "process_records.h"

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

/* Shift when held, Enter when tapped */
#define SFT_ENT MT(MOD_RSFT, KC_ENT)

/* Activate util layer while holding TAB */
#define TAB_UTL LT(_UTIL, KC_TAB)

/* Control when held, Escape when tapped */
#define ESC_CTL MT(MOD_LCTL, KC_ESC)

#define MACOSLK LCTL(LGUI(KC_Q)) // CTRL+CMD+Q == screen lock in macOS 10.13+
#define EJ_ALL MEH(KC_E) // KeyboardMaestro macro to eject all external disks
#define SN_THINGS MEH(KC_T) // KeyboardMaestro macro to add SN ticket to Things
#define NEW_NOTE MEH(KC_U) // KeyboardMaestro macro to create new scratch note in Ulysses
#define SSH_JAMF MEH(KC_J) // KeyboardMaestro macro to ssh to a Jamf Pro cluster in iTerm
#define TODAY_WORK MEH(KC_0) //KeyboardMaestro macro to open Things to the Today list and filter by the Work tag
#define WORK_TAG MEH(KC_W) //KeyboardMaestro macro to open Things and filter by the Work tag
#define VSCODE MEH(KC_V) //KeyboardMaestro macro to open VSCODE

#ifdef TAP_DANCE_ENABLE
  #include "tap_dances.h"
#endif

#ifdef ENCODER_ENABLE
    bool left_encoder_rotated;
    bool right_encoder_rotated;
    uint16_t encoder_rotated_timer;
#endif



// Shortcut Keys
#define K_LOCK LGUI(LCTL(KC_Q)) // Locks screen on MacOS
#define K_CSCN LGUI(LCTL(LSFT(KC_4))) // Copy a portion of the screen to the clipboard
#define K_CPRF LGUI(LSFT(KC_M)) //  Cmd + Shift + M. Used for switching Google Chrome profiles
#define K_MDSH LSFT(LALT(KC_MINS))

// Layer Keys
#define LT_LOW LT(_LOWER, KC_ENT)
#define LT_RAI LT(_RAISE, KC_SPC)

// Mod-Tap Keys
#define MT_DEL MT(MOD_LALT | MOD_LSFT, KC_DEL)
#define MT_EQL MT(MOD_RSFT, KC_EQL)

// Left-hand home row mods
#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define GUI_D LGUI_T(KC_D)
#define SFT_F LSFT_T(KC_F)

// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)
#define GUI_K RGUI_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define CTL_SCLN RCTL_T(KC_SCLN)

// Layout blocks
#define _____________________QWERTY_L1______________________ KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T
#define _____________________QWERTY_L2______________________ ESC_CTL, KC_A,  KC_S,  KC_D,  KC_F,  KC_G
#define ___________________QWERTY_L2_MODS___________________ ESC_CTL, CTL_A, ALT_S, GUI_D, SFT_F, KC_G
#define _____________________QWERTY_L3______________________ XXXXXXX, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B

#define _____________________QWERTY_R1______________________ KC_Y, KC_U,  KC_I,    KC_O,   KC_P,     KC_BSLS
#define _____________________QWERTY_R2______________________ KC_H, KC_J,  KC_K,    KC_L,   KC_SCLN,  KC_QUOT
#define ___________________QWERTY_R2_MODS___________________ KC_H, SFT_J, GUI_K,   ALT_L,  CTL_SCLN, KC_QUOT
#define _____________________QWERTY_R3______________________ KC_N, KC_M,  KC_COMM, KC_DOT, KC_SLSH,  KC_ENT

#define _____________________NUM_LEFT_______________________ KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5
#define _____________________NUM_RIGHT______________________ KC_6,  KC_7, KC_8, KC_9, KC_0, KC_MINS

#define _____________________FUNC_LEFT______________________ KC_F1, KC_F2, KC_F3, KC_F4,  KC_F5,  KC_F6
#define _____________________FUNC_RIGHT_____________________ KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12

#define _____________________SYM_LEFT_______________________ KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define _____________________SYM_RIGHT______________________ KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS

#define _____________________LOWER_L1_______________________ _____________________SYM_LEFT_______________________
#define _____________________LOWER_L2_______________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define _____________________LOWER_L3_______________________ KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define _____________________LOWER_R1_______________________ _____________________SYM_RIGHT______________________
#define _____________________LOWER_R2_______________________ XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE
#define _____________________LOWER_R3_______________________ _______________NAV_1______________, XXXXXXX, XXXXXXX

#define _____________________RAISE_L1_______________________ KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define _____________________RAISE_L2_______________________ _____________________FUNC_LEFT______________________
#define _____________________RAISE_L3_______________________ _____________________FUNC_RIGHT_____________________

#define _____________________RAISE_R1_______________________ KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC
#define _____________________RAISE_R2_______________________ KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS
#define _____________________RAISE_R3_______________________ _______________NAV_2______________, XXXXXXX, XXXXXXX

#define _____________________ADJUST_L1______________________ XXXXXXX, EEP_RST, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#if defined(RGB_MATRIX_ENABLE) || defined(RGBLIGHT_ENABLE)
  #define _____________________ADJUST_L2______________________ RESET,  RGB_TOG, RGB_SAI, RGB_HUI, RGB_VAI, RGB_MOD
  #define _____________________ADJUST_L3______________________ XXXXXXX, XXXXXXX, RGB_SPD, RGB_SAD, RGB_HUD, RGB_VAD
#else
  #define _____________________ADJUST_L2______________________ RESET,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  #define _____________________ADJUST_L3______________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#endif

#if defined(RGB_MATRIX_ENABLE) || defined(RGBLIGHT_ENABLE)
  #define _____________________ADJUST_R1______________________ RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  #define _____________________ADJUST_R3______________________ RGB_MOD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#else
  #define _____________________ADJUST_R1______________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  #define _____________________ADJUST_R3______________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#endif
#define _____________________ADJUST_R2______________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

// #define _____________________NUMPAD_1_______________________ T_Y, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_PAST
// #define _____________________NUMPAD_2_______________________ XXXXXXX, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_PSLS
// #define _____________________NUMPAD_3_______________________ KC_P0, KC_P1, KC_P2, KC_P3, KC_PDOT, KC_COLN

#define _______________NAV_1______________ KC_PGUP, KC_PGDN, KC_HOME, KC_END
#define _______________NAV_2______________ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT

#define __________________________________ _______, _______, _______, _______

#define _________MEDIA_1_________ KC_BRIU, KC_MPLY, KC_MUTE
#define _________MEDIA_2_________ KC_BRID, KC_MFFD, KC__VOLUP
#define _________MEDIA_3_________ XXXXXXX, KC_MRWD, KC__VOLDOWN

#if defined(KEYBOARD_kyria_rev1)
  #define ________MOD_LEFT_________ KC_LCTL, KC_LALT, LOWER
  #define ________MOD_RIGHT________ RAISE,   KC_DOWN, KC_UP
#else
  #define _____________MOD_LEFT______________ KC_MEH, KC_LCTL, KC_LALT, KC_LGUI,  LOWER
  #define _____________MOD_RIGHT_____________ RAISE,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
#endif

// Layout wrappers
#if defined(LAYOUT_ortho_5x12) || defined(KEYBOARD_preonic)
    #define LAYOUT_wrapper(...) LAYOUT_ortho_5x12(__VA_ARGS__)
#elif defined(LAYOUT_ortho_4x12)
    #define LAYOUT_wrapper(...) LAYOUT_ortho_4x12(__VA_ARGS__)
#elif defined(KEYBOARD_boardwalk)
    #define LAYOUT_wrapper(...) LAYOUT_ortho_2x2u(__VA_ARGS__)
#elif defined(KEYBOARD_kyria_rev1)
    #define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)
#endif
