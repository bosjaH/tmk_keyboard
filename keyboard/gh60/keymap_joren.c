#include "keymap_common.h"

/*
 * Joren's GH60
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer (using ISO backslash)
     * Keymap 1: Default Layer (using ANSI backslash)
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspc|
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

    /* Overlay: Delete Layer
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   | Delete|
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, DEL, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* Overlay: Oneshot Shift Layer
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
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        FN24,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          FN25, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

	/* Overlay: Game Layer (disable left win and SpaceFN)
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |Backspc|
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |   |   |   |   |   |     Shift|
     * |-----------------------------------------------------------|
     * |    | NO |    |         Space          |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSPC, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        LSFT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          RSFT, \
        TRNS,  NO,TRNS,           SPC,                    TRNS,TRNS,TRNS,TRNS),

    /* Overlay: SpaceFN Layer
     * ,-----------------------------------------------------------.
     * |   |  ||  @|  #|   |   |   |   |   |  {|  }|   |   | Delete|
     * |-----------------------------------------------------------|
     * |     |   |MB4|MWU|MB5|BrB|BrF|Hom|Up |End|   |  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |CAPS  |   |MWL|MWD|MWR|   |PgU|Lef|Dow|Rig|  ´|  `|        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Spc|PgD|WLe|WRi|   |  ~|          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     * Br: Browser (forward/back)
     */
    KEYMAP_ANSI(
        TRNS,FN10,FN11,FN12,TRNS,TRNS,TRNS,TRNS,TRNS,FN13,FN14,TRNS,TRNS, DEL, \
        TRNS,TRNS,BTN4,WH_U,BTN5,WBAK,WFWD,HOME,  UP, END,TRNS,FN15,FN16,FN17, \
        CAPS,TRNS,WH_L,WH_D,WH_R,TRNS,PGUP,LEFT,DOWN,RGHT,FN18,FN19,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS, SPC,PGDN,FN21,FN22,TRNS,FN20,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* Overlay: Extended Function Layer
     * ,-----------------------------------------------------------.
     * |  `| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12| Delete|
     * |-----------------------------------------------------------|
     * |     |Mb4|Mb5|  ´|  `| Tm|Clc|Hom|Up |End|   |Psc|Pau|  Ins|
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |PgU|Lef|Dow|Rig|  '|  \|ConfigFN|
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |PgD|   |VDn|VUp|VMt|          |
     * |-----------------------------------------------------------|
     * |    |    |    |         Space          |    |BrFN|NpFN|    |
     * `-----------------------------------------------------------'
     * Mb: Mouse Button
     * Clc: Calculator
     * Tm: Task Manager
     */
    KEYMAP_ANSI(
        GRV ,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, DEL, \
        TRNS,BTN4,BTN5,FN18,FN19,FN23,CALC,HOME,  UP, END,TRNS,PSCR,PAUS, INS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,LEFT,DOWN,RGHT,QUOT,BSLS,      FN7, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,TRNS,VOLD,VOLU,MUTE,          TRNS, \
        TRNS,TRNS,TRNS,          SPC,                     TRNS, FN2, FN3,TRNS),

    /* Overlay: Browsing Layer
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |
     * |-----------------------------------------------------------|
     * |     |Mb4|Mb5|   |   |   |   |Mb4|MwU|Mb5|   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |PgU|MwL|MwD|MwR|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |PgD|   |   |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |         Space          |    |    |    |Exit|
     * `-----------------------------------------------------------'
     * Mb: Mouse Button
     * Mw: Mouse Wheel
     */
    KEYMAP_ANSI(
        TRNS, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,TRNS, \
        TRNS,BTN4,BTN5,TRNS,TRNS,TRNS,TRNS,BTN4,WH_U,BTN5,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,WH_L,WH_D,WH_R,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS, FN2),

    /* Overlay: Numpad
     * ,-----------------------------------------------------------.
     * |   |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|   |   |       |
     * |-----------------------------------------------------------|
     * |     |  -|  /|   |   |   |  -|  7|  8|  9|  /|   |   |     |
     * |-----------------------------------------------------------|
     * |      |  +|  *|   |   |   |  +|  4|  5|  6|  *|   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  .|  1|  2|  3|   |     Enter|
     * |-----------------------------------------------------------|
     * |    |    |    |                       0|   .|    |NmLc|Exit|
     * `-----------------------------------------------------------'
     * Mb: Mouse Button
     * Mw: Mouse Wheel
     * Mc: Mouse Cursor
     */
    KEYMAP_ANSI(
        TRNS,KP_1,KP_2,KP_3,KP_4,KP_5,KP_6,KP_7,KP_8,KP_9,KP_0,TRNS,TRNS,BSPC, \
        TRNS,PMNS,PSLS,TRNS,TRNS,TRNS,PMNS,KP_7,KP_8,KP_9,PSLS,TRNS,TRNS,TRNS, \
        TRNS,PPLS,PAST,TRNS,TRNS,TRNS,PPLS,KP_4,KP_5,KP_6,PAST,TRNS,     PENT, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PDOT,KP_1,KP_2,KP_3,TRNS,          PENT, \
        TRNS,TRNS,TRNS,          KP_0,                    PDOT,TRNS,NLCK, FN3),

    /* Overlay: Layout selection layer
     * ,-----------------------------------------------------------.
     * |   |Del|Oss|Gm |   |   |   |   |   |   |   |ISO|ANS|BootLdr|
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
     * Oss: One shot shift
     */
    KEYMAP_ANSI(
        TRNS, FN4, FN5, FN6,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, FN8, FN9,BTLD, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      FN7, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
};

/*
 * FN definitions
 */
enum layer_id {
    L_DEFAULT,
    L_DEFAULT_ANSI,
    L_DELETE,
    L_ONESHOT_SHIFT,
    L_GAME,
    L_SPACE_FN,
    L_EXTENDED,
    L_BROWSING,
    L_NUMPAD,
    L_CONFIG
};

enum macro_id {
    ACCENT_ACUTE,
    ACCENT_GRAVE,
    TILDE
};

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(L_SPACE_FN, KC_SPACE),
    [1] = ACTION_LAYER_TAP_KEY(L_EXTENDED, KC_BSPC),
    [2] = ACTION_LAYER_TOGGLE(L_BROWSING),
    [3] = ACTION_LAYER_TOGGLE(L_NUMPAD),
    [4] = ACTION_LAYER_TOGGLE(L_DELETE),
    [5] = ACTION_LAYER_TOGGLE(L_ONESHOT_SHIFT),
    [6] = ACTION_LAYER_TOGGLE(L_GAME),
    [7] = ACTION_LAYER_MOMENTARY(L_CONFIG),
    [8] = ACTION_DEFAULT_LAYER_SET(L_DEFAULT),
    [9] = ACTION_DEFAULT_LAYER_SET(L_DEFAULT_ANSI),
    [10] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_1),      // |
    [11] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_2),      // @
    [12] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_3),      // #
    [13] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_9),      // {
    [14] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_0),      // }
    [15] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_LBRC),   // [
    [16] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_RBRC),   // ]
    [17] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_NUBS),   // backslash
    [18] = ACTION_MACRO(ACCENT_ACUTE),
    [19] = ACTION_MACRO(ACCENT_GRAVE),
    [20] = ACTION_MACRO(TILDE),
    [21] = ACTION_MODS_KEY(MOD_LALT, KC_LEFT),  // Word left
    [22] = ACTION_MODS_KEY(MOD_LALT, KC_RGHT),  // Word right
    [23] = ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_ESC),    // Open Task Manager
    [24] = ACTION_MODS_ONESHOT(MOD_LSFT),       // Oneshot Shift
    [25] = ACTION_MODS_ONESHOT(MOD_RSFT),       // Oneshot Shift
};

/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case ACCENT_ACUTE:
            if (record->event.pressed) {
                return MACRO( D(LCTL), D(LALT), T(QUOT), U(LCTL), U(LALT), T(SPC), END);
            }
            break;
        case ACCENT_GRAVE:
            if (record->event.pressed) {
                return MACRO( D(LCTL), D(LALT), T(BSLS), U(LCTL), U(LALT), T(SPC), END);
            }
            break;
        case TILDE:
            if (record->event.pressed) {
                return MACRO( D(RALT), T(SLSH), U(RALT), T(SPC), END);
            }
            break;
    }
    return MACRO_NONE;
}

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
    if ((layer_state & (L_NUMPAD | L_BROWSING)) != 0) {
        gh60_fn_led_on();
    } else {
        gh60_fn_led_off();
    }

    if ((layer_state & L_GAME) == L_GAME) {
        gh60_wasd_leds_on();
    } else {
        gh60_wasd_leds_off();
    }

    if ((layer_state & L_CONFIG) == L_CONFIG) {
        gh60_esc_led_on();
    } else {
        gh60_esc_led_off();
    }
}
