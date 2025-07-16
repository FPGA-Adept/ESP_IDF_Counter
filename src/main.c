/*
Author: Kristo Siiskonen (FPGA-Adept)
Device: Lilygo T-Display-S3 (ESP32-S3R8 with an ST7789 LCD display)
    This application will eventually create a counter, but as of now it is still in development.
*/

#include <header.h>


void app_main() {

    // SPI bus
    spi_bus_config_t SPIBus = {
        .sclk_io_num = SPI_CLK,
        .mosi_io_num = LCDMOSI,
        .miso_io_num = LCDMISO,
        .quadwp_io_num = NotUsed,
        .quadhd_io_num = NotUsed,
        .max_transfer_sz = LCDWidth * 80 * sizeof(uint16_t), // transfer 80 lines of pixels (assume pixel is RGB565) at most in one SPI transaction
    };
    // Enable the DMA feature
    ESP_ERROR_CHECK(spi_bus_initialize(SPI2_HOST, &SPIBus, SPI_DMA_CH_AUTO));

    esp_lcd_panel_io_handle_t io_handle = NULL;
    esp_lcd_panel_io_spi_config_t io_config = {
        .dc_gpio_num = LCDDataCommand,
        .cs_gpio_num = SPI_CS,
        .pclk_hz = LCDPixelClk,
        .lcd_cmd_bits = LCDCmdBits,
        .lcd_param_bits = LCDParamBits,
        .spi_mode = 0,
        .trans_queue_depth = 10,
    };
    // Attach the LCD to the SPI bus
    ESP_ERROR_CHECK(esp_lcd_new_panel_io_spi((esp_lcd_spi_bus_handle_t)SPI2_HOST, &io_config, &io_handle));

    esp_lcd_panel_handle_t panel_handle = NULL;
    esp_lcd_panel_dev_config_t panel_config = {
        .reset_gpio_num = NotUsed,
        .rgb_ele_order = LCD_RGB_ELEMENT_ORDER_BGR,
        .bits_per_pixel = 16,
    };
    // Create LCD panel handle for ST7789, with the SPI IO device handle
    ESP_ERROR_CHECK(esp_lcd_new_panel_st7789(io_handle, &panel_config, &panel_handle));

} // main end