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

    //Write codes Panel_View_tabview_1
    ui->Panel_View_tabview_1 = lv_tabview_create(ui->Panel_View, LV_DIR_TOP, 50);
    lv_obj_set_pos(ui->Panel_View_tabview_1, 3, 3);
    lv_obj_set_size(ui->Panel_View_tabview_1, 233, 274);
    lv_obj_set_scrollbar_mode(ui->Panel_View_tabview_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for Panel_View_tabview_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Panel_View_tabview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Panel_View_tabview_1, lv_color_hex(0xeaeff3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Panel_View_tabview_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Panel_View_tabview_1, lv_color_hex(0x4d4d4d), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Panel_View_tabview_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Panel_View_tabview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Panel_View_tabview_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Panel_View_tabview_1, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Panel_View_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Panel_View_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Panel_View_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_Panel_View_tabview_1_extra_btnm_main_default
    static lv_style_t style_Panel_View_tabview_1_extra_btnm_main_default;
    ui_init_style(&style_Panel_View_tabview_1_extra_btnm_main_default);

    lv_style_set_bg_opa(&style_Panel_View_tabview_1_extra_btnm_main_default, 255);
    lv_style_set_bg_color(&style_Panel_View_tabview_1_extra_btnm_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_Panel_View_tabview_1_extra_btnm_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_Panel_View_tabview_1_extra_btnm_main_default, 0);
    lv_style_set_radius(&style_Panel_View_tabview_1_extra_btnm_main_default, 0);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->Panel_View_tabview_1), &style_Panel_View_tabview_1_extra_btnm_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_Panel_View_tabview_1_extra_btnm_items_default
    static lv_style_t style_Panel_View_tabview_1_extra_btnm_items_default;
    ui_init_style(&style_Panel_View_tabview_1_extra_btnm_items_default);

    lv_style_set_text_color(&style_Panel_View_tabview_1_extra_btnm_items_default, lv_color_hex(0x4d4d4d));
    lv_style_set_text_font(&style_Panel_View_tabview_1_extra_btnm_items_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_Panel_View_tabview_1_extra_btnm_items_default, 255);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->Panel_View_tabview_1), &style_Panel_View_tabview_1_extra_btnm_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_Panel_View_tabview_1_extra_btnm_items_checked
    static lv_style_t style_Panel_View_tabview_1_extra_btnm_items_checked;
    ui_init_style(&style_Panel_View_tabview_1_extra_btnm_items_checked);

    lv_style_set_text_color(&style_Panel_View_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_text_font(&style_Panel_View_tabview_1_extra_btnm_items_checked, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_Panel_View_tabview_1_extra_btnm_items_checked, 255);
    lv_style_set_border_width(&style_Panel_View_tabview_1_extra_btnm_items_checked, 4);
    lv_style_set_border_opa(&style_Panel_View_tabview_1_extra_btnm_items_checked, 255);
    lv_style_set_border_color(&style_Panel_View_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_border_side(&style_Panel_View_tabview_1_extra_btnm_items_checked, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_Panel_View_tabview_1_extra_btnm_items_checked, 0);
    lv_style_set_bg_opa(&style_Panel_View_tabview_1_extra_btnm_items_checked, 60);
    lv_style_set_bg_color(&style_Panel_View_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_bg_grad_dir(&style_Panel_View_tabview_1_extra_btnm_items_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->Panel_View_tabview_1), &style_Panel_View_tabview_1_extra_btnm_items_checked, LV_PART_ITEMS|LV_STATE_CHECKED);

    //Write codes panel1
    ui->Panel_View_tabview_1_tab_1 = lv_tabview_add_tab(ui->Panel_View_tabview_1,"panel1");
    lv_obj_t * Panel_View_tabview_1_tab_1_label = lv_label_create(ui->Panel_View_tabview_1_tab_1);
    lv_label_set_text(Panel_View_tabview_1_tab_1_label, "");

    //Write codes Panel_View_img_1
    ui->Panel_View_img_1 = lv_img_create(ui->Panel_View_tabview_1_tab_1);
    lv_obj_add_flag(ui->Panel_View_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Panel_View_img_1, &_panel1_alpha_231x221);
    lv_img_set_pivot(ui->Panel_View_img_1, 50,50);
    lv_img_set_angle(ui->Panel_View_img_1, 0);
    lv_obj_set_pos(ui->Panel_View_img_1, -19, -16);
    lv_obj_set_size(ui->Panel_View_img_1, 231, 221);

    //Write style for Panel_View_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Panel_View_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Panel_View_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Panel_View_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Panel_View_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes panel2
    ui->Panel_View_tabview_1_tab_2 = lv_tabview_add_tab(ui->Panel_View_tabview_1,"panel2");
    lv_obj_t * Panel_View_tabview_1_tab_2_label = lv_label_create(ui->Panel_View_tabview_1_tab_2);
    lv_label_set_text(Panel_View_tabview_1_tab_2_label, "");

    //Write codes Panel_View_img_2
    ui->Panel_View_img_2 = lv_img_create(ui->Panel_View_tabview_1_tab_2);
    lv_obj_add_flag(ui->Panel_View_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Panel_View_img_2, &_panel2_alpha_231x221);
    lv_img_set_pivot(ui->Panel_View_img_2, 50,50);
    lv_img_set_angle(ui->Panel_View_img_2, 0);
    lv_obj_set_pos(ui->Panel_View_img_2, -17, -15);
    lv_obj_set_size(ui->Panel_View_img_2, 231, 221);

    //Write style for Panel_View_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Panel_View_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Panel_View_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Panel_View_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Panel_View_img_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes panel3
    ui->Panel_View_tabview_1_tab_3 = lv_tabview_add_tab(ui->Panel_View_tabview_1,"panel3");
    lv_obj_t * Panel_View_tabview_1_tab_3_label = lv_label_create(ui->Panel_View_tabview_1_tab_3);
    lv_label_set_text(Panel_View_tabview_1_tab_3_label, "");

    //Write codes Panel_View_img_3
    ui->Panel_View_img_3 = lv_img_create(ui->Panel_View_tabview_1_tab_3);
    lv_obj_add_flag(ui->Panel_View_img_3, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Panel_View_img_3, &_panel_alpha_228x216);
    lv_img_set_pivot(ui->Panel_View_img_3, 50,50);
    lv_img_set_angle(ui->Panel_View_img_3, 0);
    lv_obj_set_pos(ui->Panel_View_img_3, -17, -13);
    lv_obj_set_size(ui->Panel_View_img_3, 228, 216);

    //Write style for Panel_View_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Panel_View_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Panel_View_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Panel_View_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Panel_View_img_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Panel_View.


    //Update current screen layout.
    lv_obj_update_layout(ui->Panel_View);

    //Init events for screen.
    events_init_Panel_View(ui);
}
