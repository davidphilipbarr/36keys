#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFC32
#define PRODUCT_ID      0x0287
#define DEVICE_VER      0x0001
#define MANUFACTURER    dpb
#define PRODUCT         crab
#define DESCRIPTION     crabby

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

// wiring of each half
#define MATRIX_ROW_PINS { D4, C6, D7, E6 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3 }
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

/* communication between sides */
#define USE_SERIAL
#define SERIAL_USE_MULTI_TRANSACTION
#define SOFT_SERIAL_PIN D2

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

