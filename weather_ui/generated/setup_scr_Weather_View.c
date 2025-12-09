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



void setup_scr_Weather_View(lv_ui *ui)
{
    //Write codes Weather_View
    ui->Weather_View = lv_obj_create(NULL);
    lv_obj_set_size(ui->Weather_View, 240, 280);
    lv_obj_set_scrollbar_mode(ui->Weather_View, LV_SCROLLBAR_MODE_OFF);

    //Write style for Weather_View, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Weather_View, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Weather_View, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Weather_View, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_TMP
    ui->Weather_View_label_TMP = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_TMP, "19");
    lv_label_set_long_mode(ui->Weather_View_label_TMP, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_TMP, 83, 51);
    lv_obj_set_size(ui->Weather_View_label_TMP, 64, 52);

    //Write style for Weather_View_label_TMP, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_TMP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_TMP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_TMP, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_TMP, &lv_font_montserratMedium_51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_TMP, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_TMP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_TMP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_TMP, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_TMP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_TMP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_TMP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_TMP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_TMP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_TMP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_city
    ui->Weather_View_label_city = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_city, "深圳市");
    lv_label_set_long_mode(ui->Weather_View_label_city, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_city, 74, 8);
    lv_obj_set_size(ui->Weather_View_label_city, 90, 27);

    //Write style for Weather_View_label_city, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_city, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_city, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_city, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_city, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_city, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_city, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_city, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_city, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_city, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_city, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_city, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_city, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_city, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_city, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_C
    ui->Weather_View_label_C = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_C, "°C ");
    lv_label_set_long_mode(ui->Weather_View_label_C, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_C, 83, 44);
    lv_obj_set_size(ui->Weather_View_label_C, 100, 32);

    //Write style for Weather_View_label_C, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_C, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_C, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_C, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_C, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_C, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_C, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_C, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_C, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_C, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_C, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_C, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_C, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_C, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_C, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_tmpHL
    ui->Weather_View_label_tmpHL = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_tmpHL, "18 ~ 22 °C ");
    lv_label_set_long_mode(ui->Weather_View_label_tmpHL, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_tmpHL, 57, 117);
    lv_obj_set_size(ui->Weather_View_label_tmpHL, 86, 19);

    //Write style for Weather_View_label_tmpHL, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_tmpHL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_tmpHL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_tmpHL, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_tmpHL, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_tmpHL, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_tmpHL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_tmpHL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_tmpHL, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_tmpHL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_tmpHL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_tmpHL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_tmpHL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_tmpHL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_tmpHL, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_text
    ui->Weather_View_label_text = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_text, "阴多云晴大小雨");
    lv_label_set_long_mode(ui->Weather_View_label_text, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_text, 7, 117);
    lv_obj_set_size(ui->Weather_View_label_text, 46, 20);

    //Write style for Weather_View_label_text, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_text, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_text, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_text, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_date1
    ui->Weather_View_label_date1 = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_date1, "今天");
    lv_label_set_long_mode(ui->Weather_View_label_date1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_date1, 12, 161);
    lv_obj_set_size(ui->Weather_View_label_date1, 49, 20);

    //Write style for Weather_View_label_date1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_date1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_date1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_date1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_date1, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_date1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_date1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_date1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_date1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_date1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_date1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_date1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_date1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_date1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_date1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_date2
    ui->Weather_View_label_date2 = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_date2, "明天");
    lv_label_set_long_mode(ui->Weather_View_label_date2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_date2, 71, 161);
    lv_obj_set_size(ui->Weather_View_label_date2, 100, 32);

    //Write style for Weather_View_label_date2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_date2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_date2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_date2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_date2, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_date2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_date2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_date2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_date2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_date2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_date2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_date2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_date2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_date2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_date2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_date3
    ui->Weather_View_label_date3 = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_date3, "后天");
    lv_label_set_long_mode(ui->Weather_View_label_date3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_date3, 183, 161);
    lv_obj_set_size(ui->Weather_View_label_date3, 44, 18);

    //Write style for Weather_View_label_date3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_date3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_date3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_date3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_date3, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_date3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_date3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_date3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_date3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_date3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_date3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_date3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_date3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_date3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_date3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_img_T1
    ui->Weather_View_img_T1 = lv_img_create(ui->Weather_View);
    lv_obj_add_flag(ui->Weather_View_img_T1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Weather_View_img_T1, &_d_alpha_38x38);
    lv_img_set_pivot(ui->Weather_View_img_T1, 50,50);
    lv_img_set_angle(ui->Weather_View_img_T1, 0);
    lv_obj_set_pos(ui->Weather_View_img_T1, 16, 68);
    lv_obj_set_size(ui->Weather_View_img_T1, 38, 38);

    //Write style for Weather_View_img_T1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Weather_View_img_T1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Weather_View_img_T1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_img_T1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Weather_View_img_T1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_img_t2
    ui->Weather_View_img_t2 = lv_img_create(ui->Weather_View);
    lv_obj_add_flag(ui->Weather_View_img_t2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Weather_View_img_t2, &_sun_alpha_38x38);
    lv_img_set_pivot(ui->Weather_View_img_t2, 50,50);
    lv_img_set_angle(ui->Weather_View_img_t2, 0);
    lv_obj_set_pos(ui->Weather_View_img_t2, 105, 207);
    lv_obj_set_size(ui->Weather_View_img_t2, 38, 38);

    //Write style for Weather_View_img_t2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Weather_View_img_t2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Weather_View_img_t2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_img_t2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Weather_View_img_t2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_img_t1
    ui->Weather_View_img_t1 = lv_img_create(ui->Weather_View);
    lv_obj_add_flag(ui->Weather_View_img_t1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Weather_View_img_t1, &_d_alpha_38x38);
    lv_img_set_pivot(ui->Weather_View_img_t1, 50,50);
    lv_img_set_angle(ui->Weather_View_img_t1, 0);
    lv_obj_set_pos(ui->Weather_View_img_t1, 16, 207);
    lv_obj_set_size(ui->Weather_View_img_t1, 38, 38);

    //Write style for Weather_View_img_t1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Weather_View_img_t1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Weather_View_img_t1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_img_t1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Weather_View_img_t1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_img_t3
    ui->Weather_View_img_t3 = lv_img_create(ui->Weather_View);
    lv_obj_add_flag(ui->Weather_View_img_t3, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Weather_View_img_t3, &_rain_alpha_38x38);
    lv_img_set_pivot(ui->Weather_View_img_t3, 50,50);
    lv_img_set_angle(ui->Weather_View_img_t3, 0);
    lv_obj_set_pos(ui->Weather_View_img_t3, 184, 207);
    lv_obj_set_size(ui->Weather_View_img_t3, 38, 38);

    //Write style for Weather_View_img_t3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Weather_View_img_t3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Weather_View_img_t3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_img_t3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Weather_View_img_t3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_tmp1L
    ui->Weather_View_label_tmp1L = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_tmp1L, "18 °C ");
    lv_label_set_long_mode(ui->Weather_View_label_tmp1L, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_tmp1L, 7, 259);
    lv_obj_set_size(ui->Weather_View_label_tmp1L, 65, 15);

    //Write style for Weather_View_label_tmp1L, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_tmp1L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_tmp1L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_tmp1L, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_tmp1L, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_tmp1L, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_tmp1L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_tmp1L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_tmp1L, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_tmp1L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_tmp1L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_tmp1L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_tmp1L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_tmp1L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_tmp1L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_tmp2L
    ui->Weather_View_label_tmp2L = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_tmp2L, " 22 °C ");
    lv_label_set_long_mode(ui->Weather_View_label_tmp2L, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_tmp2L, 89, 257);
    lv_obj_set_size(ui->Weather_View_label_tmp2L, 72, 17);

    //Write style for Weather_View_label_tmp2L, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_tmp2L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_tmp2L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_tmp2L, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_tmp2L, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_tmp2L, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_tmp2L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_tmp2L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_tmp2L, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_tmp2L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_tmp2L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_tmp2L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_tmp2L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_tmp2L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_tmp2L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_tmp3L
    ui->Weather_View_label_tmp3L = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_tmp3L, " 6 °C ");
    lv_label_set_long_mode(ui->Weather_View_label_tmp3L, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_tmp3L, 180, 257);
    lv_obj_set_size(ui->Weather_View_label_tmp3L, 52, 19);

    //Write style for Weather_View_label_tmp3L, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_tmp3L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_tmp3L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_tmp3L, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_tmp3L, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_tmp3L, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_tmp3L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_tmp3L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_tmp3L, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_tmp3L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_tmp3L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_tmp3L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_tmp3L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_tmp3L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_tmp3L, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_date1_1
    ui->Weather_View_label_date1_1 = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_date1_1, "11-04");
    lv_label_set_long_mode(ui->Weather_View_label_date1_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_date1_1, 12, 188);
    lv_obj_set_size(ui->Weather_View_label_date1_1, 60, 15);

    //Write style for Weather_View_label_date1_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_date1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_date1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_date1_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_date1_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_date1_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_date1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_date1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_date1_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_date1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_date1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_date1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_date1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_date1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_date1_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_date2_1
    ui->Weather_View_label_date2_1 = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_date2_1, "11-05");
    lv_label_set_long_mode(ui->Weather_View_label_date2_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_date2_1, 99, 188);
    lv_obj_set_size(ui->Weather_View_label_date2_1, 55, 17);

    //Write style for Weather_View_label_date2_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_date2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_date2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_date2_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_date2_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_date2_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_date2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_date2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_date2_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_date2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_date2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_date2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_date2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_date2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_date2_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_date3_1
    ui->Weather_View_label_date3_1 = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_date3_1, "11-06");
    lv_label_set_long_mode(ui->Weather_View_label_date3_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_date3_1, 175, 188);
    lv_obj_set_size(ui->Weather_View_label_date3_1, 56, 19);

    //Write style for Weather_View_label_date3_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_date3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_date3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_date3_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_date3_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_date3_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_date3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_date3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_date3_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_date3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_date3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_date3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_date3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_date3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_date3_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_HMD
    ui->Weather_View_label_HMD = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_HMD, "湿度：");
    lv_label_set_long_mode(ui->Weather_View_label_HMD, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_HMD, 140, 117);
    lv_obj_set_size(ui->Weather_View_label_HMD, 64, 15);

    //Write style for Weather_View_label_HMD, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_HMD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_HMD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_HMD, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_HMD, &lv_font_SourceHanSerifSC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_HMD, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_HMD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_HMD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_HMD, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_HMD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_HMD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_HMD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_HMD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_HMD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_HMD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_humidity
    ui->Weather_View_label_humidity = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_humidity, "78%");
    lv_label_set_long_mode(ui->Weather_View_label_humidity, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_humidity, 196, 120);
    lv_obj_set_size(ui->Weather_View_label_humidity, 41, 17);

    //Write style for Weather_View_label_humidity, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_humidity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_humidity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_humidity, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_humidity, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_humidity, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_humidity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_humidity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_humidity, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_humidity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_humidity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_humidity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_humidity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_humidity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_humidity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_RAD
    ui->Weather_View_label_RAD = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_RAD, "降水：");
    lv_label_set_long_mode(ui->Weather_View_label_RAD, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_RAD, 147, 95);
    lv_obj_set_size(ui->Weather_View_label_RAD, 54, 16);

    //Write style for Weather_View_label_RAD, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_RAD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_RAD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_RAD, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_RAD, &lv_font_SourceHanSerifSC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_RAD, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_RAD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_RAD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_RAD, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_RAD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_RAD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_RAD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_RAD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_RAD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_RAD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_rainfall
    ui->Weather_View_label_rainfall = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_rainfall, "5.40");
    lv_label_set_long_mode(ui->Weather_View_label_rainfall, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_rainfall, 189, 95);
    lv_obj_set_size(ui->Weather_View_label_rainfall, 47, 17);

    //Write style for Weather_View_label_rainfall, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_rainfall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_rainfall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_rainfall, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_rainfall, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_rainfall, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_rainfall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_rainfall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_rainfall, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_rainfall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_rainfall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_rainfall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_rainfall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_rainfall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_rainfall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_SPD
    ui->Weather_View_label_SPD = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_SPD, "风力：");
    lv_label_set_long_mode(ui->Weather_View_label_SPD, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_SPD, 143, 44);
    lv_obj_set_size(ui->Weather_View_label_SPD, 69, 17);

    //Write style for Weather_View_label_SPD, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_SPD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_SPD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_SPD, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_SPD, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_SPD, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_SPD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_SPD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_SPD, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_SPD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_SPD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_SPD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_SPD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_SPD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_SPD, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_DIR
    ui->Weather_View_label_DIR = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_DIR, "风向：");
    lv_label_set_long_mode(ui->Weather_View_label_DIR, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_DIR, 147, 68);
    lv_obj_set_size(ui->Weather_View_label_DIR, 53, 20);

    //Write style for Weather_View_label_DIR, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_DIR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_DIR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_DIR, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_DIR, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_DIR, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_DIR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_DIR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_DIR, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_DIR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_DIR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_DIR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_DIR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_DIR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_DIR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_wind_direction
    ui->Weather_View_label_wind_direction = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_wind_direction, "东南西北");
    lv_label_set_long_mode(ui->Weather_View_label_wind_direction, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_wind_direction, 196, 68);
    lv_obj_set_size(ui->Weather_View_label_wind_direction, 39, 15);

    //Write style for Weather_View_label_wind_direction, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_wind_direction, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_wind_direction, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_wind_direction, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_wind_direction, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_wind_direction, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_wind_direction, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_wind_direction, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_wind_direction, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_wind_direction, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_wind_direction, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_wind_direction, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_wind_direction, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_wind_direction, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_wind_direction, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Weather_View_label_wind_speed
    ui->Weather_View_label_wind_speed = lv_label_create(ui->Weather_View);
    lv_label_set_text(ui->Weather_View_label_wind_speed, "8.4");
    lv_label_set_long_mode(ui->Weather_View_label_wind_speed, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Weather_View_label_wind_speed, 193, 44);
    lv_obj_set_size(ui->Weather_View_label_wind_speed, 42, 15);

    //Write style for Weather_View_label_wind_speed, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Weather_View_label_wind_speed, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Weather_View_label_wind_speed, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Weather_View_label_wind_speed, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Weather_View_label_wind_speed, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Weather_View_label_wind_speed, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Weather_View_label_wind_speed, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Weather_View_label_wind_speed, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Weather_View_label_wind_speed, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Weather_View_label_wind_speed, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Weather_View_label_wind_speed, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Weather_View_label_wind_speed, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Weather_View_label_wind_speed, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Weather_View_label_wind_speed, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Weather_View_label_wind_speed, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Weather_View.


    //Update current screen layout.
    lv_obj_update_layout(ui->Weather_View);

    //Init events for screen.
    events_init_Weather_View(ui);
}
