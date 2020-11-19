#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    qmkbuilder
#define PRODUCT         keyboard
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

/* key matrix pins */
//#define MATRIX_ROW_PINS { B0, B1 }
//#define MATRIX_COL_PINS { B2, B3, B4 }


#define DIRECT_PINS { \
{ D7, C6, D4, D1 }, \
{ B1, B4, B5, B3 } \
}


#define UNUSED_PINS



