/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *Clock_View;
	bool Clock_View_del;
	lv_obj_t *Clock_View_img_1;
	lv_obj_t *Clock_View_img_2;
	lv_obj_t *Clock_View_img_3;
	lv_obj_t *Clock_View_img_4;
	lv_obj_t *Digit_View;
	bool Digit_View_del;
	lv_obj_t *Digit_View_label_hour;
	lv_obj_t *Digit_View_label_min;
	lv_obj_t *Digit_View_label_dat;
	lv_obj_t *Digit_View_label_xinji;
	lv_obj_t *Weather_View;
	bool Weather_View_del;
	lv_obj_t *Weather_View_label_TMP;
	lv_obj_t *Weather_View_label_city;
	lv_obj_t *Weather_View_label_C;
	lv_obj_t *Weather_View_label_tmpHL;
	lv_obj_t *Weather_View_label_text;
	lv_obj_t *Weather_View_label_date1;
	lv_obj_t *Weather_View_label_date2;
	lv_obj_t *Weather_View_label_date3;
	lv_obj_t *Weather_View_img_T1;
	lv_obj_t *Weather_View_img_t2;
	lv_obj_t *Weather_View_img_t1;
	lv_obj_t *Weather_View_img_t3;
	lv_obj_t *Weather_View_label_tmp1L;
	lv_obj_t *Weather_View_label_tmp2L;
	lv_obj_t *Weather_View_label_tmp3L;
	lv_obj_t *Weather_View_label_date1_1;
	lv_obj_t *Weather_View_label_date2_1;
	lv_obj_t *Weather_View_label_date3_1;
	lv_obj_t *Weather_View_label_HMD;
	lv_obj_t *Weather_View_label_humidity;
	lv_obj_t *Weather_View_label_RAD;
	lv_obj_t *Weather_View_label_rainfall;
	lv_obj_t *Weather_View_label_SPD;
	lv_obj_t *Weather_View_label_DIR;
	lv_obj_t *Weather_View_label_wind_direction;
	lv_obj_t *Weather_View_label_wind_speed;
	lv_obj_t *Music_View;
	bool Music_View_del;
	lv_obj_t *Music_View_img_back;
	lv_obj_t *Music_View_img_play;
	lv_obj_t *Music_View_img_next;
	lv_obj_t *Music_View_img_music;
	lv_obj_t *Music_View_cont_icon_word;
	lv_obj_t *Music_View_img_icon;
	lv_obj_t *Music_View_label_word;
	lv_obj_t *Music_View_label_songname;
	lv_obj_t *Music_View_slider_songprocess;
	lv_obj_t *Music_View_img_la;
	lv_obj_t *Music_View_slider_voice;
	lv_obj_t *Music_View_img_sop;
	lv_obj_t *StopWatch_View;
	bool StopWatch_View_del;
	lv_obj_t *StopWatch_View_label_msecond;
	lv_obj_t *StopWatch_View_label_second;
	lv_obj_t *StopWatch_View_label_minutte;
	lv_obj_t *StopWatch_View_label_h2;
	lv_obj_t *StopWatch_View_label_h1;
	lv_obj_t *StopWatch_View_list_times;
	lv_obj_t *StopWatch_View_list_times_item0;
	lv_obj_t *StopWatch_View_list_times_item1;
	lv_obj_t *StopWatch_View_list_times_item2;
	lv_obj_t *StopWatch_View_img_stop;
	lv_obj_t *StopWatch_View_img_continue;
	lv_obj_t *StopWatch_View_img_restart;
	lv_obj_t *StopWatch_View_img_flag;
	lv_obj_t *Caculator_View;
	bool Caculator_View_del;
	lv_obj_t *Caculator_View_btnm_1;
	lv_obj_t *Caculator_View_ta_1;
	lv_obj_t *Caculator_View_ta_history;
	lv_obj_t *Wifi_View;
	bool Wifi_View_del;
	lv_obj_t *Wifi_View_list_wifi;
	lv_obj_t *Wifi_View_list_wifi_item0;
	lv_obj_t *Wifi_View_list_wifi_item1;
	lv_obj_t *Wifi_View_list_wifi_item2;
	lv_obj_t *Wifi_View_list_wifi_item3;
	lv_obj_t *Wifi_View_list_wifi_item4;
	lv_obj_t *Wifi_View_label_wlan;
	lv_obj_t *Wifi_View_label_connected;
	lv_obj_t *Wifi_View_img_open;
	lv_obj_t *Wifi_View_img_close;
	lv_obj_t *Wifi_View_img_wifion;
	lv_obj_t *Settings_View;
	bool Settings_View_del;
	lv_obj_t *Settings_View_list_1;
	lv_obj_t *Settings_View_list_1_item0;
	lv_obj_t *Settings_View_list_1_item1;
	lv_obj_t *Settings_View_list_1_item2;
	lv_obj_t *Settings_View_list_1_item3;
	lv_obj_t *Settings_View_list_1_item4;
	lv_obj_t *Settings_View_list_1_item5;
	lv_obj_t *Settings_View_list_1_item6;
	lv_obj_t *Game_View;
	bool Game_View_del;
	lv_obj_t *Game_View_img_back_leg;
	lv_obj_t *Game_View_line_ground;
	lv_obj_t *Game_View_img_dino_front_leg;
	lv_obj_t *Game_View_img_dino_jump;
	lv_obj_t *Game_View_img_dino_crashed;
	lv_obj_t *Game_View_img_bigtree;
	lv_obj_t *Game_View_img_smalltree;
	lv_obj_t *Game_View_img_bird0;
	lv_obj_t *Game_View_img_bird1;
	lv_obj_t *Game_View_img_restart;
	lv_obj_t *Game_View_label_scores;
	lv_obj_t *Game_View_label_mostscores;
	lv_obj_t *Game_View_label_game;
	lv_obj_t *Game_View_label_newscores;
	lv_obj_t *Panel_View;
	bool Panel_View_del;
	lv_obj_t *Panel_View_tabview_1;
	lv_obj_t *Panel_View_tabview_1_tab_1;
	lv_obj_t *Panel_View_tabview_1_tab_2;
	lv_obj_t *Panel_View_tabview_1_tab_3;
	lv_obj_t *Panel_View_img_1;
	lv_obj_t *Panel_View_img_2;
	lv_obj_t *Panel_View_img_3;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, int32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);

void init_keyboard(lv_ui *ui);

extern lv_ui guider_ui;


void setup_scr_Clock_View(lv_ui *ui);
void setup_scr_Digit_View(lv_ui *ui);
void setup_scr_Weather_View(lv_ui *ui);
void setup_scr_Music_View(lv_ui *ui);
void setup_scr_StopWatch_View(lv_ui *ui);
void setup_scr_Caculator_View(lv_ui *ui);
void setup_scr_Wifi_View(lv_ui *ui);
void setup_scr_Settings_View(lv_ui *ui);
void setup_scr_Game_View(lv_ui *ui);
void setup_scr_Panel_View(lv_ui *ui);
LV_IMG_DECLARE(_3_alpha_240x280);
LV_IMG_DECLARE(_4_alpha_27x102);
LV_IMG_DECLARE(_5_alpha_27x142);
LV_IMG_DECLARE(_6_alpha_27x126);
LV_IMG_DECLARE(_d_alpha_38x38);
LV_IMG_DECLARE(_sun_alpha_38x38);
LV_IMG_DECLARE(_d_alpha_38x38);
LV_IMG_DECLARE(_rain_alpha_38x38);
LV_IMG_DECLARE(_back_alpha_48x48);
LV_IMG_DECLARE(_suspend_alpha_48x48);
LV_IMG_DECLARE(_next_alpha_48x48);
LV_IMG_DECLARE(_music_alpha_16x16);
LV_IMG_DECLARE(_pic_alpha_141x152);
LV_IMG_DECLARE(_ring_alpha_24x24);
LV_IMG_DECLARE(_op_alpha_48x48);
LV_IMG_DECLARE(_stop_alpha_48x48);
LV_IMG_DECLARE(_continue_alpha_48x48);
LV_IMG_DECLARE(_restart_alpha_48x48);
LV_IMG_DECLARE(_flag_alpha_48x48);
LV_IMG_DECLARE(_open_alpha_32x32);
LV_IMG_DECLARE(_close_alpha_32x32);
LV_IMG_DECLARE(_WiFi_alpha_25x25);
LV_IMG_DECLARE(_WiFi_alpha_48x48);
LV_IMG_DECLARE(_booth_alpha_48x48);
LV_IMG_DECLARE(_brightness_alpha_48x48);
LV_IMG_DECLARE(_game_alpha_48x48);
LV_IMG_DECLARE(_caculator_alpha_48x48);
LV_IMG_DECLARE(_battery_alpha_48x48);
LV_IMG_DECLARE(_stopwatch_alpha_48x48);
LV_IMG_DECLARE(_dino_back_leg_alpha_58x62);
LV_IMG_DECLARE(_dino_front_leg_alpha_58x62);
LV_IMG_DECLARE(_dino_jump_alpha_58x62);
LV_IMG_DECLARE(_dino_crashed_alpha_58x62);
LV_IMG_DECLARE(_tree_big_alpha_33x62);
LV_IMG_DECLARE(_tree_small_alpha_27x57);
LV_IMG_DECLARE(_bird0_alpha_68x41);
LV_IMG_DECLARE(_bird1_alpha_70x50);
LV_IMG_DECLARE(_restart_alpha_48x48);
LV_IMG_DECLARE(_panel1_alpha_231x221);
LV_IMG_DECLARE(_panel2_alpha_231x221);
LV_IMG_DECLARE(_panel_alpha_228x216);

LV_FONT_DECLARE(lv_font_montserratMedium_100)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_montserratMedium_20)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_20)
LV_FONT_DECLARE(lv_font_montserratMedium_51)
LV_FONT_DECLARE(lv_font_montserratMedium_18)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_16)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_14)
LV_FONT_DECLARE(lv_font_montserratMedium_40)
LV_FONT_DECLARE(lv_font_montserratMedium_28)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_12)
LV_FONT_DECLARE(lv_font_montserratMedium_30)


#ifdef __cplusplus
}
#endif
#endif
