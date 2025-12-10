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



void setup_scr_Panel_View(lv_ui *ui)
{
    //Write codes Panel_View
    ui->Panel_View = lv_obj_create(NULL);
    lv_obj_set_size(ui->Panel_View, 240, 280);
    lv_obj_set_scrollbar_mode(ui->Panel_View, LV_SCROLLBAR_MODE_OFF);

    //Write style for Panel_View, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Panel_View, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Panel_View, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Panel_View, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Panel_View_cont_panel5
    ui->Panel_View_cont_panel5 = lv_obj_create(ui->Panel_View);
    lv_obj_set_pos(ui->Panel_View_cont_panel5, 820, 26);
    lv_obj_set_size(ui->Panel_View_cont_panel5, 182, 218);
    lv_obj_set_scrollbar_mode(ui->Panel_View_cont_panel5, LV_SCROLLBAR_MODE_OFF);

    //Write style for Panel_View_cont_panel5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Panel_View_cont_panel5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Panel_View_cont_panel5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Panel_View_cont_panel5, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Panel_View_cont_panel5, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Panel_View_cont_panel5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Panel_View_cont_panel5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Panel_View_cont_panel5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Panel_View_cont_panel5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Panel_View_cont_panel5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Panel_View_cont_panel5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Panel_View_cont_panel5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Panel_View_cont_panel5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Panel_View_cont_panel5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Panel_View_img_panel5
    ui->Panel_View_img_panel5 = lv_img_create(ui->Panel_View_cont_panel5);
    lv_obj_add_flag(ui->Panel_View_img_panel5, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Panel_View_img_panel5, &_panel5_alpha_163x199);
    lv_img_set_pivot(ui->Panel_View_img_panel5, 50,50);
    lv_img_set_angle(ui->Panel_View_img_panel5, 0);
    lv_obj_set_pos(ui->Panel_View_img_panel5, 9, 9);
    lv_obj_set_size(ui->Panel_View_img_panel5, 163, 199);

    //Write style for Panel_View_img_panel5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Panel_View_img_panel5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Panel_View_img_panel5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Panel_View_img_panel5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Panel_View_img_panel5, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Panel_View_cont_panel4
    ui->Panel_View_cont_panel4 = lv_obj_create(ui->Panel_View);
    lv_obj_set_pos(ui->Panel_View_cont_panel4, 614, 23);
    lv_obj_set_size(ui->Panel_View_cont_panel4, 190, 224);
    lv_obj_set_scrollbar_mode(ui->Panel_View_cont_panel4, LV_SCROLLBAR_MODE_OFF);

    //Write style for Panel_View_cont_panel4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Panel_View_cont_panel4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Panel_View_cont_panel4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Panel_View_cont_panel4, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Panel_View_cont_panel4, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Panel_View_cont_panel4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Panel_View_cont_panel4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Panel_View_cont_panel4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Panel_View_cont_panel4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Panel_View_cont_panel4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Panel_View_cont_panel4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Panel_View_cont_panel4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Panel_View_cont_panel4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Panel_View_cont_panel4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Panel_View_img_panel4
    ui->Panel_View_img_panel4 = lv_img_create(ui->Panel_View_cont_panel4);
    lv_obj_add_flag(ui->Panel_View_img_panel4, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Panel_View_img_panel4, &_panel4_alpha_170x207);
    lv_img_set_pivot(ui->Panel_View_img_panel4, 50,50);
    lv_img_set_angle(ui->Panel_View_img_panel4, 0);
    lv_obj_set_pos(ui->Panel_View_img_panel4, 10, 7);
    lv_obj_set_size(ui->Panel_View_img_panel4, 170, 207);

    //Write style for Panel_View_img_panel4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Panel_View_img_panel4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Panel_View_img_panel4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Panel_View_img_panel4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Panel_View_img_panel4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Panel_View_cont_panel3
    ui->Panel_View_cont_panel3 = lv_obj_create(ui->Panel_View);
    lv_obj_set_pos(ui->Panel_View_cont_panel3, 421, 26);
    lv_obj_set_size(ui->Panel_View_cont_panel3, 175, 220);
    lv_obj_set_scrollbar_mode(ui->Panel_View_cont_panel3, LV_SCROLLBAR_MODE_OFF);

    //Write style for Panel_View_cont_panel3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Panel_View_cont_panel3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Panel_View_cont_panel3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Panel_View_cont_panel3, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Panel_View_cont_panel3, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Panel_View_cont_panel3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Panel_View_cont_panel3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Panel_View_cont_panel3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Panel_View_cont_panel3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Panel_View_cont_panel3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Panel_View_cont_panel3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Panel_View_cont_panel3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Panel_View_cont_panel3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Panel_View_cont_panel3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Panel_View_img_panel3
    ui->Panel_View_img_panel3 = lv_img_create(ui->Panel_View_cont_panel3);
    lv_obj_add_flag(ui->Panel_View_img_panel3, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Panel_View_img_panel3, &_panel3_alpha_157x200);
    lv_img_set_pivot(ui->Panel_View_img_panel3, 50,50);
    lv_img_set_angle(ui->Panel_View_img_panel3, 0);
    lv_obj_set_pos(ui->Panel_View_img_panel3, 7, 8);
    lv_obj_set_size(ui->Panel_View_img_panel3, 157, 200);

    //Write style for Panel_View_img_panel3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Panel_View_img_panel3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Panel_View_img_panel3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Panel_View_img_panel3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Panel_View_img_panel3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Panel_View_cont_panel2
    ui->Panel_View_cont_panel2 = lv_obj_create(ui->Panel_View);
    lv_obj_set_pos(ui->Panel_View_cont_panel2, 220, 23);
    lv_obj_set_size(ui->Panel_View_cont_panel2, 177, 221);
    lv_obj_set_scrollbar_mode(ui->Panel_View_cont_panel2, LV_SCROLLBAR_MODE_OFF);

    //Write style for Panel_View_cont_panel2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Panel_View_cont_panel2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Panel_View_cont_panel2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Panel_View_cont_panel2, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Panel_View_cont_panel2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Panel_View_cont_panel2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Panel_View_cont_panel2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Panel_View_cont_panel2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Panel_View_cont_panel2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Panel_View_cont_panel2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Panel_View_cont_panel2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Panel_View_cont_panel2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Panel_View_cont_panel2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Panel_View_cont_panel2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Panel_View_img_panel2
    ui->Panel_View_img_panel2 = lv_img_create(ui->Panel_View_cont_panel2);
    lv_obj_add_flag(ui->Panel_View_img_panel2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Panel_View_img_panel2, &_panel2_alpha_160x196);
    lv_img_set_pivot(ui->Panel_View_img_panel2, 50,50);
    lv_img_set_angle(ui->Panel_View_img_panel2, 0);
    lv_obj_set_pos(ui->Panel_View_img_panel2, 7, 12);
    lv_obj_set_size(ui->Panel_View_img_panel2, 160, 196);

    //Write style for Panel_View_img_panel2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Panel_View_img_panel2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Panel_View_img_panel2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Panel_View_img_panel2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Panel_View_img_panel2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Panel_View_cont_panel1
    ui->Panel_View_cont_panel1 = lv_obj_create(ui->Panel_View);
    lv_obj_set_pos(ui->Panel_View_cont_panel1, 6, 23);
    lv_obj_set_size(ui->Panel_View_cont_panel1, 188, 221);
    lv_obj_set_scrollbar_mode(ui->Panel_View_cont_panel1, LV_SCROLLBAR_MODE_OFF);

    //Write style for Panel_View_cont_panel1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Panel_View_cont_panel1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Panel_View_cont_panel1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Panel_View_cont_panel1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Panel_View_cont_panel1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Panel_View_cont_panel1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Panel_View_cont_panel1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Panel_View_cont_panel1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Panel_View_cont_panel1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Panel_View_cont_panel1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Panel_View_cont_panel1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Panel_View_cont_panel1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Panel_View_cont_panel1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Panel_View_cont_panel1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Panel_View_img_panel1
    ui->Panel_View_img_panel1 = lv_img_create(ui->Panel_View_cont_panel1);
    lv_obj_add_flag(ui->Panel_View_img_panel1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Panel_View_img_panel1, &_panel1_alpha_168x194);
    lv_img_set_pivot(ui->Panel_View_img_panel1, 50,50);
    lv_img_set_angle(ui->Panel_View_img_panel1, 0);
    lv_obj_set_pos(ui->Panel_View_img_panel1, 8, 11);
    lv_obj_set_size(ui->Panel_View_img_panel1, 168, 194);

    //Write style for Panel_View_img_panel1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Panel_View_img_panel1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Panel_View_img_panel1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Panel_View_img_panel1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Panel_View_img_panel1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Panel_View.


    //Update current screen layout.
    lv_obj_update_layout(ui->Panel_View);

    //Init events for screen.
    events_init_Panel_View(ui);
}
