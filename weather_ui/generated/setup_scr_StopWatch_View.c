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



void setup_scr_StopWatch_View(lv_ui *ui)
{
    //Write codes StopWatch_View
    ui->StopWatch_View = lv_obj_create(NULL);
    lv_obj_set_size(ui->StopWatch_View, 240, 280);
    lv_obj_set_scrollbar_mode(ui->StopWatch_View, LV_SCROLLBAR_MODE_OFF);

    //Write style for StopWatch_View, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->StopWatch_View, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->StopWatch_View, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->StopWatch_View, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes StopWatch_View_label_msecond
    ui->StopWatch_View_label_msecond = lv_label_create(ui->StopWatch_View);
    lv_label_set_text(ui->StopWatch_View_label_msecond, "99");
    lv_label_set_long_mode(ui->StopWatch_View_label_msecond, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->StopWatch_View_label_msecond, 171, 30);
    lv_obj_set_size(ui->StopWatch_View_label_msecond, 63, 37);

    //Write style for StopWatch_View_label_msecond, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->StopWatch_View_label_msecond, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->StopWatch_View_label_msecond, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->StopWatch_View_label_msecond, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->StopWatch_View_label_msecond, &lv_font_montserratMedium_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->StopWatch_View_label_msecond, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->StopWatch_View_label_msecond, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->StopWatch_View_label_msecond, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->StopWatch_View_label_msecond, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->StopWatch_View_label_msecond, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->StopWatch_View_label_msecond, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->StopWatch_View_label_msecond, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->StopWatch_View_label_msecond, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->StopWatch_View_label_msecond, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->StopWatch_View_label_msecond, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes StopWatch_View_label_second
    ui->StopWatch_View_label_second = lv_label_create(ui->StopWatch_View);
    lv_label_set_text(ui->StopWatch_View_label_second, "60");
    lv_label_set_long_mode(ui->StopWatch_View_label_second, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->StopWatch_View_label_second, 88, 30);
    lv_obj_set_size(ui->StopWatch_View_label_second, 65, 38);

    //Write style for StopWatch_View_label_second, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->StopWatch_View_label_second, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->StopWatch_View_label_second, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->StopWatch_View_label_second, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->StopWatch_View_label_second, &lv_font_montserratMedium_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->StopWatch_View_label_second, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->StopWatch_View_label_second, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->StopWatch_View_label_second, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->StopWatch_View_label_second, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->StopWatch_View_label_second, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->StopWatch_View_label_second, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->StopWatch_View_label_second, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->StopWatch_View_label_second, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->StopWatch_View_label_second, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->StopWatch_View_label_second, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes StopWatch_View_label_minutte
    ui->StopWatch_View_label_minutte = lv_label_create(ui->StopWatch_View);
    lv_label_set_text(ui->StopWatch_View_label_minutte, "60");
    lv_label_set_long_mode(ui->StopWatch_View_label_minutte, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->StopWatch_View_label_minutte, 5, 30);
    lv_obj_set_size(ui->StopWatch_View_label_minutte, 74, 45);

    //Write style for StopWatch_View_label_minutte, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->StopWatch_View_label_minutte, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->StopWatch_View_label_minutte, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->StopWatch_View_label_minutte, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->StopWatch_View_label_minutte, &lv_font_montserratMedium_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->StopWatch_View_label_minutte, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->StopWatch_View_label_minutte, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->StopWatch_View_label_minutte, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->StopWatch_View_label_minutte, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->StopWatch_View_label_minutte, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->StopWatch_View_label_minutte, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->StopWatch_View_label_minutte, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->StopWatch_View_label_minutte, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->StopWatch_View_label_minutte, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->StopWatch_View_label_minutte, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes StopWatch_View_label_h2
    ui->StopWatch_View_label_h2 = lv_label_create(ui->StopWatch_View);
    lv_label_set_text(ui->StopWatch_View_label_h2, ":");
    lv_label_set_long_mode(ui->StopWatch_View_label_h2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->StopWatch_View_label_h2, 68, 35);
    lv_obj_set_size(ui->StopWatch_View_label_h2, 25, 29);

    //Write style for StopWatch_View_label_h2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->StopWatch_View_label_h2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->StopWatch_View_label_h2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->StopWatch_View_label_h2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->StopWatch_View_label_h2, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->StopWatch_View_label_h2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->StopWatch_View_label_h2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->StopWatch_View_label_h2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->StopWatch_View_label_h2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->StopWatch_View_label_h2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->StopWatch_View_label_h2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->StopWatch_View_label_h2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->StopWatch_View_label_h2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->StopWatch_View_label_h2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->StopWatch_View_label_h2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes StopWatch_View_label_h1
    ui->StopWatch_View_label_h1 = lv_label_create(ui->StopWatch_View);
    lv_label_set_text(ui->StopWatch_View_label_h1, ".");
    lv_label_set_long_mode(ui->StopWatch_View_label_h1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->StopWatch_View_label_h1, 157, 35);
    lv_obj_set_size(ui->StopWatch_View_label_h1, 14, 34);

    //Write style for StopWatch_View_label_h1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->StopWatch_View_label_h1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->StopWatch_View_label_h1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->StopWatch_View_label_h1, lv_color_hex(0xd60404), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->StopWatch_View_label_h1, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->StopWatch_View_label_h1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->StopWatch_View_label_h1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->StopWatch_View_label_h1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->StopWatch_View_label_h1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->StopWatch_View_label_h1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->StopWatch_View_label_h1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->StopWatch_View_label_h1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->StopWatch_View_label_h1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->StopWatch_View_label_h1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->StopWatch_View_label_h1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes StopWatch_View_list_times
    ui->StopWatch_View_list_times = lv_list_create(ui->StopWatch_View);
    ui->StopWatch_View_list_times_item0 =lv_list_add_text(ui->StopWatch_View_list_times, "03  00:03:20");
    ui->StopWatch_View_list_times_item1 =lv_list_add_text(ui->StopWatch_View_list_times, "02 00:02:20");
    ui->StopWatch_View_list_times_item2 =lv_list_add_text(ui->StopWatch_View_list_times, "01   00:01:59");
    lv_obj_set_pos(ui->StopWatch_View_list_times, 11, 88);
    lv_obj_set_size(ui->StopWatch_View_list_times, 219, 105);
    lv_obj_set_scrollbar_mode(ui->StopWatch_View_list_times, LV_SCROLLBAR_MODE_OFF);

    //Write style state: LV_STATE_DEFAULT for &style_StopWatch_View_list_times_main_main_default
    static lv_style_t style_StopWatch_View_list_times_main_main_default;
    ui_init_style(&style_StopWatch_View_list_times_main_main_default);

    lv_style_set_pad_top(&style_StopWatch_View_list_times_main_main_default, 5);
    lv_style_set_pad_left(&style_StopWatch_View_list_times_main_main_default, 5);
    lv_style_set_pad_right(&style_StopWatch_View_list_times_main_main_default, 5);
    lv_style_set_pad_bottom(&style_StopWatch_View_list_times_main_main_default, 5);
    lv_style_set_bg_opa(&style_StopWatch_View_list_times_main_main_default, 255);
    lv_style_set_bg_color(&style_StopWatch_View_list_times_main_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_StopWatch_View_list_times_main_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_StopWatch_View_list_times_main_main_default, 1);
    lv_style_set_border_opa(&style_StopWatch_View_list_times_main_main_default, 255);
    lv_style_set_border_color(&style_StopWatch_View_list_times_main_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_StopWatch_View_list_times_main_main_default, LV_BORDER_SIDE_NONE);
    lv_style_set_radius(&style_StopWatch_View_list_times_main_main_default, 3);
    lv_style_set_shadow_width(&style_StopWatch_View_list_times_main_main_default, 0);
    lv_obj_add_style(ui->StopWatch_View_list_times, &style_StopWatch_View_list_times_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_StopWatch_View_list_times_main_scrollbar_default
    static lv_style_t style_StopWatch_View_list_times_main_scrollbar_default;
    ui_init_style(&style_StopWatch_View_list_times_main_scrollbar_default);

    lv_style_set_radius(&style_StopWatch_View_list_times_main_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_StopWatch_View_list_times_main_scrollbar_default, 255);
    lv_style_set_bg_color(&style_StopWatch_View_list_times_main_scrollbar_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_StopWatch_View_list_times_main_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->StopWatch_View_list_times, &style_StopWatch_View_list_times_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_StopWatch_View_list_times_extra_btns_main_default
    static lv_style_t style_StopWatch_View_list_times_extra_btns_main_default;
    ui_init_style(&style_StopWatch_View_list_times_extra_btns_main_default);

    lv_style_set_pad_top(&style_StopWatch_View_list_times_extra_btns_main_default, 5);
    lv_style_set_pad_left(&style_StopWatch_View_list_times_extra_btns_main_default, 5);
    lv_style_set_pad_right(&style_StopWatch_View_list_times_extra_btns_main_default, 5);
    lv_style_set_pad_bottom(&style_StopWatch_View_list_times_extra_btns_main_default, 5);
    lv_style_set_border_width(&style_StopWatch_View_list_times_extra_btns_main_default, 0);
    lv_style_set_text_color(&style_StopWatch_View_list_times_extra_btns_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_StopWatch_View_list_times_extra_btns_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_StopWatch_View_list_times_extra_btns_main_default, 255);
    lv_style_set_radius(&style_StopWatch_View_list_times_extra_btns_main_default, 3);
    lv_style_set_bg_opa(&style_StopWatch_View_list_times_extra_btns_main_default, 255);
    lv_style_set_bg_color(&style_StopWatch_View_list_times_extra_btns_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_StopWatch_View_list_times_extra_btns_main_default, LV_GRAD_DIR_NONE);

    //Write style state: LV_STATE_DEFAULT for &style_StopWatch_View_list_times_extra_texts_main_default
    static lv_style_t style_StopWatch_View_list_times_extra_texts_main_default;
    ui_init_style(&style_StopWatch_View_list_times_extra_texts_main_default);

    lv_style_set_pad_top(&style_StopWatch_View_list_times_extra_texts_main_default, 5);
    lv_style_set_pad_left(&style_StopWatch_View_list_times_extra_texts_main_default, 5);
    lv_style_set_pad_right(&style_StopWatch_View_list_times_extra_texts_main_default, 5);
    lv_style_set_pad_bottom(&style_StopWatch_View_list_times_extra_texts_main_default, 5);
    lv_style_set_border_width(&style_StopWatch_View_list_times_extra_texts_main_default, 0);
    lv_style_set_text_color(&style_StopWatch_View_list_times_extra_texts_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_StopWatch_View_list_times_extra_texts_main_default, &lv_font_montserratMedium_16);
    lv_style_set_text_opa(&style_StopWatch_View_list_times_extra_texts_main_default, 255);
    lv_style_set_radius(&style_StopWatch_View_list_times_extra_texts_main_default, 3);
    lv_style_set_transform_width(&style_StopWatch_View_list_times_extra_texts_main_default, 0);
    lv_style_set_bg_opa(&style_StopWatch_View_list_times_extra_texts_main_default, 255);
    lv_style_set_bg_color(&style_StopWatch_View_list_times_extra_texts_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_StopWatch_View_list_times_extra_texts_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->StopWatch_View_list_times_item2, &style_StopWatch_View_list_times_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->StopWatch_View_list_times_item1, &style_StopWatch_View_list_times_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->StopWatch_View_list_times_item0, &style_StopWatch_View_list_times_extra_texts_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes StopWatch_View_img_stop
    ui->StopWatch_View_img_stop = lv_img_create(ui->StopWatch_View);
    lv_obj_add_flag(ui->StopWatch_View_img_stop, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->StopWatch_View_img_stop, &_stop_alpha_48x48);
    lv_img_set_pivot(ui->StopWatch_View_img_stop, 50,50);
    lv_img_set_angle(ui->StopWatch_View_img_stop, 0);
    lv_obj_set_pos(ui->StopWatch_View_img_stop, 153, 213);
    lv_obj_set_size(ui->StopWatch_View_img_stop, 48, 48);

    //Write style for StopWatch_View_img_stop, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->StopWatch_View_img_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->StopWatch_View_img_stop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->StopWatch_View_img_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->StopWatch_View_img_stop, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes StopWatch_View_img_continue
    ui->StopWatch_View_img_continue = lv_img_create(ui->StopWatch_View);
    lv_img_set_src(ui->StopWatch_View_img_continue, &_continue_alpha_48x48);
    lv_img_set_pivot(ui->StopWatch_View_img_continue, 50,50);
    lv_img_set_angle(ui->StopWatch_View_img_continue, 0);
    lv_obj_set_pos(ui->StopWatch_View_img_continue, 153, 213);
    lv_obj_set_size(ui->StopWatch_View_img_continue, 48, 48);
    lv_obj_add_flag(ui->StopWatch_View_img_continue, LV_OBJ_FLAG_CLICKABLE);

    //Write style for StopWatch_View_img_continue, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->StopWatch_View_img_continue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->StopWatch_View_img_continue, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->StopWatch_View_img_continue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->StopWatch_View_img_continue, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes StopWatch_View_img_restart
    ui->StopWatch_View_img_restart = lv_img_create(ui->StopWatch_View);
    lv_obj_add_flag(ui->StopWatch_View_img_restart, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->StopWatch_View_img_restart, &_restart_alpha_48x48);
    lv_img_set_pivot(ui->StopWatch_View_img_restart, 50,50);
    lv_img_set_angle(ui->StopWatch_View_img_restart, 0);
    lv_obj_set_pos(ui->StopWatch_View_img_restart, 20, 213);
    lv_obj_set_size(ui->StopWatch_View_img_restart, 48, 48);

    //Write style for StopWatch_View_img_restart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->StopWatch_View_img_restart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->StopWatch_View_img_restart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->StopWatch_View_img_restart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->StopWatch_View_img_restart, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes StopWatch_View_img_flag
    ui->StopWatch_View_img_flag = lv_img_create(ui->StopWatch_View);
    lv_img_set_src(ui->StopWatch_View_img_flag, &_flag_alpha_48x48);
    lv_img_set_pivot(ui->StopWatch_View_img_flag, 50,50);
    lv_img_set_angle(ui->StopWatch_View_img_flag, 0);
    lv_obj_set_pos(ui->StopWatch_View_img_flag, 17, 213);
    lv_obj_set_size(ui->StopWatch_View_img_flag, 48, 48);
    lv_obj_add_flag(ui->StopWatch_View_img_flag, LV_OBJ_FLAG_CLICKABLE);

    //Write style for StopWatch_View_img_flag, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->StopWatch_View_img_flag, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->StopWatch_View_img_flag, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->StopWatch_View_img_flag, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->StopWatch_View_img_flag, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of StopWatch_View.


    //Update current screen layout.
    lv_obj_update_layout(ui->StopWatch_View);

    //Init events for screen.
    events_init_StopWatch_View(ui);
}
