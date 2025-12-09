/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void Clock_View_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_GESTURE:
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
        switch(dir) {
        case LV_DIR_LEFT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Weather_View, guider_ui.Weather_View_del, &guider_ui.Clock_View_del, setup_scr_Weather_View, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 200, false, true);
            break;
        }
        case LV_DIR_RIGHT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Settings_View, guider_ui.Settings_View_del, &guider_ui.Clock_View_del, setup_scr_Settings_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        case LV_DIR_BOTTOM:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Panel_View, guider_ui.Panel_View_del, &guider_ui.Clock_View_del, setup_scr_Panel_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

void events_init_Clock_View (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Clock_View, Clock_View_event_handler, LV_EVENT_ALL, ui);
}

static void Digit_View_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_GESTURE:
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
        switch(dir) {
        case LV_DIR_LEFT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Weather_View, guider_ui.Weather_View_del, &guider_ui.Digit_View_del, setup_scr_Weather_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        case LV_DIR_RIGHT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Settings_View, guider_ui.Settings_View_del, &guider_ui.Digit_View_del, setup_scr_Settings_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        case LV_DIR_BOTTOM:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Panel_View, guider_ui.Panel_View_del, &guider_ui.Digit_View_del, setup_scr_Panel_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

void events_init_Digit_View (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Digit_View, Digit_View_event_handler, LV_EVENT_ALL, ui);
}

static void Weather_View_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_GESTURE:
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
        switch(dir) {
        case LV_DIR_LEFT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Music_View, guider_ui.Music_View_del, &guider_ui.Weather_View_del, setup_scr_Music_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        case LV_DIR_RIGHT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Clock_View, guider_ui.Clock_View_del, &guider_ui.Weather_View_del, setup_scr_Clock_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

void events_init_Weather_View (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Weather_View, Weather_View_event_handler, LV_EVENT_ALL, ui);
}

static void Music_View_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_GESTURE:
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
        switch(dir) {
        case LV_DIR_LEFT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Settings_View, guider_ui.Settings_View_del, &guider_ui.Music_View_del, setup_scr_Settings_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        case LV_DIR_RIGHT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Weather_View, guider_ui.Weather_View_del, &guider_ui.Music_View_del, setup_scr_Weather_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

static void Music_View_img_la_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_clear_flag(guider_ui.Music_View_slider_voice, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

void events_init_Music_View (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Music_View, Music_View_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Music_View_img_la, Music_View_img_la_event_handler, LV_EVENT_ALL, ui);
}

static void StopWatch_View_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_GESTURE:
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
        switch(dir) {
        case LV_DIR_RIGHT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Settings_View, guider_ui.Settings_View_del, &guider_ui.StopWatch_View_del, setup_scr_Settings_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

void events_init_StopWatch_View (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->StopWatch_View, StopWatch_View_event_handler, LV_EVENT_ALL, ui);
}

static void Caculator_View_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_GESTURE:
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
        switch(dir) {
        case LV_DIR_RIGHT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Settings_View, guider_ui.Settings_View_del, &guider_ui.Caculator_View_del, setup_scr_Settings_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

void events_init_Caculator_View (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Caculator_View, Caculator_View_event_handler, LV_EVENT_ALL, ui);
}

static void Wifi_View_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_GESTURE:
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
        switch(dir) {
        case LV_DIR_RIGHT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Settings_View, guider_ui.Settings_View_del, &guider_ui.Wifi_View_del, setup_scr_Settings_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

void events_init_Wifi_View (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Wifi_View, Wifi_View_event_handler, LV_EVENT_ALL, ui);
}

static void Settings_View_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_GESTURE:
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
        switch(dir) {
        case LV_DIR_LEFT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Clock_View, guider_ui.Clock_View_del, &guider_ui.Settings_View_del, setup_scr_Clock_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        case LV_DIR_RIGHT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Music_View, guider_ui.Music_View_del, &guider_ui.Settings_View_del, setup_scr_Music_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

static void Settings_View_list_1_item0_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Wifi_View, guider_ui.Wifi_View_del, &guider_ui.Settings_View_del, setup_scr_Wifi_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void Settings_View_list_1_item3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Game_View, guider_ui.Game_View_del, &guider_ui.Settings_View_del, setup_scr_Game_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void Settings_View_list_1_item4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Caculator_View, guider_ui.Caculator_View_del, &guider_ui.Settings_View_del, setup_scr_Caculator_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void Settings_View_list_1_item6_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.StopWatch_View, guider_ui.StopWatch_View_del, &guider_ui.Settings_View_del, setup_scr_StopWatch_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_Settings_View (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Settings_View, Settings_View_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Settings_View_list_1_item0, Settings_View_list_1_item0_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Settings_View_list_1_item3, Settings_View_list_1_item3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Settings_View_list_1_item4, Settings_View_list_1_item4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Settings_View_list_1_item6, Settings_View_list_1_item6_event_handler, LV_EVENT_ALL, ui);
}

static void Game_View_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_GESTURE:
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
        switch(dir) {
        case LV_DIR_RIGHT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.Settings_View, guider_ui.Settings_View_del, &guider_ui.Game_View_del, setup_scr_Settings_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

void events_init_Game_View (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Game_View, Game_View_event_handler, LV_EVENT_ALL, ui);
}

static void Panel_View_img_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Clock_View, guider_ui.Clock_View_del, &guider_ui.Panel_View_del, setup_scr_Clock_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void Panel_View_img_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Digit_View, guider_ui.Digit_View_del, &guider_ui.Panel_View_del, setup_scr_Digit_View, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_Panel_View (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Panel_View_img_1, Panel_View_img_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Panel_View_img_2, Panel_View_img_2_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
