#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_mouse(
        KC_MS_BTN1,
        KC_MS_BTN2,
        KC_MS_BTN3
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        tap_code(clockwise ? KC_WH_U : KC_WH_D);
    }

    return false;
}

void keyboard_post_init_user(void) {
    pointing_device_set_cpi(500);
}