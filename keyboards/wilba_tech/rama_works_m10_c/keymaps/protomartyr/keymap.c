/* Copyright 2020 Jason Williams (Wilba)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "protomartyr.h"
#include QMK_KEYBOARD_H

enum layers
{
    _LAYER0,
    _LAYER1,
    _LAYER2
};

enum custom_keycodes
{
    GIT_ADD = SAFE_RANGE,
    GIT_COMMIT,
    GIT_PUSH,
    GIT_ADCMTPSH
};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    if (record->event.pressed)
    {
        switch (keycode)
        {
        case GIT_ADD:
            SEND_STRING("git add ." SS_TAP(X_ENTER));
            break;
        case GIT_COMMIT:
            SEND_STRING("git commit -m " SS_DOWN(X_LSHIFT) SS_TAP(X_QUOTE) SS_UP(X_LSHIFT));
            break;
        case GIT_PUSH:
            SEND_STRING("git push" SS_TAP(X_ENTER));
            break;
        case GIT_ADCMTPSH:
            SEND_STRING("git add . && git commit -m " SS_DOWN(X_LSHIFT) SS_TAP(X_QUOTE) SS_UP(X_LSHIFT) SS_DOWN(X_LSHIFT) SS_TAP(X_QUOTE) SS_UP(X_LSHIFT));
            SEND_STRING(" && git push");
            SEND_STRING(SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) );
            break;
            return false;
        }
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_LAYER0] = LAYOUT(
    MACOSLK, SSH_JAMF, TO(_LAYER1),
    GIT_ADD, GIT_ADCMTPSH, BUSY_RED,
    MIC_MUTE, BUSY_RED, BUSY_GRN,
    MIC_MUTE),
[_LAYER1] = LAYOUT(
    KC_VOLD, KC_VOLU, TO(_LAYER2),
    KC_MRWD, KC_MPLY, KC_MNXT,
    KC_KP_1, KC_KP_2, KC_KP_3,
    RESET),
[_LAYER2] = LAYOUT(
    KC_ESC, KC_UP, TO(_LAYER0),
    KC_Z, KC_X, KC_SPACE,
    KC_KP_1, KC_KP_2, KC_KP_3,
    KC_KP_0)
};
