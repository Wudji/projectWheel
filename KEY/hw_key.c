#include "hw_key.h"

KEY_STATUS key_scan(void)
{
    KEY_STATUS states;
    // 读取每个按键的状态
    states.up = DL_GPIO_readPins(KEY_PORT, KEY_K0_PIN) ? 1 : 0;
    states.left = DL_GPIO_readPins(KEY_PORT, KEY_K1_PIN) ? 1 : 0;
    states.right = DL_GPIO_readPins(KEY_PORT, KEY_K2_PIN) ? 1 : 0;
    states.down = DL_GPIO_readPins(KEY_PORT, KEY_K3_PIN) ? 1 : 0;

    return states;
}