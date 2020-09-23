#pragma once

/* Key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// Wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */
/* disable action features */
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define DISABLE_LEADER
#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }

#define EE_HANDS
#define USE_SERIAL_PD2

#define TAPPING_TERM_PER_KEY

#define OLED_TIMEOUT 600000 // 10 minutes

#define TAPPING_TOGGLE 2

#define NO_MUSIC_MODE