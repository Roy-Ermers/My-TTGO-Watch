#include "config.h"
#include "../mainbar.h"
#include "note_tile.h"

static void btn_event_cb( lv_obj_t * obj, lv_event_t event );

LV_IMG_DECLARE(wifi_64px);
LV_IMG_DECLARE(bluetooth_64px);
LV_IMG_DECLARE(time_64px);
LV_IMG_DECLARE(brightness_64px);

void note_tile_setup( lv_obj_t *tile, lv_style_t *style, lv_coord_t hres, lv_coord_t vres ) {

    lv_obj_t * wifi_setup = lv_imgbtn_create(tile, NULL);
    lv_imgbtn_set_src(wifi_setup, LV_BTN_STATE_RELEASED, &wifi_64px);
    lv_imgbtn_set_src(wifi_setup, LV_BTN_STATE_PRESSED, &wifi_64px);
    lv_imgbtn_set_src(wifi_setup, LV_BTN_STATE_CHECKED_RELEASED, &wifi_64px);
    lv_imgbtn_set_src(wifi_setup, LV_BTN_STATE_CHECKED_PRESSED, &wifi_64px);
    lv_obj_add_style(wifi_setup, LV_IMGBTN_PART_MAIN, style);
    lv_obj_align(wifi_setup, tile, LV_ALIGN_IN_TOP_LEFT, 48, 48 );
    lv_obj_set_event_cb( wifi_setup, btn_event_cb );

    lv_obj_t * bluetooth_setup = lv_imgbtn_create(tile, NULL);
    lv_imgbtn_set_src(bluetooth_setup, LV_BTN_STATE_RELEASED, &bluetooth_64px);
    lv_imgbtn_set_src(bluetooth_setup, LV_BTN_STATE_PRESSED, &bluetooth_64px);
    lv_imgbtn_set_src(bluetooth_setup, LV_BTN_STATE_CHECKED_RELEASED, &bluetooth_64px);
    lv_imgbtn_set_src(bluetooth_setup, LV_BTN_STATE_CHECKED_PRESSED, &bluetooth_64px);
    lv_obj_add_style(bluetooth_setup, LV_IMGBTN_PART_MAIN, style);
    lv_obj_align(bluetooth_setup, tile, LV_ALIGN_IN_TOP_LEFT, 48+86, 48 );

    lv_obj_t * time_setup = lv_imgbtn_create(tile, NULL);
    lv_imgbtn_set_src(time_setup, LV_BTN_STATE_RELEASED, &time_64px);
    lv_imgbtn_set_src(time_setup, LV_BTN_STATE_PRESSED, &time_64px);
    lv_imgbtn_set_src(time_setup, LV_BTN_STATE_CHECKED_RELEASED, &time_64px);
    lv_imgbtn_set_src(time_setup, LV_BTN_STATE_CHECKED_PRESSED, &time_64px);
    lv_obj_add_style(time_setup, LV_IMGBTN_PART_MAIN, style);
    lv_obj_align(time_setup, tile, LV_ALIGN_IN_TOP_LEFT, 48, 48+86 );

    lv_obj_t * brightness_setup = lv_imgbtn_create(tile, NULL);
    lv_imgbtn_set_src(brightness_setup, LV_BTN_STATE_RELEASED, &brightness_64px);
    lv_imgbtn_set_src(brightness_setup, LV_BTN_STATE_PRESSED, &brightness_64px);
    lv_imgbtn_set_src(brightness_setup, LV_BTN_STATE_CHECKED_RELEASED, &brightness_64px);
    lv_imgbtn_set_src(brightness_setup, LV_BTN_STATE_CHECKED_PRESSED, &brightness_64px);
    lv_obj_add_style(brightness_setup, LV_IMGBTN_PART_MAIN, style);
    lv_obj_align(brightness_setup, tile, LV_ALIGN_IN_TOP_LEFT, 48+86, 48+86 );

}

static void btn_event_cb( lv_obj_t * obj, lv_event_t event ) {
    switch( event ) {
        case( LV_EVENT_CLICKED ):       mainbar_jump_to_maintile();
                                        break;
    }
}
