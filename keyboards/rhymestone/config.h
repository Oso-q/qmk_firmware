/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

// GCC include 'config.h" sequence in qmk_firmware/keyboards/rhymestone/
//   -include keyboards/rhymestone/config.h
//   -include keyboards/rhymestone/rev?/config.h
//   -include keyboards/rhymestone/rev?/keymaps/MAPNAME/config.h
//   XXXX.c

#include <serial_config.h>

// GCC include search path in qmk_firmare/keyboards/rhymestone/
//    #include "..." search starts here:
//    #include <...> search starts here:
//     keyboards/rhymestone/rev?/keymaps/MAPNAME
//     keyboards/rhymestone
//     keyboards/rhymestone/rev?
//     .
//     ./tmk_core
//     ......

#ifdef USE_Link_Time_Optimization
  // LTO has issues with macros (action_get_macro) and "functions" (fn_actions),
  //  so just disable them
  #define NO_ACTION_MACRO
  #define NO_ACTION_FUNCTION

  #define DISABLE_LEADER
#endif // USE_Link_Time_Optimization

#if defined(LED_ANIMATIONS) || defined(RGBLIGHT_ANIMATIONS)
   #undef RGBLIGHT_ANIMATIONS
   #define RGBLIGHT_EFFECT_BREATHING
   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
   #define RGBLIGHT_EFFECT_SNAKE
   #define RGBLIGHT_EFFECT_KNIGHT
   #define RGBLIGHT_EFFECT_CHRISTMAS
   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
   #define RGBLIGHT_EFFECT_RGB_TEST
   #define RGBLIGHT_EFFECT_ALTERNATING
#endif

#endif /* CONFIG_H */
