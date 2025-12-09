/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_Wifi_View(lv_ui *ui)
{
    //Write codes Wifi_View
    ui->Wifi_View = lv_obj_create(NULL);
    lv_obj_set_size(ui->Wifi_View, 240, 280);
    lv_obj_set_scrollbar_mode(ui->Wifi_View, LV_SCROLLBAR_MODE_OFF);

    //Write style for Wifi_View, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Wifi_View, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Wifi_View, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Wifi_View, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Wifi_View_list_wifi
    ui->Wifi_View_list_wifi = lv_list_create(ui->Wifi_View);
    ui->Wifi_View_list_wifi_item0 = lv_list_add_btn(ui->Wifi_View_list_wifi, LV_SYMBOL_WIFI, "WIFI_1");
    ui->Wifi_View_list_wifi_item1 = lv_list_add_btn(ui->Wifi_View_list_wifi, LV_SYMBOL_WIFI, "WIFI_2");
    ui->Wifi_View_list_wifi_item2 = lv_list_add_btn(ui->Wifi_View_list_wifi, LV_SYMBOL_WIFI, "WIFI_3");
    ui->Wifi_View_list_wifi_item3 = lv_list_add_btn(ui->Wifi_View_list_wifi, LV_SYMBOL_WIFI, "WIFI_4");
    ui->Wifi_View_list_wifi_item4 = lv_list_add_btn(ui->Wifi_View_list_wifi, LV_SYMBOL_WIFI, "WIFI_5");
    lv_obj_set_pos(ui->Wifi_View_list_wifi, 1, 115);
    lv_obj_set_size(ui->Wifi_View_list_wifi, 237, 163);
    lv_obj_set_scrollbar_mode(ui->Wifi_View_list_wifi, LV_SCROLLBAR_MODE_OFF);

    //Write style state: LV_STATE_DEFAULT for &style_Wifi_View_list_wifi_main_main_default
    static lv_style_t style_Wifi_View_list_wifi_main_main_default;
    ui_init_style(&style_Wifi_View_list_wifi_main_main_default);

    lv_style_set_pad_top(&style_Wifi_View_list_wifi_main_main_default, 5);
    lv_style_set_pad_left(&style_Wifi_View_list_wifi_main_main_default, 5);
    lv_style_set_pad_right(&style_Wifi_View_list_wifi_main_main_default, 5);
    lv_style_set_pad_bottom(&style_Wifi_View_list_wifi_main_main_default, 5);
    lv_style_set_bg_opa(&style_Wifi_View_list_wifi_main_main_default, 255);
    lv_style_set_bg_color(&style_Wifi_View_list_wifi_main_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_Wifi_View_list_wifi_main_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_Wifi_View_list_wifi_main_main_default, 1);
    lv_style_set_border_opa(&style_Wifi_View_list_wifi_main_main_default, 255);
    lv_style_set_border_color(&style_Wifi_View_list_wifi_main_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_Wifi_View_list_wifi_main_main_default, LV_BORDER_SIDE_TOP);
    lv_style_set_radius(&style_Wifi_View_list_wifi_main_main_default, 3);
    lv_style_set_shadow_width(&style_Wifi_View_list_wifi_main_main_default, 0);
    lv_obj_add_style(ui->Wifi_View_list_wifi, &style_Wifi_View_list_wifi_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_Wifi_View_list_wifi_main_scrollbar_default
    static lv_style_t style_Wifi_View_list_wifi_main_scrollbar_default;
    ui_init_style(&style_Wifi_View_list_wifi_main_scrollbar_default);

    lv_style_set_radius(&style_Wifi_View_list_wifi_main_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_Wifi_View_list_wifi_main_scrollbar_default, 255);
    lv_style_set_bg_color(&style_Wifi_View_list_wifi_main_scrollbar_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_Wifi_View_list_wifi_main_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->Wifi_View_list_wifi, &style_Wifi_View_list_wifi_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_Wifi_View_list_wifi_extra_btns_main_default
    static lv_style_t style_Wifi_View_list_wifi_extra_btns_main_default;
    ui_init_style(&style_Wifi_View_list_wifi_extra_btns_main_default);

    lv_style_set_pad_top(&style_Wifi_View_list_wifi_extra_btns_main_default, 5);
    lv_style_set_pad_left(&style_Wifi_View_list_wifi_extra_btns_main_default, 5);
    lv_style_set_pad_right(&style_Wifi_View_list_wifi_extra_btns_main_default, 5);
    lv_style_set_pad_bottom(&style_Wifi_View_list_wifi_extra_btns_main_default, 5);
    lv_style_set_border_width(&style_Wifi_View_list_wifi_extra_btns_main_default, 0);
    lv_style_set_text_color(&style_Wifi_View_list_wifi_extra_btns_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_Wifi_View_list_wifi_extra_btns_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_Wifi_View_list_wifi_extra_btns_main_default, 255);
    lv_style_set_radius(&style_Wifi_View_list_wifi_extra_btns_main_default, 3);
    lv_style_set_bg_opa(&style_Wifi_View_list_wifi_extra_btns_main_default, 255);
    lv_style_set_bg_color(&style_Wifi_View_list_wifi_extra_btns_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_Wifi_View_list_wifi_extra_btns_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->Wifi_View_list_wifi_item4, &style_Wifi_View_list_wifi_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->Wifi_View_list_wifi_item3, &style_Wifi_View_list_wifi_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->Wifi_View_list_wifi_item2, &style_Wifi_View_list_wifi_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->Wifi_View_list_wifi_item1, &style_Wifi_View_list_wifi_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->Wifi_View_list_wifi_item0, &style_Wifi_View_list_wifi_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_Wifi_View_list_wifi_extra_texts_main_default
    static lv_style_t style_Wifi_View_list_wifi_extra_texts_main_default;
    ui_init_style(&style_Wifi_View_list_wifi_extra_texts_main_default);

    lv_style_set_pad_top(&style_Wifi_View_list_wifi_extra_texts_main_default, 5);
    lv_style_set_pad_left(&style_Wifi_View_list_wifi_extra_texts_main_default, 5);
    lv_style_set_pad_right(&style_Wifi_View_list_wifi_extra_texts_main_default, 5);
    lv_style_set_pad_bottom(&style_Wifi_View_list_wifi_extra_texts_main_default, 5);
    lv_style_set_border_width(&style_Wifi_View_list_wifi_extra_texts_main_default, 0);
    lv_style_set_text_color(&style_Wifi_View_list_wifi_extra_texts_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_Wifi_View_list_wifi_extra_texts_main_default, &lv_font_SourceHanSerifSC_Regular_12);
    lv_style_set_text_opa(&style_Wifi_View_list_wifi_extra_texts_main_default, 255);
    lv_style_set_radius(&style_Wifi_View_list_wifi_extra_texts_main_default, 3);
    lv_style_set_transform_width(&style_Wifi_View_list_wifi_extra_texts_main_default, 0);
    lv_style_set_bg_opa(&style_Wifi_View_list_wifi_extra_texts_main_default, 255);
    lv_style_set_bg_color(&style_Wifi_View_list_wifi_extra_texts_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_Wifi_View_list_wifi_extra_texts_main_default, LV_GRAD_DIR_NONE);

    //Write codes Wifi_View_label_wlan
    ui->Wifi_View_label_wlan = lv_label_create(ui->Wifi_View);
    lv_label_set_text(ui->Wifi_View_label_wlan, "WLAN");
    lv_label_set_long_mode(ui->Wifi_View_label_wlan, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Wifi_View_label_wlan, -15, 12);
    lv_obj_set_size(ui->Wifi_View_label_wlan, 100, 32);

    //Write style for Wifi_View_label_wlan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Wifi_View_label_wlan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Wifi_View_label_wlan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Wifi_View_label_wlan, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Wifi_View_label_wlan, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Wifi_View_label_wlan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Wifi_View_label_wlan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Wifi_View_label_wlan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Wifi_View_label_wlan, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Wifi_View_label_wlan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Wifi_View_label_wlan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Wifi_View_label_wlan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Wifi_View_label_wlan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Wifi_View_label_wlan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Wifi_View_label_wlan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Wifi_View_label_connected
    ui->Wifi_View_label_connected = lv_label_create(ui->Wifi_View);
    lv_label_set_text(ui->Wifi_View_label_connected, "WIFI_1 已未连接");
    lv_label_set_long_mode(ui->Wifi_View_label_connected, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Wifi_View_label_connected, 36, 64);
    lv_obj_set_size(ui->Wifi_View_label_connected, 188, 29);

    //Write style for Wifi_View_label_connected, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Wifi_View_label_connected, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Wifi_View_label_connected, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Wifi_View_label_connected, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Wifi_View_label_connected, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Wifi_View_label_connected, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Wifi_View_label_connected, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Wifi_View_label_connected, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Wifi_View_label_connected, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Wifi_View_label_connected, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Wifi_View_label_connected, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Wifi_View_label_connected, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Wifi_View_label_connected, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Wifi_View_label_connected, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Wifi_View_label_connected, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Wifi_View_img_open
    ui->Wifi_View_img_open = lv_img_create(ui->Wifi_View);
    lv_obj_add_flag(ui->Wifi_View_img_open, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Wifi_View_img_open, &_open_alpha_32x32);
    lv_img_set_pivot(ui->Wifi_View_img_open, 50,50);
    lv_img_set_angle(ui->Wifi_View_img_open, 0);
    lv_obj_set_pos(ui->Wifi_View_img_open, 201, 4);
    lv_obj_set_size(ui->Wifi_View_img_open, 32, 32);

    //Write style for Wifi_View_img_open, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Wifi_View_img_open, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Wifi_View_img_open, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Wifi_View_img_open, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Wifi_View_img_open, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Wifi_View_img_close
    ui->Wifi_View_img_close = lv_img_create(ui->Wifi_View);
    lv_obj_add_flag(ui->Wifi_View_img_close, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Wifi_View_img_close, &_close_alpha_32x32);
    lv_img_set_pivot(ui->Wifi_View_img_close, 50,50);
    lv_img_set_angle(ui->Wifi_View_img_close, 0);
    lv_obj_set_pos(ui->Wifi_View_img_close, 201, 4);
    lv_obj_set_size(ui->Wifi_View_img_close, 32, 32);

    //Write style for Wifi_View_img_close, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Wifi_View_img_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Wifi_View_img_close, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Wifi_View_img_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Wifi_View_img_close, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Wifi_View_img_wifion
    ui->Wifi_View_img_wifion = lv_img_create(ui->Wifi_View);
    lv_obj_add_flag(ui->Wifi_View_img_wifion, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Wifi_View_img_wifion, &_WiFi_alpha_25x25);
    lv_img_set_pivot(ui->Wifi_View_img_wifion, 50,50);
    lv_img_set_angle(ui->Wifi_View_img_wifion, 0);
    lv_obj_set_pos(ui->Wifi_View_img_wifion, 11, 60);
    lv_obj_set_size(ui->Wifi_View_img_wifion, 25, 25);

    //Write style for Wifi_View_img_wifion, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Wifi_View_img_wifion, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Wifi_View_img_wifion, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Wifi_View_img_wifion, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Wifi_View_img_wifion, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Wifi_View.


    //Update current screen layout.
    lv_obj_update_layout(ui->Wifi_View);

    //Init events for screen.
    events_init_Wifi_View(ui);
}
