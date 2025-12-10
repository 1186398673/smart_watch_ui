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



void setup_scr_Digit_View2(lv_ui *ui)
{
    //Write codes Digit_View2
    ui->Digit_View2 = lv_obj_create(NULL);
    lv_obj_set_size(ui->Digit_View2, 240, 280);
    lv_obj_set_scrollbar_mode(ui->Digit_View2, LV_SCROLLBAR_MODE_OFF);

    //Write style for Digit_View2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Digit_View2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Digit_View2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Digit_View2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Digit_View2_img_1
    ui->Digit_View2_img_1 = lv_img_create(ui->Digit_View2);
    lv_obj_add_flag(ui->Digit_View2_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Digit_View2_img_1, &_smile_alpha_240x280);
    lv_img_set_pivot(ui->Digit_View2_img_1, 50,50);
    lv_img_set_angle(ui->Digit_View2_img_1, 0);
    lv_obj_set_pos(ui->Digit_View2_img_1, 0, 0);
    lv_obj_set_size(ui->Digit_View2_img_1, 240, 280);

    //Write style for Digit_View2_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Digit_View2_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Digit_View2_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Digit_View2_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Digit_View2_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Digit_View2_label_1
    ui->Digit_View2_label_1 = lv_label_create(ui->Digit_View2);
    lv_label_set_text(ui->Digit_View2_label_1, "周一");
    lv_label_set_long_mode(ui->Digit_View2_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Digit_View2_label_1, 161, 17);
    lv_obj_set_size(ui->Digit_View2_label_1, 41, 21);

    //Write style for Digit_View2_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Digit_View2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Digit_View2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Digit_View2_label_1, lv_color_hex(0xeb0000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Digit_View2_label_1, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Digit_View2_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Digit_View2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Digit_View2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Digit_View2_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Digit_View2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Digit_View2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Digit_View2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Digit_View2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Digit_View2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Digit_View2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Digit_View2_label_2
    ui->Digit_View2_label_2 = lv_label_create(ui->Digit_View2);
    lv_label_set_text(ui->Digit_View2_label_2, "18");
    lv_label_set_long_mode(ui->Digit_View2_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Digit_View2_label_2, 197, 17);
    lv_obj_set_size(ui->Digit_View2_label_2, 34, 18);

    //Write style for Digit_View2_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Digit_View2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Digit_View2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Digit_View2_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Digit_View2_label_2, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Digit_View2_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Digit_View2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Digit_View2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Digit_View2_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Digit_View2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Digit_View2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Digit_View2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Digit_View2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Digit_View2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Digit_View2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Digit_View2_label_3
    ui->Digit_View2_label_3 = lv_label_create(ui->Digit_View2);
    lv_label_set_text(ui->Digit_View2_label_3, "16 : 03");
    lv_label_set_long_mode(ui->Digit_View2_label_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Digit_View2_label_3, 124, 64);
    lv_obj_set_size(ui->Digit_View2_label_3, 105, 33);

    //Write style for Digit_View2_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Digit_View2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Digit_View2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Digit_View2_label_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Digit_View2_label_3, &lv_font_montserratMedium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Digit_View2_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Digit_View2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Digit_View2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Digit_View2_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Digit_View2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Digit_View2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Digit_View2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Digit_View2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Digit_View2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Digit_View2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Digit_View2_label_4
    ui->Digit_View2_label_4 = lv_label_create(ui->Digit_View2);
    lv_label_set_text(ui->Digit_View2_label_4, "36%");
    lv_label_set_long_mode(ui->Digit_View2_label_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Digit_View2_label_4, 91, 235);
    lv_obj_set_size(ui->Digit_View2_label_4, 89, 22);

    //Write style for Digit_View2_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Digit_View2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Digit_View2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Digit_View2_label_4, lv_color_hex(0xf6f6f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Digit_View2_label_4, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Digit_View2_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Digit_View2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Digit_View2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Digit_View2_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Digit_View2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Digit_View2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Digit_View2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Digit_View2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Digit_View2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Digit_View2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Digit_View2.


    //Update current screen layout.
    lv_obj_update_layout(ui->Digit_View2);

    //Init events for screen.
    events_init_Digit_View2(ui);
}
