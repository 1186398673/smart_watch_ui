/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/


#ifndef EVENTS_INIT_H_
#define EVENTS_INIT_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

void events_init(lv_ui *ui);

void events_init_Clock_View(lv_ui *ui);
void events_init_Digit_View(lv_ui *ui);
void events_init_Weather_View(lv_ui *ui);
void events_init_Music_View(lv_ui *ui);
void events_init_StopWatch_View(lv_ui *ui);
void events_init_Caculator_View(lv_ui *ui);
void events_init_Wifi_View(lv_ui *ui);
void events_init_Settings_View(lv_ui *ui);
void events_init_Game_View(lv_ui *ui);
void events_init_Panel_View(lv_ui *ui);
void events_init_Digit_View2(lv_ui *ui);
void events_init_Digit_View3(lv_ui *ui);
void events_init_Panel_View2(lv_ui *ui);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
