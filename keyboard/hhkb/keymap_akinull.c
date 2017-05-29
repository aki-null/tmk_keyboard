/*
 * aki_null: my personal keymap
 */
#include "keymap_common.h"


const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Fn3|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Fn1   |  A|  S|  D|Fn2|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Fn4     |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Fn5   |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |LANG2|LANG1|
     *       `---------------------------------------------'
     */
    [0] = \
    KEYMAP(FN3,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS,EQL, BSLS, GRV,\
           TAB,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSPC,     \
           FN1,    A,   S,   D, FN2,   G,   H,   J,   K,   L,SCLN,QUOT, ENT,          \
           FN4,    Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH, FN5, FN0,          \
                LALT,LGUI,          SPC,                 LANG2,LANG1),

    /* Layer 1: Windows Layer
     * ,-----------------------------------------------------------.
     * |Fn3|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Fn1   |  A|  S|  D|Fn2|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Fn4     |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Fn5   |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Fn6  |Alt  |
     *       `---------------------------------------------'
     */
    [1] = \
    KEYMAP(FN3,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS,EQL, BSLS, GRV,\
           TAB,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSPC,     \
           FN1,    A,   S,   D, FN2,   G,   H,   J,   K,   L,SCLN,QUOT, ENT,          \
           FN4,    Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH, FN5, FN0,          \
                LALT,LGUI,          SPC,                 FN6,  RALT),

    /* Layer 2: HHKB mode (HHKB Fn modified)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Hom|   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|  F|   |  *|  /|   |   |   |   |Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|   |   |End|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    [2] = \
    KEYMAP(PWR,   F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, INS, DEL,\
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,HOME,TRNS, BSPC,    \
           TRNS,VOLD,VOLU,MUTE,   F,TRNS,PAST,PSLS,TRNS,TRNS,TRNS,TRNS,PENT,          \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,TRNS,TRNS,END, TRNS,TRNS,          \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 3: Vi mode
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |   |PgU|   |   |   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |      |   |   |PgD|Fn2|   |Lef|Dow|Up |Rig|   |   |Return  |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    [3] = \
    KEYMAP(NO,    F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, INS, DEL,\
           TAB,   NO,  NO,  NO,  NO,  NO,  NO,PGUP,  NO,  NO,  NO,  NO,  NO, BSPC,    \
           TRNS,  NO,  NO,PGDN, FN2,  NO,LEFT,DOWN,  UP,RGHT,  NO,  NO,PENT,          \
           TRNS,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,TRNS,TRNS,          \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 4: Numpad mode
     * ,-----------------------------------------------------------.
     * |Fn3|   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   | 7 | 8 | 9 | = |   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   | 4 | 5 | 6 | + |   |   |Return  |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   | 1 | 2 | 3 | - |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |           0           |     |   |
     *       `-------------------------------------------'
     */
    [4] = \
    KEYMAP(FN3, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   7,   8,   9, EQL,TRNS,TRNS,TRNS,BSPC,      \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   4,   5,   6,PPLS,TRNS,TRNS,PENT,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   1,   2,   3,MINS,TRNS,TRNS,TRNS,           \
                TRNS,TRNS,             0,               TRNS,TRNS),
};



/*
 * Fn action definition
 */
enum function_id {
    LSHIFT_LPAREN,
    RSHIFT_RPAREN,
};

const action_t fn_actions[] PROGMEM = {
    [0]  = ACTION_LAYER_MOMENTARY(2),
    [1]  = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
    [2]  = ACTION_LAYER_TAP_KEY(3, KC_F),
    [3]  = ACTION_LAYER_TAP_TOGGLE(4),
    [4]  = ACTION_FUNCTION_TAP(LSHIFT_LPAREN), // Function: LShift with tap '('
    [5]  = ACTION_FUNCTION_TAP(RSHIFT_RPAREN), // Function: RShift with tap ')'
    [6]  = ACTION_MODS_KEY(MOD_LALT, KC_GRAVE), // Function: Alt Tilde
};

/*
 * user defined action function
 */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses
        // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899
        case LSHIFT_LPAREN:
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        register_mods(MOD_BIT(KC_LSHIFT));
                    }
                } else {
                    register_mods(MOD_BIT(KC_LSHIFT));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    add_weak_mods(MOD_BIT(KC_LSHIFT));
                    send_keyboard_report();
                    register_code(KC_9);
                    unregister_code(KC_9);
                    del_weak_mods(MOD_BIT(KC_LSHIFT));
                    send_keyboard_report();
                    record->tap.count = 0;  // ad hoc: cancel tap
                } else {
                    unregister_mods(MOD_BIT(KC_LSHIFT));
                }
            }
            break;
        case RSHIFT_RPAREN:
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        register_mods(MOD_BIT(KC_RSHIFT));
                    }
                } else {
                    register_mods(MOD_BIT(KC_RSHIFT));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    add_weak_mods(MOD_BIT(KC_RSHIFT));
                    send_keyboard_report();
                    register_code(KC_0);
                    unregister_code(KC_0);
                    del_weak_mods(MOD_BIT(KC_RSHIFT));
                    send_keyboard_report();
                    record->tap.count = 0;  // ad hoc: cancel tap
                } else {
                    unregister_mods(MOD_BIT(KC_RSHIFT));
                }
            }
            break;
    }
}
