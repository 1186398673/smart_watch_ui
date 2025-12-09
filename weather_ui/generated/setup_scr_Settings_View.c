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



void setup_scr_Settings_View(lv_ui *ui)
{
    //Write codes Settings_View
    ui->Settings_View = lv_obj_create(NULL);
    lv_obj_set_size(ui->Settings_View, 240, 280);
    lv_obj_set_scrollbar_mode(ui->Settings_View, LV_SCROLLBAR_MODE_OFF);

    //Write style for Settings_View, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Settings_View, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Settings_View, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Settings_View, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Settings_View_list_1
    ui->Settings_View_list_1 = lv_list_create(ui->Settings_View);
    ui->Settings_View_list_1_item0 = lv_list_add_btn(ui->Settings_View_list_1, &_WiFi_alpha_48x48, "WIFI");
    ui->Settings_View_list_1_item1 = lv_list_add_btn(ui->Settings_View_list_1, &_booth_alpha_48x48, "Booth");
    ui->Settings_View_list_1_item2 = lv_list_add_btn(ui->Settings_View_list_1, &_brightness_alpha_48x48, "Brightness");
    ui->Settings_View_list_1_item3 = lv_list_add_btn(ui->Settings_View_list_1, &_game_alpha_48x48, "game");
    ui->Settings_View_list_1_item4 = lv_list_add_btn(ui->Settings_View_list_1, &_caculator_alpha_48x48, "Caculator");
    ui->Settings_View_list_1_item5 = lv_list_add_btn(ui->Settings_View_list_1, &_battery_alpha_48x48, "Battery");
    ui->Settings_View_list_1_item6 = lv_list_add_btn(ui->Settings_View_list_1, &_stopwatch_alpha_48x48, "Stopwatch");
    lv_obj_set_pos(ui->Settings_View_list_1, -1, 1);
    lv_obj_set_size(ui->Settings_View_list_1, 239, 277);
    lv_obj_set_scrollbar_mode(ui->Settings_View_list_1, LV_SCROLLBAR_MODE_OFF);

    //Write style state: LV_STATE_DEFAULT for &style_Settings_View_list_1_main_main_default
    static lv_style_t style_Settings_View_list_1_main_main_default;
    ui_init_style(&style_Settings_View_list_1_main_main_default);

    lv_style_set_pad_top(&style_Settings_View_list_1_main_main_default, 5);
    lv_style_set_pad_left(&style_Settings_View_list_1_main_main_default, 5);
    lv_style_set_pad_right(&style_Settings_View_list_1_main_main_default, 5);
    lv_style_set_pad_bottom(&style_Settings_View_list_1_main_main_default, 5);
    lv_style_set_bg_opa(&style_Settings_View_list_1_main_main_default, 255);
    lv_style_set_bg_color(&style_Settings_View_list_1_main_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_Settings_View_list_1_main_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_Settings_View_list_1_main_main_default, 1);
    lv_style_set_border_opa(&style_Settings_View_list_1_main_main_default, 255);
    lv_style_set_border_color(&style_Settings_View_list_1_main_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_Settings_View_list_1_main_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_Settings_View_list_1_main_main_default, 3);
    lv_style_set_shadow_width(&style_Settings_View_list_1_main_main_default, 0);
    lv_obj_add_style(ui->Settings_View_list_1, &style_Settings_View_list_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_Settings_View_list_1_main_scrollbar_default
    static lv_style_t style_Settings_View_list_1_main_scrollbar_default;
    ui_init_style(&style_Settings_View_list_1_main_scrollbar_default);

    lv_style_set_radius(&style_Settings_View_list_1_main_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_Settings_View_list_1_main_scrollbar_default, 255);
    lv_style_set_bg_color(&style_Settings_View_list_1_main_scrollbar_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_Settings_View_list_1_main_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->Settings_View_list_1, &style_Settings_View_list_1_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_Settings_View_list_1_extra_btns_main_default
    static lv_style_t style_Settings_View_list_1_extra_btns_main_default;
    ui_init_style(&style_Settings_View_list_1_extra_btns_main_default);

    lv_style_set_pad_top(&style_Settings_View_list_1_extra_btns_main_default, 5);
    lv_style_set_pad_left(&style_Settings_View_list_1_extra_btns_main_default, 5);
    lv_style_set_pad_right(&style_Settings_View_list_1_extra_btns_main_default, 5);
    lv_style_set_pad_bottom(&style_Settings_View_list_1_extra_btns_main_default, 5);
    lv_style_set_border_width(&style_Settings_View_list_1_extra_btns_main_default, 0);
    lv_style_set_text_color(&style_Settings_View_list_1_extra_btns_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_Settings_View_list_1_extra_btns_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_Settings_View_list_1_extra_btns_main_default, 255);
    lv_style_set_radius(&style_Settings_View_list_1_extra_btns_main_default, 3);
    lv_style_set_bg_opa(&style_Settings_View_list_1_extra_btns_main_default, 255);
    lv_style_set_bg_color(&style_Settings_View_list_1_extra_btns_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_Settings_View_list_1_extra_btns_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->Settings_View_list_1_item6, &style_Settings_View_list_1_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->Settings_View_list_1_item5, &style_Settings_View_list_1_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->Settings_View_list_1_item4, &style_Settings_View_list_1_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->Settings_View_list_1_item3, &style_Settings_View_list_1_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->Settings_View_list_1_item2, &style_Settings_View_list_1_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->Settings_View_list_1_item1, &style_Settings_View_list_1_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->Settings_View_list_1_item0, &style_Settings_View_list_1_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_Settings_View_list_1_extra_texts_main_default
    static lv_style_t style_Settings_View_list_1_extra_texts_main_default;
    ui_init_style(&style_Settings_View_list_1_extra_texts_main_default);

    lv_style_set_pad_top(&style_Settings_View_list_1_extra_texts_main_default, 5);
    lv_style_set_pad_left(&style_Settings_View_list_1_extra_texts_main_default, 5);
    lv_style_set_pad_right(&style_Settings_View_list_1_extra_texts_main_default, 5);
    lv_style_set_pad_bottom(&style_Settings_View_list_1_extra_texts_main_default, 5);
    lv_style_set_border_width(&style_Settings_View_list_1_extra_texts_main_default, 0);
    lv_style_set_text_color(&style_Settings_View_list_1_extra_texts_main_default, lv_color_hex(0x050505));
    lv_style_set_text_font(&style_Settings_View_list_1_extra_texts_main_default, &lv_font_montserratMedium_30);
    lv_style_set_text_opa(&style_Settings_View_list_1_extra_texts_main_default, 255);
    lv_style_set_radius(&style_Settings_View_list_1_extra_texts_main_default, 0);
    lv_style_set_transform_width(&style_Settings_View_list_1_extra_texts_main_default, 0);
    lv_style_set_bg_opa(&style_Settings_View_list_1_extra_texts_main_default, 255);
    lv_style_set_bg_color(&style_Settings_View_list_1_extra_texts_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_Settings_View_list_1_extra_texts_main_default, LV_GRAD_DIR_NONE);

    //The custom code of Settings_View.


    //Update current screen layout.
    lv_obj_update_layout(ui->Settings_View);

    //Init events for screen.
    events_init_Settings_View(ui);
}
