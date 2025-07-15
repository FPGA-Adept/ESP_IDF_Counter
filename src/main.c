/*
Author: Kristo Siiskonen (FPGA-Adept)
Device: Lilygo T-Display-S3 (ESP32-S3R8 with an ST7789 LCD display)
    This application will eventually create a counter, but as of now it is still in development.
*/

#include "header.h"


void app_main() {

// SPI bus
spi_bus_config_t buscfg = {
    .sclk_io_num = SPI_CLK,
    .mosi_io_num = LCDMOSI,
    .miso_io_num = LCDMISO,
    .quadwp_io_num = -1,
    .quadhd_io_num = -1,
    .max_transfer_sz = LCDHeight * 80 * sizeof(uint16_t), // transfer 80 lines of pixels (assume pixel is RGB565) at most in one SPI transaction
};
ESP_ERROR_CHECK(spi_bus_initialize(SPI2_HOST, &buscfg, SPI_DMA_CH_AUTO)); // Enable the DMA feature

} // main end