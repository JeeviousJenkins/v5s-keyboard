#pragma once

/* RGBLIGHT configuration */
#define WS2812_DI_PIN A9
#define RGBLIGHT_LED_COUNT 2
#define RGBLIGHT_LED_MAP { 1, 0 }
#define RGBLED_SPLIT { 1, 1 }
#define RGBLIGHT_LAYERS
#define RGBLIGHT_MAX_LAYERS 7
#define SPLIT_TRANSPORT_MIRROR

//Enable rgb modes, by defining the effects to include
//Uncomment the effects you want to include

//#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHING
//#define RGBLIGHT_EFFECT_CHRISTMAS
//#define RGBLIGHT_EFFECT_KNIGHT
//#define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#define RGBLIGHT_EFFECT_RGB_TEST
//#define RGBLIGHT_EFFECT_SNAKE
//#define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#define RGBLIGHT_EFFECT_TWINKLE

//Set the default mode, speed, and color
// Hue is a degree on the color wheel from 0 to 360 converted into 0-255 scale
// 200/70/100 becomes: (200*255)/360=142 for hue, (70*255)/100=178 for sat and (100*255)/100=255 for val
#define RGBLIGHT_DEFAULT_HUE 142
// Percent converted to 0-255 scale
#define RGBLIGHT_DEFAULT_SAT 178
// Percent converted to 0-255 scale
#define RGBLIGHT_DEFAULT_VAL 255
#define RGBLIGHT_DEFAULT_SPD 0
//#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_CHRISTMAS
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_BREATHING

#define SPLIT_HAND_PIN B7

#define USB_VBUS_PIN A10
#undef  SPLIT_USB_DETECT
