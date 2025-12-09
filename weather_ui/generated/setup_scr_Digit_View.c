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



void setup_scr_Digit_View(lv_ui *ui)
{
    //Write codes Digit_View
    ui->Digit_View = lv_obj_create(NULL);
    lv_obj_set_size(ui->Digit_View, 240, 280);
    lv_obj_set_scrollbar_mode(ui->Digit_View, LV_SCROLLBAR_MODE_OFF);

    //Write style for Digit_View, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Digit_View, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Digit_View, lv_color_hex(0x020202), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Digit_View, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Digit_View_label_hour
    ui->Digit_View_label_hour = lv_label_create(ui->Digit_View);
    lv_label_set_text(ui->Digit_View_label_hour, "12");
    lv_label_set_long_mode(ui->Digit_View_label_hour, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Digit_View_label_hour, 52, 44);
    lv_obj_set_size(ui->Digit_View_label_hour, 122, 107);

    //Write style for Digit_View_label_hour, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Digit_View_label_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Digit_View_label_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Digit_View_label_hour, lv_color_hex(0x9af356), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Digit_View_label_hour, &lv_font_montserratMedium_100, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Digit_View_label_hour, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Digit_View_label_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Digit_View_label_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Digit_View_label_hour, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Digit_View_label_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Digit_View_label_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Digit_View_label_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Digit_View_label_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Digit_View_label_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Digit_View_label_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Digit_View_label_min
    ui->Digit_View_label_min = lv_label_create(ui->Digit_View);
    lv_label_set_text(ui->Digit_View_label_min, "59");
    lv_label_set_long_mode(ui->Digit_View_label_min, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Digit_View_label_min, 49, 160);
    lv_obj_set_size(ui->Digit_View_label_min, 138, 100);

    //Write style for Digit_View_label_min, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Digit_View_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Digit_View_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Digit_View_label_min, lv_color_hex(0x0b96ef), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Digit_View_label_min, &lv_font_montserratMedium_100, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Digit_View_label_min, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Digit_View_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Digit_View_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Digit_View_label_min, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Digit_View_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Digit_View_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Digit_View_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Digit_View_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Digit_View_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Digit_View_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Digit_View_label_dat
    ui->Digit_View_label_dat = lv_label_create(ui->Digit_View);
    lv_label_set_text(ui->Digit_View_label_dat, "2025-11-4");
    lv_label_set_long_mode(ui->Digit_View_label_dat, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Digit_View_label_dat, 4, 7);
    lv_obj_set_size(ui->Digit_View_label_dat, 100, 26);

    //Write style for Digit_View_label_dat, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Digit_View_label_dat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Digit_View_label_dat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Digit_View_label_dat, lv_color_hex(0xb9d235), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Digit_View_label_dat, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Digit_View_label_dat, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Digit_View_label_dat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Digit_View_label_dat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Digit_View_label_dat, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Digit_View_label_dat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Digit_View_label_dat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Digit_View_label_dat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Digit_View_label_dat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Digit_View_label_dat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Digit_View_label_dat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Digit_View_label_xinji
    ui->Digit_View_label_xinji = lv_label_create(ui->Digit_View);
    lv_label_set_text(ui->Digit_View_label_xinji, "星期一");
    lv_label_set_long_mode(ui->Digit_View_label_xinji, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Digit_View_label_xinji, 149, 7);
    lv_obj_set_size(ui->Digit_View_label_xinji, 87, 55);

    //Write style for Digit_View_label_xinji, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Digit_View_label_xinji, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Digit_View_label_xinji, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Digit_View_label_xinji, lv_color_hex(0x62de1f), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Digit_View_label_xinji, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Digit_View_label_xinji, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Digit_View_label_xinji, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Digit_View_label_xinji, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Digit_View_label_xinji, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Digit_View_label_xinji, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Digit_View_label_xinji, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Digit_View_label_xinji, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Digit_View_label_xinji, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Digit_View_label_xinji, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Digit_View_label_xinji, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Digit_View.


    //Update current screen layout.
    lv_obj_update_layout(ui->Digit_View);

    //Init events for screen.
    events_init_Digit_View(ui);
}
