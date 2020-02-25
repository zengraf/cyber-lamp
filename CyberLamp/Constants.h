#pragma once

// Settings
#define BUTTONS_QUANTITY    5
#define FPS                 60

// Buttons
#define CENTER              0
#define UP                  1
#define DOWN                2
#define RIGHT               3
#define LEFT                4

// Pins
#define LED_PIN             2
#define BUTTON_PINS         {4, 12, 13, 14, 15}        // Center, up, down, right, left

// Matrix
#define COLOR_ORDER         GRB
#define WIDTH               16
#define HEIGHT              16
#define LEDS_QUANTITY       WIDTH * HEIGHT
#define BRIGHTNESS_LIMIT    150
#define CURRENT_LIMIT       2000

// Modes
typedef enum mode_id {
    WHITE_LIGHT,
    SPARKLES
} ModeID;

#define LOWER_TEMP          2000.
#define UPPER_TEMP          4500.

typedef enum controller_instructions {
    SWITCH_POWER,
    NEXT_MODE,
    PREVIOUS_MODE,
    INCREASE_BRIGHTNESS,
    DECREASE_BRIGHTNESS,
    INCREASE_SPEED,
    DECREASE_SPEED,
    INCREASE_SCALE,
    DECREASE_SCALE
} Instruction