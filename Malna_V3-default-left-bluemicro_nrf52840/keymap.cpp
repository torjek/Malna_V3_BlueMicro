/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"



#if KEYBOARD_SIDE == SINGLE
std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    KEYMAP2ARRAY(KEYMAP(
	    KC_A,  KC_A,    KC_A,    KC_A,    KC_A,    KC_A,
        KC_A,  KC_A,    KC_A,    KC_A,    KC_A,    KC_A,
        KC_A,  KC_A,    KC_A,    KC_A,    KC_A,    KC_A,
        KC_A,  KC_A,    KC_A,    KC_A,    KC_A,    KC_A,
		KC_A,  KC_A,    KC_A,    KC_A,    KC_A,    KC_A
    ));

void setupKeymap() {

   // no layers for SINGLE keymap
   // this is a keymap that's used for testing that each key is responding properly to key presses
   // flash this keymap to both left and right to test whether each half works properly.
   // once tested, you can flash the left and right to their respective halves.

}
#endif


#if KEYBOARD_SIDE == LEFT

/* Qwerty
 * ,------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   -  | 
 * |------+------+------+------+------+-------------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   [  |
 * |------+------+------+------+------+------|------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |Space |
 * |------+------+------+------+------+------+------'
 * | Ctrl | GUI  | Alt  | L(3) | L(1) |Space |
 * `-----------------------------------------'
 */

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    KEYMAP2ARRAY(KEYMAP(
 /*       KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  KC_MINS, 
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  KC_LBRC,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_SPC,
        KC_LCTL, KC_LGUI, KC_LALT, LAYER_3, LAYER_1, KC_SPC,_______
    ));*/
	
	    KC_A,  KC_A,    KC_A,    KC_A,    KC_A,    KC_A,
        KC_A,  KC_A,    KC_A,    KC_A,    KC_A,    KC_A,
        KC_A,  KC_A,    KC_A,    KC_A,    KC_A,    KC_A,
        KC_A,  KC_A,    KC_A,    KC_A,    KC_A,    KC_A,
		KC_A,  KC_A,    KC_A,    KC_A,    KC_A,    KC_A
    ));
/*	
		KC_Q,   KC_W,    KC_F,    KC_P,    KC_G,         		           //  KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,
		KC_A,   KC_R,    KC_S,    KC_T,    KC_D,         		           //  KC_H,    KC_N,    KC_E,    KC_I,    KC_O,
		KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, 						//	 KC_K,    KC_M, KC_COMM,  KC_DOT, KC_MINUS,
        KC_ESC, KC_LALT,KC_LGUI,  KC_LCPO, LT(_CODE, KC_SPC), 		 	//	LT(_SHIFT, KC_1), KC_BSPC,  SGUI(KC_S), RGUI(KC_DOT), TG(_CODE),
		KC_LSFT, LWIN(KC_LEFT), LGUI(KC_TAB), LWIN(KC_RIGHT), KC_ENT 	//	KC_QUOT, KC_UP,   KC_LEFT,   KC_DOWN,   KC_RIGHT
		//KC_LSFT, UC(0x00E5), UC(0x00F8), UC(0x00E6), KC_ENT, 		KC_QUOT, KC_UP,   KC_LEFT,   KC_DOWN,   KC_RIGHT
	));
*/
 
void setupKeymap() {

/* Layer 1 (Raise)
 * ,------------------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |   -  | 
 * |------+------+------+------+------+-------------|
 * | Del  |  F1  | F2   |  F3  | F4   |  F5  |  {   |
 * |------+------+------+------+------+------|------|
 * | Shift|  F7  | F8   |  F9  |  F10 | F11  |Space |
 * |------+------+------+------+------+------+------'
 * | Ctrl | GUI  | Alt  | L(3) | L(1) |Space |
 * `-----------------------------------------'
 */
    uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
        KC_1,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_Y, \
        KC_2,  KC_A,    KC_S,    KC_D,    KC_F,    KC_H, \
        KC_3,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_N, \
        KC_4,  KC_O,    KC_P,    KC_Q,    KC_R,    KC_S, \
		KC_5,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0  \
    );

    /* Layer 2 (lower)
 * ,------------------------------------------------.
 * |  ~   |   !  |   @  |   #  |   $  |   %  |   _  |
 * |------+------+------+------+------+-------------|
 * | Del  |  F1  | F2   |  F3  | F4   |  F5  |  (   |
 * |------+------+------+------+------+------|------|
 * | Shift|  F7  | F8   |  F9  |  F10 | F11  |Space |
 * |------+------+------+------+------+------+------'
 * | Ctrl | GUI  | Alt  | L(3) | L(1) |Space |
 * `-----------------------------------------'
 */
    uint32_t layer2[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
        KC_1,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_Y, \
        KC_2,  KC_A,    KC_S,    KC_D,    KC_F,    KC_H, \
        KC_3,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_N, \
        KC_4,  KC_O,    KC_P,    KC_Q,    KC_R,    KC_S, \
		KC_5,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0  \
    );

    /* Layer 3
 * ,------------------------------------------------.
 * |  `   |   F1 | F2   |  F3  |  F4  |  F5  |      | 
 * |------+------+------+------+------+-------------|
 * |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------|
 * | Shift|      |      |      |      |      |Space |
 * |------+------+------+------+------+------+------'
 * | Ctrl | GUI  | Alt  | L(3) | L(1) |Space |
 * `-----------------------------------------'
 */
    uint32_t layer3[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
/*  KC_GRAVE,KC_F1,   KC_F2,  KC_F3,   KC_F4,   KC_F5, _______,  \
 _______, _______,_______,_______, _______, _______, _______,   \
  KC_LSFT,_______,_______,_______, _______, _______,  KC_SPC,  \
  KC_LCTL , KC_LGUI, KC_LALT, LAYER_3, LAYER_1,KC_SPC,_______ \
);*/

        KC_1,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_Y, \
        KC_2,  KC_A,    KC_S,    KC_D,    KC_F,    KC_H, \
        KC_3,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_N, \
        KC_4,  KC_O,    KC_P,    KC_Q,    KC_R,    KC_S, \
		KC_5,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0  \
    );

    /*
     * add the other layers on the regular presses.
     */
    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            matrix[row][col].addActivation(_L1, Method::PRESS, layer1[row][col]);
            matrix[row][col].addActivation(_L2, Method::PRESS, layer2[row][col]);
            matrix[row][col].addActivation(_L3, Method::PRESS, layer3[row][col]);
        }
    }

    // if you want to add Tap/Hold or Tap/Doubletap activations, then you add them below.

}

#endif  // left



#if KEYBOARD_SIDE == RIGHT

/* Qwerty
 * ,------------------------------------------------.
 * |   =  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------|
 * |   [  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------|
 * | Space|   N  |   M  |   ,  |   .  |   /  |Enter |
 * `------+------+------+------+------+------+------|
 *        | Space| L(2) | Left | Down |  Up  |Right |
 *        `-----------------------------------------'
 */

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    KEYMAP2ARRAY(KEYMAP(
	    KC_1,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_Y, 
        KC_2,  KC_A,    KC_S,    KC_D,    KC_F,    KC_H,
        KC_3,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_N,
        KC_4,  KC_O,    KC_P,    KC_Q,    KC_R,    KC_S,
		KC_5,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0 
    ));

 

void setupKeymap() {

/* Layer 1 (Raise)
 * ,------------------------------------------------.
 * |   =  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------|
 * |   [  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------|
 * | Space|   N  |   M  |   ,  |   .  |   /  |Enter |
 * `------+------+------+------+------+------+------|
 *        | Space| L(2) | Left | Down |  Up  |Right |
 *        `-----------------------------------------'
 */
    uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
        KC_1,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_Y, \
        KC_2,  KC_A,    KC_S,    KC_D,    KC_F,    KC_H, \
        KC_3,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_N, \
        KC_4,  KC_O,    KC_P,    KC_Q,    KC_R,    KC_S, \
		KC_5,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0  \
    );

    /* Layer 2 (lower)
 * ,------------------------------------------------.
 * |   =  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------|
 * |   [  |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------|------|
 * | Space| F12  |ISO ~ |ISO | |      |      |      |
 * `------+------+------+------+------+------+------|
 *        | Space| L(2) | Left | Down |  Up  |Right |
 *        `-----------------------------------------'
 */
    uint32_t layer2[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
        KC_1,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_Y, \
        KC_2,  KC_A,    KC_S,    KC_D,    KC_F,    KC_H, \
        KC_3,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_N, \
        KC_4,  KC_O,    KC_P,    KC_Q,    KC_R,    KC_S, \
		KC_5,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0  \
    );
    /* Layer 3
 * ,------------------------------------------------.
 * |   =  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------|
 * |   [  |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------|------|
 * | Space| F12  |ISO ~ |ISO | |      |      |      |
 * `------+------+------+------+------+------+------|
 *        | Space| L(2) | Left | Down |  Up  |Right |
 *        `-----------------------------------------'
 */
    uint32_t layer3[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
        KC_1,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_Y, \
        KC_2,  KC_A,    KC_S,    KC_D,    KC_F,    KC_H, \
        KC_3,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_N, \
        KC_4,  KC_O,    KC_P,    KC_Q,    KC_R,    KC_S, \
		KC_5,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0  \
    );

    /*
     * add the other layers
     */
    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            matrix[row][col].addActivation(_L1, Method::PRESS, layer1[row][col]);
            matrix[row][col].addActivation(_L2, Method::PRESS, layer2[row][col]);
            matrix[row][col].addActivation(_L3, Method::PRESS, layer3[row][col]);
        }
    }

}


#endif




