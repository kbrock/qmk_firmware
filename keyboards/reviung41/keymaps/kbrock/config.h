#pragma once

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
// #define DEBOUNCE 5 // currently defaults to 5

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is userful for the Windows task manager shortcut (ctrl+shift+esc).
 */
#define IGNORE_MOD_TAP_INTERRUPT
// upper right is esc, command-`, shift-~, but ~ when shift or command. command alt is esc
#define GRAVE_ESC_ALT_OVERRIDE
// TODO: set permissive hold for only space (and maybe z,x for control/alt)
#undef PERMISSIVE_HOLD

// disabling default enabled options

#undef RGBLIGHT_ANIMATIONS
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#undef LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#undef LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
