#include "keymap_common.h"

/*
 * Joren's GH60
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer (using ISO backslash)
     * Keymap 1: Default Layer (using ANSI backslash)
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |ExtFN |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  Return|
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|     Shift|
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |        SpaceFN         |Alt |Gui |App |Ctrl|
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,NUBS, \
        FN1, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          FN0,                     RALT,RGUI,APP, RCTL),

    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        FN1, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          FN0,                     RALT,RGUI,APP, RCTL),


	/* Overlay 1: Game Layer (disable left win and SpaceFN)
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |          |
     * |-----------------------------------------------------------|
     * |    | NO |    |         Space          |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,  NO,TRNS,           SPC,                    TRNS,TRNS,TRNS,TRNS),

    /* Overlay 2: Oneshot Shift Layer
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |OS Lshft|   |   |   |   |   |   |   |   |   |   |  OS Rshft|
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        FN21,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          FN22, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* Overlay 3: SpaceFN Layer
     * ,-----------------------------------------------------------.
     * |   |  ||  @|  #|   |   |   |   |   |  {|  }|   |   | Delete|
     * |-----------------------------------------------------------|
     * |     |   |MB4|MWU|MB5|   |   |Hom|Up |End|   |  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |CAPS  |   |MWL|MWD|MWR|   |PgU|Lef|Dow|Rig|  ´|  `|        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |PgD|WLe|WRi|   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        TRNS, FN8, FN9, FN10,TRNS,TRNS,TRNS,TRNS,TRNS,FN11,FN12,TRNS,TRNS, DEL,  \
        TRNS,TRNS,BTN4,WH_U,BTN5,TRNS,TRNS,HOME,  UP, END,TRNS,FN13,FN14,FN15,  \
        CAPS,TRNS,WH_L,WH_D,WH_R,TRNS,PGUP,LEFT,DOWN,RGHT,FN16,FN17,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,FN18,FN19,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* Overlay 4: Extended Function Layer
     * ,-----------------------------------------------------------.
     * |  `| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12| Delete|
     * |-----------------------------------------------------------|
     * |MseFN|Mb4|Mb5|   |   | Tm|Clc|Hom|Up |End|   |Psc|Pau|  Ins|
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |PgU|Lef|Dow|Rig|  '|  \|ConfigFN|
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |PgD|   |VDn|VUp|VMt|          |
     * |-----------------------------------------------------------|
     * |    |    |    |         Space          |    |    |GmFN|    |
     * `-----------------------------------------------------------'
     * Mb: Mouse Button
     * MseFN: Mouse Layer
     * GmFN: Game Layer
     * ConfigFN: Configuration Layer
     * Clc: Calculator
     * Tm: Task Manager
     */
    KEYMAP_ANSI(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,  DEL,  \
        FN2 ,BTN4,BTN5,TRNS,TRNS,FN20,CALC,HOME,UP,  END, TRNS,PSCR,PAUS, INS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,LEFT,DOWN,RGHT,QUOT,BSLS,      FN3, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,TRNS,VOLD,VOLU,MUTE,          TRNS, \
        TRNS,TRNS,TRNS,          SPC,                     TRNS,TRNS, FN4,TRNS),

    /* Overlay 5: Mouse layer
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |MseFN|MwU|   |   |   |   |   |Mb1|McU|Mb2|Mb3|   |   |     |
     * |-----------------------------------------------------------|
     * |      |MwD|   |   |   |   |Mb5|McL|McD|McR|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |Mb4|   |   |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     * Mb: Mouse Button
     * Mw: Mouse Wheel
     * Mc: Mouse Cursor
     */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        FN2 ,WH_U,TRNS,TRNS,TRNS,TRNS,TRNS,BTN1,MS_U,BTN2,BTN3,TRNS,TRNS,TRNS,  \
        TRNS,WH_D,TRNS,TRNS,TRNS,TRNS,BTN5,MS_L,MS_D,MS_R,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BTN4,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* Overlay 6: Layout selection layer
     * ,-----------------------------------------------------------.
     * |   |ISO|ANS|Gm |OSS|   |   |   |   |   |   |   |   |BootLdr|
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |ConfigFN|
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     * Gm: Game
     * OSS: One shot shift
     */
    KEYMAP_ANSI(
        TRNS, FN6, FN7, FN4, FN5,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BTLD,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      FN3, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
};

/*
 * Fn action definition
 * Bitwise switching for stacked FN keys?
 */
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(4, KC_SPACE),    // SpaceFN
    [1] = ACTION_LAYER_TAP_KEY(5, KC_BSPC),     // Extended Function Layer
    [2] = ACTION_LAYER_MOMENTARY(6),            // Mouse Layer
    [3] = ACTION_LAYER_MOMENTARY(7),            // Configuration Layer
    [4] = ACTION_LAYER_TOGGLE(2),               // Toggle Game Layer
    [5] = ACTION_LAYER_TOGGLE(3),              // Toggle Oneshot Shift Layer
    [6] = ACTION_DEFAULT_LAYER_SET(0),          // Set qwerty ISO
    [7] = ACTION_DEFAULT_LAYER_SET(1),          // Set qwerty ANSI
    [8] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_1),       // |
    [9] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_2),       // @
    [10] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_3),       // #
    [11] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_9),      // {
    [12] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_0),      // }
    [13] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_LBRC),   // [
    [14] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_RBRC),   // ]
    [15] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_NUBS),   // backslash
    [16] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_QUOT),   // acute ´
    [17] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_BSLS),   // grave `
    [18] = ACTION_MODS_KEY(MOD_LALT, KC_LEFT),              // Word left
    [19] = ACTION_MODS_KEY(MOD_LALT, KC_RGHT),              // Word right
    [20] = ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_ESC),    // Open Task Manager
    [21] = ACTION_MODS_ONESHOT(MOD_LSFT),       // Oneshot Shift
    [22] = ACTION_MODS_ONESHOT(MOD_RSFT),       // Oneshot Shift
};

/* GH60 LEDs
 * (taken from QMK Firmware)
 *   GPIO pads
 *   0 F7 WASD LEDs
 *   1 F6 ESC LED
 *   2 F5 FN LED
 *   3 F4 POKER Arrow LEDs
 *   B2 Capslock LED
 *   B0 not connected
 */
inline void gh60_caps_led_on(void)      { DDRB |=  (1<<2); PORTB &= ~(1<<2); }
inline void gh60_poker_leds_on(void)    { DDRF |=  (1<<4); PORTF &= ~(1<<4); }
inline void gh60_fn_led_on(void)        { DDRF |=  (1<<5); PORTF &= ~(1<<5); }
inline void gh60_esc_led_on(void)       { DDRF |=  (1<<6); PORTF &= ~(1<<6); }
inline void gh60_wasd_leds_on(void)     { DDRF |=  (1<<7); PORTF &= ~(1<<7); }

inline void gh60_caps_led_off(void)     { DDRB &= ~(1<<2); PORTB &= ~(1<<2); }
inline void gh60_poker_leds_off(void)   { DDRF &= ~(1<<4); PORTF &= ~(1<<4); }
inline void gh60_fn_led_off(void)       { DDRF &= ~(1<<5); PORTF &= ~(1<<5); }
inline void gh60_esc_led_off(void)      { DDRF &= ~(1<<6); PORTF &= ~(1<<6); }
inline void gh60_wasd_leds_off(void)    { DDRF &= ~(1<<7); PORTF &= ~(1<<7); }

/*
 * Hooks
 */
void hook_layer_change(uint32_t layer_state) {
    //uint32_t actual_state = default_layer_state | layer_state;
}
