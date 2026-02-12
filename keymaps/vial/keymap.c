#include QMK_KEYBOARD_H
#include <stdio.h>
#include "leds.c"

enum custom_keycodes {   //must be declared before keymaps[] array
    CUT2HOME = QK_KB_0,
    CUT2END,
    CUTLINE,
    KC_ALT_TAB,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT( //Alphabet
		KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,                                         KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, 
		KC_ESC,KC_Q, KC_W, KC_E, KC_R, KC_T,                                        KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, 
		KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G,                                       KC_H,  KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, 
		KC_LGUI, KC_Z, KC_X, KC_C, KC_V, KC_B,                                      KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_DEL,
		XXXXXXX, XXXXXXX, XXXXXXX, KC_LCTL, MO(1), KC_LSFT,                         KC_SPC, MO(2), KC_LALT, XXXXXXX, XXXXXXX, XXXXXXX), 

	[1] = LAYOUT( //Numpad and Punctuation
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                                   KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, 
		KC_TILD, KC_7, KC_8, KC_9, KC_PDOT, KC_PLUS,                                KC_PERC, KC_DLR, KC_EXLM, KC_LCBR, KC_RCBR,KC_DQUO,  
		KC_GRV, KC_4, KC_5, KC_6, KC_0, KC_MINS,                                    KC_AMPR, KC_HASH, KC_PIPE, KC_LBRC, KC_RBRC, KC_QUOT, 
		KC_LGUI, KC_1, KC_2, KC_3, KC_PENT, KC_ASTR,                                KC_BSLS, KC_AT, KC_CIRC, KC_LPRN, KC_RPRN, KC_UNDS,  
		XXXXXXX, XXXXXXX, XXXXXXX, LCTL_T(KC_BSPC), TO(0), LSFT_T(KC_SLSH),         KC_PENT, LGUI(KC_SPC), KC_LALT, XXXXXXX, XXXXXXX, XXXXXXX), 

	[2] = LAYOUT( //Punctuation and Arrow key
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                                   KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, 
		KC_INS, KC_NUM, KC_APP, KC_SCRL, KC_PAUS, KC_PSCR,                          KC_PGUP, KC_HOME, KC_UP, KC_END, KC_VOLD, KC_VOLU,      
		KC_ALT_TAB, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_MPRV, KC_MNXT,    
		KC_LGUI, RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPLY, KC_MUTE,   
		XXXXXXX, XXXXXXX, XXXXXXX, KC_LCTL, KC_CAPS, KC_LSFT,                       KC_SPC, TO(0), KC_LALT, XXXXXXX, XXXXXXX, XXXXXXX), 

	[3] = LAYOUT( //App hotkeys
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX), 

	[4] = LAYOUT( //App hotkeys
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX), 
                                                                                                  
	[5] = LAYOUT( //App hotkeys
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX), 
                                                                                                  
	[6] = LAYOUT( //KB Bootkey & Sys Reboot,Shutdown & Others                                       
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX)
};

uint8_t mod_state;
bool is_alt_tab_active = false; // Keeping track of Alt key state
bool is_mo_active = false;       // Keeping track of MO(1) state



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	mod_state = get_mods();
    switch (keycode) {
    case CUT2HOME:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_HOME) SS_UP(X_LSFT) SS_RCTL("c") SS_TAP(X_BSPC));
        }
        break;
    case CUT2END:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_END) SS_UP(X_LSFT) SS_RCTL("c") SS_TAP(X_DEL));
        }
        break;
    case CUTLINE:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_HOME) SS_DOWN(X_LSFT) SS_TAP(X_END) SS_TAP(X_RIGHT) SS_UP(X_LSFT) SS_RCTL("c") SS_TAP(X_DEL));
        }
        break;
	case KC_BSPC:
        {
        // Initialize a boolean variable that keeps track
        // of the delete key status: registered or not?
        static bool delkey_registered;
        if (record->event.pressed) {
            // Detect the activation of either shift keys
            if (mod_state & MOD_MASK_SHIFT) {
                // First temporarily canceling both shifts so that
                // shift isn't applied to the KC_DEL keycode
                del_mods(MOD_MASK_SHIFT);
                register_code(KC_DEL);
                // Update the boolean variable to reflect the status of KC_DEL
                delkey_registered = true;
                // Reapplying modifier state so that the held shift key(s)
                // still work even after having tapped the Backspace/Delete key.
                set_mods(mod_state);
                return false;
            }
        } else { // on release of KC_BSPC
            // In case KC_DEL is still being sent even after the release of KC_BSPC
            if (delkey_registered) {
                unregister_code(KC_DEL);
                delkey_registered = false;
                return false;
            }
        }
        // Let QMK process the KC_BSPC keycode as usual outside of shift
        return true;
    }
	case KC_ALT_TAB:
		if (record->event.pressed) {
			if (!is_alt_tab_active) {
				register_code(KC_LALT);  // Press Alt
				is_alt_tab_active = true; // Mark as active
			}
			tap_code(KC_TAB); // Simulate Tab press
		}
		return false; // Skip further processing
	
	case MO(1): // Check for layer switch key
		if (record->event.pressed) {
			is_mo_active = true; // Set MO(1) active on press
		} else {
			is_mo_active = false; // Reset on release
			if (is_alt_tab_active) {
				unregister_code(KC_LALT); // Release Alt when MO(1) is released
				is_alt_tab_active = false; // Mark as inactive
			}
		}
	}
    return true;
};