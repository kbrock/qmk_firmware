#pragma once

// place overrides here

// when in doubt, send both keys
#define IGNORE_MOD_TAP_INTERRUPT
// upper right is esc, command-`, shift-~, but ~ when shift or command. command alt is esc
#define GRAVE_ESC_ALT_OVERRIDE
#undef PERMISSIVE_HOLD
//#define TAPPING_FORCE_HOLD
//#define RETRO_TAPPING

// #define IGNORE_MOD_TAP_INTERRUPT_PER_KEY
// bool get_ignore_mod_tap_interrupt(uint16_t keycode) {
//   switch (keycode) {
//     case LSFT_T(KC_GRV):
//       return false;
//     case RSFT_T(KC_RBRC):
//       return false;
//     case CTRL_T(KC_TAB):
//       return false;
//     case LT(3, KC_BSPC)
//       return false;
//     default: //,  LGUI_T(KC_SPC):
//       return true;
//   }
// }

#define RGB_DI_PIN D3
#ifdef RGB_DI_PIN
  #define RGBLED_NUM 1
  #define RGBLIGHT_HUE_STEP 16
  #define RGBLIGHT_SAT_STEP 16
  #define RGBLIGHT_VAL_STEP 16
  #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// /*== all animations enable ==*/
//  #define RGBLIGHT_ANIMATIONS
// kb: NOTE disabled all animations
// /*== or choose animations ==*/
//   #define RGBLIGHT_EFFECT_BREATHING
//   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//   #define RGBLIGHT_EFFECT_SNAKE
//   #define RGBLIGHT_EFFECT_KNIGHT
//   #define RGBLIGHT_EFFECT_CHRISTMAS
//   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//   #define RGBLIGHT_EFFECT_RGB_TEST
//   #define RGBLIGHT_EFFECT_ALTERNATING
// /*== customize breathing effect ==*/
//   /*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
//   #define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64
//   /*==== use exp() and sin() ====*/
//   #define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
//   #define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
#endif
