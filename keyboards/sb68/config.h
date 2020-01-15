#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xB00B
#define PRODUCT_ID      0x0068
#define DEVICE_VER      0x000A
#define MANUFACTURER    Seal
#define PRODUCT         sb68
#define DESCRIPTION     Daddy_pls

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { B0, B1, B2, B3, B7 }
#define MATRIX_COL_PINS { D0, D1, D2, D3, C6, C7, F0, F1, F4, F5, F6, F7, B6, B4, D7 }
#define UNUSED_PINS
#define B5_AUDIO

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)
/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#endif
