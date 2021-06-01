// #include "keyboards/wilba_tech/wt_rgb_backlight_keycodes.h"

#pragma once

#define BACKLIGHT_PINS { B5, B7, C6 }
// #define BACKLIGHT_PIN C6
// #define BACKLIGHT_BREATHING
#define BACKLIGHT_LEVELS 3

// enable the mono backlight
#define MONO_BACKLIGHT_ENABLED 1

// disable backlight when USB suspended (PC sleep/hibernate/shutdown)
#define MONO_BACKLIGHT_DISABLE_WHEN_USB_SUSPENDED 0

// disable backlight after timeout in minutes, 0 = no timeout
#define MONO_BACKLIGHT_DISABLE_AFTER_TIMEOUT 0

// the default brightness
#define MONO_BACKLIGHT_BRIGHTNESS 255

// the default effect
#define MONO_BACKLIGHT_EFFECT 1

// the default effect speed (0-3)
#define MONO_BACKLIGHT_EFFECT_SPEED 0

// Backlight config starts after VIA's EEPROM usage,
// dynamic keymaps start after this.
#define VIA_EEPROM_CUSTOM_CONFIG_SIZE 7

// VIA lighting is handled by the keyboard-level code
#define VIA_CUSTOM_LIGHTING_ENABLE