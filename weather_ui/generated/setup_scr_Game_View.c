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



void setup_scr_Game_View(lv_ui *ui)
{
    //Write codes Game_View
    ui->Game_View = lv_obj_create(NULL);
    lv_obj_set_size(ui->Game_View, 240, 280);
    lv_obj_set_scrollbar_mode(ui->Game_View, LV_SCROLLBAR_MODE_OFF);

    //Write style for Game_View, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Game_View, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Game_View, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Game_View, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Game_View_img_back_leg
    ui->Game_View_img_back_leg = lv_img_create(ui->Game_View);
    lv_obj_add_flag(ui->Game_View_img_back_leg, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Game_View_img_back_leg, &_dino_back_leg_alpha_58x62);
    lv_img_set_pivot(ui->Game_View_img_back_leg, 50,50);
    lv_img_set_angle(ui->Game_View_img_back_leg, 0);
    lv_obj_set_pos(ui->Game_View_img_back_leg, 3, 176);
    lv_obj_set_size(ui->Game_View_img_back_leg, 58, 62);

    //Write style for Game_View_img_back_leg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Game_View_img_back_leg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Game_View_img_back_leg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Game_View_img_back_leg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Game_View_img_back_leg, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Game_View_line_ground
    ui->Game_View_line_ground = lv_line_create(ui->Game_View);
    static lv_point_t Game_View_line_ground[] = {{0, 0},{240, 0},};
    lv_line_set_points(ui->Game_View_line_ground, Game_View_line_ground, 2);
    lv_obj_set_pos(ui->Game_View_line_ground, 3, 241);
    lv_obj_set_size(ui->Game_View_line_ground, 240, 1);

    //Write style for Game_View_line_ground, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->Game_View_line_ground, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->Game_View_line_ground, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->Game_View_line_ground, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->Game_View_line_ground, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Game_View_img_dino_front_leg
    ui->Game_View_img_dino_front_leg = lv_img_create(ui->Game_View);
    lv_obj_add_flag(ui->Game_View_img_dino_front_leg, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Game_View_img_dino_front_leg, &_dino_front_leg_alpha_58x62);
    lv_img_set_pivot(ui->Game_View_img_dino_front_leg, 50,50);
    lv_img_set_angle(ui->Game_View_img_dino_front_leg, 0);
    lv_obj_set_pos(ui->Game_View_img_dino_front_leg, 3, 180);
    lv_obj_set_size(ui->Game_View_img_dino_front_leg, 58, 62);

    //Write style for Game_View_img_dino_front_leg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Game_View_img_dino_front_leg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Game_View_img_dino_front_leg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Game_View_img_dino_front_leg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Game_View_img_dino_front_leg, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Game_View_img_dino_jump
    ui->Game_View_img_dino_jump = lv_img_create(ui->Game_View);
    lv_obj_add_flag(ui->Game_View_img_dino_jump, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Game_View_img_dino_jump, &_dino_jump_alpha_58x62);
    lv_img_set_pivot(ui->Game_View_img_dino_jump, 50,50);
    lv_img_set_angle(ui->Game_View_img_dino_jump, 0);
    lv_obj_set_pos(ui->Game_View_img_dino_jump, 3, 180);
    lv_obj_set_size(ui->Game_View_img_dino_jump, 58, 62);

    //Write style for Game_View_img_dino_jump, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Game_View_img_dino_jump, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Game_View_img_dino_jump, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Game_View_img_dino_jump, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Game_View_img_dino_jump, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Game_View_img_dino_crashed
    ui->Game_View_img_dino_crashed = lv_img_create(ui->Game_View);
    lv_obj_add_flag(ui->Game_View_img_dino_crashed, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Game_View_img_dino_crashed, &_dino_crashed_alpha_58x62);
    lv_img_set_pivot(ui->Game_View_img_dino_crashed, 50,50);
    lv_img_set_angle(ui->Game_View_img_dino_crashed, 0);
    lv_obj_set_pos(ui->Game_View_img_dino_crashed, 3, 180);
    lv_obj_set_size(ui->Game_View_img_dino_crashed, 58, 62);

    //Write style for Game_View_img_dino_crashed, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Game_View_img_dino_crashed, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Game_View_img_dino_crashed, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Game_View_img_dino_crashed, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Game_View_img_dino_crashed, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Game_View_img_bigtree
    ui->Game_View_img_bigtree = lv_img_create(ui->Game_View);
    lv_obj_add_flag(ui->Game_View_img_bigtree, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Game_View_img_bigtree, &_tree_big_alpha_33x62);
    lv_img_set_pivot(ui->Game_View_img_bigtree, 50,50);
    lv_img_set_angle(ui->Game_View_img_bigtree, 0);
    lv_obj_set_pos(ui->Game_View_img_bigtree, 104, 178);
    lv_obj_set_size(ui->Game_View_img_bigtree, 33, 62);

    //Write style for Game_View_img_bigtree, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Game_View_img_bigtree, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Game_View_img_bigtree, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Game_View_img_bigtree, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Game_View_img_bigtree, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Game_View_img_smalltree
    ui->Game_View_img_smalltree = lv_img_create(ui->Game_View);
    lv_obj_add_flag(ui->Game_View_img_smalltree, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Game_View_img_smalltree, &_tree_small_alpha_27x57);
    lv_img_set_pivot(ui->Game_View_img_smalltree, 50,50);
    lv_img_set_angle(ui->Game_View_img_smalltree, 0);
    lv_obj_set_pos(ui->Game_View_img_smalltree, 203, 184);
    lv_obj_set_size(ui->Game_View_img_smalltree, 27, 57);

    //Write style for Game_View_img_smalltree, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Game_View_img_smalltree, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Game_View_img_smalltree, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Game_View_img_smalltree, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Game_View_img_smalltree, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Game_View_img_bird0
    ui->Game_View_img_bird0 = lv_img_create(ui->Game_View);
    lv_obj_add_flag(ui->Game_View_img_bird0, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Game_View_img_bird0, &_bird0_alpha_68x41);
    lv_img_set_pivot(ui->Game_View_img_bird0, 50,50);
    lv_img_set_angle(ui->Game_View_img_bird0, 0);
    lv_obj_set_pos(ui->Game_View_img_bird0, 85, 52);
    lv_obj_set_size(ui->Game_View_img_bird0, 68, 41);

    //Write style for Game_View_img_bird0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Game_View_img_bird0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Game_View_img_bird0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Game_View_img_bird0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Game_View_img_bird0, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Game_View_img_bird1
    ui->Game_View_img_bird1 = lv_img_create(ui->Game_View);
    lv_obj_add_flag(ui->Game_View_img_bird1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Game_View_img_bird1, &_bird1_alpha_70x50);
    lv_img_set_pivot(ui->Game_View_img_bird1, 50,50);
    lv_img_set_angle(ui->Game_View_img_bird1, 0);
    lv_obj_set_pos(ui->Game_View_img_bird1, 164, 48);
    lv_obj_set_size(ui->Game_View_img_bird1, 70, 50);

    //Write style for Game_View_img_bird1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Game_View_img_bird1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Game_View_img_bird1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Game_View_img_bird1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Game_View_img_bird1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Game_View_img_restart
    ui->Game_View_img_restart = lv_img_create(ui->Game_View);
    lv_obj_add_flag(ui->Game_View_img_restart, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Game_View_img_restart, &_restart_alpha_48x48);
    lv_img_set_pivot(ui->Game_View_img_restart, 50,50);
    lv_img_set_angle(ui->Game_View_img_restart, 0);
    lv_obj_set_pos(ui->Game_View_img_restart, 44, 105);
    lv_obj_set_size(ui->Game_View_img_restart, 48, 48);

    //Write style for Game_View_img_restart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Game_View_img_restart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Game_View_img_restart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Game_View_img_restart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Game_View_img_restart, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Game_View_label_scores
    ui->Game_View_label_scores = lv_label_create(ui->Game_View);
    lv_label_set_text(ui->Game_View_label_scores, "得分 75");
    lv_label_set_long_mode(ui->Game_View_label_scores, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Game_View_label_scores, 174, 6);
    lv_obj_set_size(ui->Game_View_label_scores, 61, 17);

    //Write style for Game_View_label_scores, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Game_View_label_scores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Game_View_label_scores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Game_View_label_scores, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Game_View_label_scores, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Game_View_label_scores, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Game_View_label_scores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Game_View_label_scores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Game_View_label_scores, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Game_View_label_scores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Game_View_label_scores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Game_View_label_scores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Game_View_label_scores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Game_View_label_scores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Game_View_label_scores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Game_View_label_mostscores
    ui->Game_View_label_mostscores = lv_label_create(ui->Game_View);
    lv_label_set_text(ui->Game_View_label_mostscores, "最高分 125");
    lv_label_set_long_mode(ui->Game_View_label_mostscores, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Game_View_label_mostscores, 158, 29);
    lv_obj_set_size(ui->Game_View_label_mostscores, 84, 18);

    //Write style for Game_View_label_mostscores, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Game_View_label_mostscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Game_View_label_mostscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Game_View_label_mostscores, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Game_View_label_mostscores, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Game_View_label_mostscores, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Game_View_label_mostscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Game_View_label_mostscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Game_View_label_mostscores, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Game_View_label_mostscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Game_View_label_mostscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Game_View_label_mostscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Game_View_label_mostscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Game_View_label_mostscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Game_View_label_mostscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Game_View_label_game
    ui->Game_View_label_game = lv_label_create(ui->Game_View);
    lv_label_set_text(ui->Game_View_label_game, "开始游戏");
    lv_label_set_long_mode(ui->Game_View_label_game, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Game_View_label_game, 98, 120);
    lv_obj_set_size(ui->Game_View_label_game, 80, 19);

    //Write style for Game_View_label_game, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Game_View_label_game, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Game_View_label_game, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Game_View_label_game, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Game_View_label_game, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Game_View_label_game, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Game_View_label_game, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Game_View_label_game, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Game_View_label_game, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Game_View_label_game, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Game_View_label_game, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Game_View_label_game, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Game_View_label_game, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Game_View_label_game, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Game_View_label_game, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Game_View_label_newscores
    ui->Game_View_label_newscores = lv_label_create(ui->Game_View);
    lv_label_set_text(ui->Game_View_label_newscores, "新纪录 ！");
    lv_label_set_long_mode(ui->Game_View_label_newscores, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Game_View_label_newscores, 164, 29);
    lv_obj_set_size(ui->Game_View_label_newscores, 68, 16);

    //Write style for Game_View_label_newscores, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Game_View_label_newscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Game_View_label_newscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Game_View_label_newscores, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Game_View_label_newscores, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Game_View_label_newscores, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Game_View_label_newscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Game_View_label_newscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Game_View_label_newscores, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Game_View_label_newscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Game_View_label_newscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Game_View_label_newscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Game_View_label_newscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Game_View_label_newscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Game_View_label_newscores, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Game_View.


    //Update current screen layout.
    lv_obj_update_layout(ui->Game_View);

    //Init events for screen.
    events_init_Game_View(ui);
}
