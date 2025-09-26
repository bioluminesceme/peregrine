// Copyright 2024 Custom (@user)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "process_steno.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │CPY│ S │ T │ P │ H │ * │       │ * │ F │ P │ L │ T │ D │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │PST│ S │ K │ W │ R │ * │       │ * │ R │ B │ G │ S │ Z │
     * └───┴───┴───┼───┼───┼───┤       ├───┼───┼───┴───┴───┴───┘
     *             │N1 │ A │ O │       │ E │ U │N2 │
     *             └───┴───┴───┘       └───┴───┴───┘
     *
     */
    [0] = LAYOUT(
        LCTL(KC_C), STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,    STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
        LCTL(KC_V), STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,    STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
                                      STN_N1,  STN_A,   STN_O,      STN_E,   STN_U,   STN_N2
    )
};

