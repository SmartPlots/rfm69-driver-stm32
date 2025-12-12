#include "rfm69hwc_conf.h"

static void RFM69_Select(void) {
	HAL_GPIO_WritePin(RFM69_CS_PORT, RFM69_CS_PIN, GPIO_PIN_RESET);
}

static void RFM69_Unselect(void) {
	HAL_GPIO_WritePin(RFM69_CS_PORT, RFM69_CS_PIN, GPIO_PIN_SET);
}


static void RFM69_Write(uint8_t addr, uint8_t val) {

}
