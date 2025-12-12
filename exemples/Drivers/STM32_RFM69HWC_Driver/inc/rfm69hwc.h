#ifndef INC_RFM69HWC_H_
#define INC_RFM69HWC_H_

#include "stm32f4xx_hal_gpio.h"

#define RFM69_CS_PORT    GPIOA
#define RFM69_CS_PIN     GPIO_PIN_4
#define RFM69_RESET_PORT GPIOB
#define RFM69_RESET_PIN  GPIO_PIN_0


/*Envoie la donnée au module RFM69 via la liaison SPI*/
static void RFM69_Write(uint8_t addr, uint8_t val);
/*Lecture de la liaison SPI*/
static uint8_t RFM69_Read(uint8_t addr);

/*Selection du module*/
static void RFM69_Select(void);
/*Deselection du module*/
static void RFM69_Unselect(void);

#endif
