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



void setup_scr_Music_View(lv_ui *ui)
{
    //Write codes Music_View
    ui->Music_View = lv_obj_create(NULL);
    lv_obj_set_size(ui->Music_View, 240, 280);
    lv_obj_set_scrollbar_mode(ui->Music_View, LV_SCROLLBAR_MODE_OFF);

    //Write style for Music_View, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Music_View, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Music_View, lv_color_hex(0xa19e9e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Music_View, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Music_View_img_back
    ui->Music_View_img_back = lv_img_create(ui->Music_View);
    lv_obj_add_flag(ui->Music_View_img_back, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Music_View_img_back, &_back_alpha_48x48);
    lv_img_set_pivot(ui->Music_View_img_back, 50,50);
    lv_img_set_angle(ui->Music_View_img_back, 0);
    lv_obj_set_pos(ui->Music_View_img_back, 22, 228);
    lv_obj_set_size(ui->Music_View_img_back, 48, 48);

    //Write style for Music_View_img_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Music_View_img_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Music_View_img_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_img_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Music_View_img_back, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Music_View_img_play
    ui->Music_View_img_play = lv_img_create(ui->Music_View);
    lv_obj_add_flag(ui->Music_View_img_play, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Music_View_img_play, &_suspend_alpha_48x48);
    lv_img_set_pivot(ui->Music_View_img_play, 50,50);
    lv_img_set_angle(ui->Music_View_img_play, 0);
    lv_obj_set_pos(ui->Music_View_img_play, 99, 228);
    lv_obj_set_size(ui->Music_View_img_play, 48, 48);

    //Write style for Music_View_img_play, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Music_View_img_play, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Music_View_img_play, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_img_play, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Music_View_img_play, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Music_View_img_next
    ui->Music_View_img_next = lv_img_create(ui->Music_View);
    lv_obj_add_flag(ui->Music_View_img_next, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Music_View_img_next, &_next_alpha_48x48);
    lv_img_set_pivot(ui->Music_View_img_next, 50,50);
    lv_img_set_angle(ui->Music_View_img_next, 0);
    lv_obj_set_pos(ui->Music_View_img_next, 174, 228);
    lv_obj_set_size(ui->Music_View_img_next, 48, 48);

    //Write style for Music_View_img_next, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Music_View_img_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Music_View_img_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_img_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Music_View_img_next, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Music_View_img_music
    ui->Music_View_img_music = lv_img_create(ui->Music_View);
    lv_obj_add_flag(ui->Music_View_img_music, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Music_View_img_music, &_music_alpha_16x16);
    lv_img_set_pivot(ui->Music_View_img_music, 50,50);
    lv_img_set_angle(ui->Music_View_img_music, 0);
    lv_obj_set_pos(ui->Music_View_img_music, 59, 189);
    lv_obj_set_size(ui->Music_View_img_music, 16, 16);

    //Write style for Music_View_img_music, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Music_View_img_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Music_View_img_music, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_img_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Music_View_img_music, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Music_View_cont_icon_word
    ui->Music_View_cont_icon_word = lv_obj_create(ui->Music_View);
    lv_obj_set_pos(ui->Music_View_cont_icon_word, 36, 8);
    lv_obj_set_size(ui->Music_View_cont_icon_word, 176, 169);
    lv_obj_set_scrollbar_mode(ui->Music_View_cont_icon_word, LV_SCROLLBAR_MODE_OFF);

    //Write style for Music_View_cont_icon_word, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Music_View_cont_icon_word, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Music_View_cont_icon_word, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Music_View_cont_icon_word, lv_color_hex(0x8b8e90), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Music_View_cont_icon_word, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_cont_icon_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Music_View_cont_icon_word, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Music_View_cont_icon_word, lv_color_hex(0xa3a1a1), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Music_View_cont_icon_word, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Music_View_cont_icon_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Music_View_cont_icon_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Music_View_cont_icon_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Music_View_cont_icon_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Music_View_cont_icon_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Music_View_img_icon
    ui->Music_View_img_icon = lv_img_create(ui->Music_View_cont_icon_word);
    lv_obj_add_flag(ui->Music_View_img_icon, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Music_View_img_icon, &_pic_alpha_141x152);
    lv_img_set_pivot(ui->Music_View_img_icon, 50,50);
    lv_img_set_angle(ui->Music_View_img_icon, 0);
    lv_obj_set_pos(ui->Music_View_img_icon, 15, 7);
    lv_obj_set_size(ui->Music_View_img_icon, 141, 152);

    //Write style for Music_View_img_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Music_View_img_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Music_View_img_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_img_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Music_View_img_icon, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Music_View_label_word
    ui->Music_View_label_word = lv_label_create(ui->Music_View_cont_icon_word);
    lv_label_set_text(ui->Music_View_label_word, "窗外的麻雀在電線桿上多嘴\n你說這一句很有夏天的感覺\n手中的鉛筆在紙上來來回回\n我用幾行字形容你是我的誰\n秋刀魚的滋味 貓跟你都想瞭解\n初戀的香味就這樣被我們尋回\n那溫暖的陽光像剛摘的鮮豔草莓\n你說你捨不得吃掉這一種感覺");
    lv_label_set_long_mode(ui->Music_View_label_word, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Music_View_label_word, 204, 8);
    lv_obj_set_size(ui->Music_View_label_word, 134, 140);

    //Write style for Music_View_label_word, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Music_View_label_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_label_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Music_View_label_word, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Music_View_label_word, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Music_View_label_word, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Music_View_label_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Music_View_label_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Music_View_label_word, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Music_View_label_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Music_View_label_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Music_View_label_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Music_View_label_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Music_View_label_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Music_View_label_word, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Music_View_label_songname
    ui->Music_View_label_songname = lv_label_create(ui->Music_View);
    lv_label_set_text(ui->Music_View_label_songname, "周杰伦-七里香");
    lv_label_set_long_mode(ui->Music_View_label_songname, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->Music_View_label_songname, 75, 189);
    lv_obj_set_size(ui->Music_View_label_songname, 112, 23);

    //Write style for Music_View_label_songname, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Music_View_label_songname, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_label_songname, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Music_View_label_songname, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Music_View_label_songname, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Music_View_label_songname, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Music_View_label_songname, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Music_View_label_songname, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Music_View_label_songname, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Music_View_label_songname, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Music_View_label_songname, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Music_View_label_songname, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Music_View_label_songname, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Music_View_label_songname, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Music_View_label_songname, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Music_View_slider_songprocess
    ui->Music_View_slider_songprocess = lv_slider_create(ui->Music_View);
    lv_slider_set_range(ui->Music_View_slider_songprocess, 0, 100);
    lv_slider_set_mode(ui->Music_View_slider_songprocess, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->Music_View_slider_songprocess, 50, LV_ANIM_OFF);
    lv_obj_set_pos(ui->Music_View_slider_songprocess, 44, 212);
    lv_obj_set_size(ui->Music_View_slider_songprocess, 160, 8);

    //Write style for Music_View_slider_songprocess, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Music_View_slider_songprocess, 248, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Music_View_slider_songprocess, lv_color_hex(0x46494c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Music_View_slider_songprocess, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_slider_songprocess, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->Music_View_slider_songprocess, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Music_View_slider_songprocess, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Music_View_slider_songprocess, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Music_View_slider_songprocess, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Music_View_slider_songprocess, lv_color_hex(0xdcdcdc), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Music_View_slider_songprocess, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_slider_songprocess, 8, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for Music_View_slider_songprocess, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Music_View_slider_songprocess, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Music_View_slider_songprocess, lv_color_hex(0xbac1c7), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Music_View_slider_songprocess, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_slider_songprocess, 8, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes Music_View_img_la
    ui->Music_View_img_la = lv_img_create(ui->Music_View);
    lv_obj_add_flag(ui->Music_View_img_la, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Music_View_img_la, &_ring_alpha_24x24);
    lv_img_set_pivot(ui->Music_View_img_la, 50,50);
    lv_img_set_angle(ui->Music_View_img_la, 0);
    lv_obj_set_pos(ui->Music_View_img_la, 6, 201);
    lv_obj_set_size(ui->Music_View_img_la, 24, 24);

    //Write style for Music_View_img_la, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Music_View_img_la, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Music_View_img_la, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_img_la, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Music_View_img_la, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Music_View_slider_voice
    ui->Music_View_slider_voice = lv_slider_create(ui->Music_View);
    lv_slider_set_range(ui->Music_View_slider_voice, 0, 100);
    lv_slider_set_mode(ui->Music_View_slider_voice, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->Music_View_slider_voice, 50, LV_ANIM_OFF);
    lv_obj_set_pos(ui->Music_View_slider_voice, 12, 32);
    lv_obj_set_size(ui->Music_View_slider_voice, 16, 160);
    lv_obj_add_flag(ui->Music_View_slider_voice, LV_OBJ_FLAG_HIDDEN);

    //Write style for Music_View_slider_voice, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Music_View_slider_voice, 248, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Music_View_slider_voice, lv_color_hex(0x46494c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Music_View_slider_voice, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_slider_voice, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->Music_View_slider_voice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Music_View_slider_voice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Music_View_slider_voice, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Music_View_slider_voice, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Music_View_slider_voice, lv_color_hex(0xdcdcdc), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Music_View_slider_voice, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_slider_voice, 8, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for Music_View_slider_voice, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Music_View_slider_voice, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_slider_voice, 8, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes Music_View_img_sop
    ui->Music_View_img_sop = lv_img_create(ui->Music_View);
    lv_obj_add_flag(ui->Music_View_img_sop, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->Music_View_img_sop, &_op_alpha_48x48);
    lv_img_set_pivot(ui->Music_View_img_sop, 50,50);
    lv_img_set_angle(ui->Music_View_img_sop, 0);
    lv_obj_set_pos(ui->Music_View_img_sop, 99, 228);
    lv_obj_set_size(ui->Music_View_img_sop, 48, 48);

    //Write style for Music_View_img_sop, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->Music_View_img_sop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->Music_View_img_sop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Music_View_img_sop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->Music_View_img_sop, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Music_View.


    //Update current screen layout.
    lv_obj_update_layout(ui->Music_View);

    //Init events for screen.
    events_init_Music_View(ui);
}
