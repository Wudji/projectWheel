/*按键函数的应用层，也就是直接在主代码中使用的函数*/

#ifndef _APP_KEY_TASK_H_
#define _APP_KEY_TASK_H_

#include "ti_msp_dl_config.h"
#include "mid_button.h"

void set_app_key_current_mode(char mode);
char get_app_key_current_mode(void);

void btn_up_cb(flex_button_t *btn);
void btn_left_cb(flex_button_t *btn);
void btn_right_cb(flex_button_t *btn);
void btn_down_cb(flex_button_t *btn);
extern uint8_t key1_num;
extern uint8_t key2_num;
extern uint8_t key3_num;
extern uint8_t key4_num;
#endif