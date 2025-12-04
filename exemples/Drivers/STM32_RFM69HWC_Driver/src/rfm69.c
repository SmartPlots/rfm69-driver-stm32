#include "rfm69.h"

void RFM69_Init() {
    /*Reset le module RFM69*/
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET);
    HAL_Delay(1);
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET);
    HAL_Delay(5);
    /*module RFM69 reinitialiser*/

    
}
