/*
 * HHKB Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Fn1|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Fn3  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |CTRL  |  A|  S|  D|Fn2|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Fn4     |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Fn5   |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |LANG2|LANG1|
     *       `---------------------------------------------'
     */
    KEYMAP(FN1, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           FN3, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL,A,   S,   D, FN2,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           FN4, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,FN5,FN0,             \
                LALT,LGUI,          SPC,                LANG2,LANG1),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|VoD|VoU|Mut|  F|   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, BSPC,      \
           LCTL,VOLD,VOLU,MUTE,   F,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 2: Vi mode
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
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
    KEYMAP(ESC,   F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, INS, DEL,   \
           TAB,   NO,  NO,  NO,  NO,  NO,  NO,PGUP,  NO,  NO,  NO,  NO,  NO,BSPC,      \
             NO,  NO,  NO,PGDN, FN2,  NO,LEFT,DOWN,  UP,RGHT,  NO,  NO,PENT,            \
             NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 3: Numpad mode
     * ,-----------------------------------------------------------.
     * |Esc|   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |Fn3  |   |   |   |   |   | 7 | 8 | 9 | = |   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   | 4 | 5 | 6 | + |   |   |Return  |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   | 1 | 2 | 3 | - |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |           0           |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(ESC,   NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,   \
           FN3,   NO,  NO,  NO,  NO,  NO,   7,   8,   9, EQL,  NO,  NO,  NO,BSPC,      \
           TRNS,  NO,  NO,  NO,  NO,  NO,   4,   5,   6,PPLS,  NO,  NO,PENT,            \
           TRNS,  NO,  NO,  NO,  NO,  NO,   1,   2,   3,MINS,  NO,TRNS,TRNS,            \
                TRNS,TRNS,             0,               TRNS,TRNS),

    /* Layer 4: Mouse mode
     * ,-----------------------------------------------------------.
     * |Fn1|   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |MwL|MwD|MwU|MwR|   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |McL|McD|McU|McR|   |   |Return  |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Mb3|Mb2|Mb1|Mb4|Mb5|   |      |   |
     * `-----------------------------------------------------------'
     *      |    |     |          Mb1          |     |   |
     *      `--------------------------------------------'
     */
    KEYMAP(FN1,   NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,   \
           TAB,   NO,  NO,  NO,  NO,  NO,WH_L,WH_D,WH_U,WH_R,  NO,  NO,  NO,BSPC,      \
           TRNS,  NO,  NO,  NO,  NO,  NO,MS_L,MS_D,MS_U,MS_R,  NO,  NO,PENT,            \
           TRNS,  NO,  NO,  NO,  NO,BTN3,BTN2,BTN1,BTN4,BTN5,  NO,TRNS,TRNS,            \
                TRNS,TRNS,             BTN1,            TRNS,TRNS),
};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
    [1]  = ACTION_LAYER_MOMENTARY(2),
    [2]  = ACTION_LAYER_MOMENTARY(3),
    [3]  = ACTION_LAYER_MOMENTARY(4),
    [4]  = ACTION_LAYER_MOMENTARY(5),
    [5]  = ACTION_LAYER_MOMENTARY(6),
    [6]  = ACTION_LAYER_MOMENTARY(7),
    [7]  = ACTION_LAYER_TOGGLE(1),
    [8]  = ACTION_LAYER_TOGGLE(2),
    [9]  = ACTION_LAYER_TOGGLE(3),
    [10] = ACTION_LAYER_TAP_TOGGLE(1),
    [11] = ACTION_LAYER_TAP_TOGGLE(2),
    [12] = ACTION_LAYER_TAP_TOGGLE(3),
    [13] = ACTION_LAYER_TAP_KEY(1, KC_BSLASH),
    [14] = ACTION_LAYER_TAP_KEY(2, KC_TAB),
    [15] = ACTION_LAYER_TAP_KEY(3, KC_ENTER),
    [16] = ACTION_LAYER_TAP_KEY(4, KC_SPACE),
    [17] = ACTION_LAYER_TAP_KEY(5, KC_SCOLON),
    [18] = ACTION_LAYER_TAP_KEY(6, KC_QUOTE),
    [19] = ACTION_LAYER_TAP_KEY(7, KC_SLASH),
    [20] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_SPACE),
    [21] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_SPACE),
    [22] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_QUOTE),
    [23] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENTER),
    [24] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
    [25] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPACE),
    [26] = ACTION_MODS_ONESHOT(MOD_LCTL),
    [27] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ESC),
    [28] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_BSPACE),
    [29] = ACTION_MODS_ONESHOT(MOD_LSFT),
    [30] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_GRAVE),
    [31] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_BSLASH),
};
#else

enum function_id {
    LSHIFT_LPAREN,
    RSHIFT_RPAREN,
};

const uint16_t fn_actions[] PROGMEM = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
    [1]  = ACTION_LAYER_TAP_KEY(4, KC_ESC),
    [2]  = ACTION_LAYER_TAP_KEY(2, KC_F),
    [3]  = ACTION_LAYER_TAP_KEY(3, KC_TAB),
    [4]  = ACTION_FUNCTION_TAP(LSHIFT_LPAREN), // Function: LShift with tap '('
    [5]  = ACTION_FUNCTION_TAP(RSHIFT_RPAREN), // Function: RShift with tap ')'
};
#endif

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
