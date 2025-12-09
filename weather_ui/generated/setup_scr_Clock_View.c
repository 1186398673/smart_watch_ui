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



void setup_scr_Clock_View(lv_ui *ui)
{
    //Write codes Clock_View
    ui->Clock_View = lv_obj_create(NULL);
    lv_obj_set_size(ui->Clock_View, 240, 280);
    lv_obj_set_scrollbar_mode(ui->Clock_View, LV_SCROLLBAR_MODE_OFF);

    //Write style for Clock_View, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Clock_View, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Clock_View, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Clock_View, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Clock_View_img_1
    ui->Clock_View_img_1 = lv_img_create(ui->Clock_View);
    lv_obj_add_flag(ui->Clock_View_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Clock_View_img_1, &_3_alpha_240x280);
    lv_img_set_pivot(ui->Clock_View_img_1, 50,50);
    lv_img_set_angle(ui->Clock_View_img_1, 0);
    lv_obj_set_pos(ui->Clock_View_img_1, 0, 0);
    lv_obj_set_size(ui->Clock_View_img_1, 240, 280);

    //Write style for Clock_View_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Clock_View_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Clock_View_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Clock_View_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Clock_View_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Clock_View_img_2
    ui->Clock_View_img_2 = lv_img_create(ui->Clock_View);
    lv_obj_add_flag(ui->Clock_View_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Clock_View_img_2, &_4_alpha_27x102);
    lv_img_set_pivot(ui->Clock_View_img_2, 50,50);
    lv_img_set_angle(ui->Clock_View_img_2, 0);
    lv_obj_set_pos(ui->Clock_View_img_2, 108, 47);
    lv_obj_set_size(ui->Clock_View_img_2, 27, 102);

    //Write style for Clock_View_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Clock_View_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Clock_View_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Clock_View_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Clock_View_img_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Clock_View_img_3
    ui->Clock_View_img_3 = lv_img_create(ui->Clock_View);
    lv_obj_add_flag(ui->Clock_View_img_3, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Clock_View_img_3, &_5_alpha_27x142);
    lv_img_set_pivot(ui->Clock_View_img_3, 50,50);
    lv_img_set_angle(ui->Clock_View_img_3, 0);
    lv_obj_set_pos(ui->Clock_View_img_3, 108, 8);
    lv_obj_set_size(ui->Clock_View_img_3, 27, 142);

    //Write style for Clock_View_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Clock_View_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Clock_View_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Clock_View_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Clock_View_img_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Clock_View_img_4
    ui->Clock_View_img_4 = lv_img_create(ui->Clock_View);
    lv_obj_add_flag(ui->Clock_View_img_4, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Clock_View_img_4, &_6_alpha_27x126);
    lv_img_set_pivot(ui->Clock_View_img_4, 50,50);
    lv_img_set_angle(ui->Clock_View_img_4, 0);
    lv_obj_set_pos(ui->Clock_View_img_4, 108, 25);
    lv_obj_set_size(ui->Clock_View_img_4, 27, 126);

    //Write style for Clock_View_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Clock_View_img_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Clock_View_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Clock_View_img_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Clock_View_img_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Clock_View.


    //Update current screen layout.
    lv_obj_update_layout(ui->Clock_View);

    //Init events for screen.
    events_init_Clock_View(ui);
}
