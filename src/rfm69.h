#ifndef _RFM69_H_
#define _RFM69_H_

#include "exemples\Drivers\STM32F4xx_HAL_Driver\Inc\stm32f4xx_hal.h" //Change selon la carte STM32 utilisé

#define STANDBY 0 //RFM69 en mode ecoute


/*Initialise le module RFM69HWC et la connection SPI avec le MCU STM32*/
void RFM69_Init();

/*Initialise la frequence de communication des modules RFM69*/
void RFM69_SetFrequency();

/*Envoi le tableau de data*/
void RFM69_sendPacket(uint8_t *data, uint8_t len);

/*Recupere les valeur recue ainsi que la taille du message*/
void RFM69_ReceivedPacket(uint8_t *buffer, uint8_t* len);

#endif