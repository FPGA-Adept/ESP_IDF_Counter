/*
Author: Kristo Siiskonen (FPGA-Adept)
Device: Lilygo T-Display-S3 (ESP32-S3R8 with an ST7789 LCD display)
    Declarations needed for the main applications
*/

// For uint8_t
#include <stdint.h>

// ESP-IDF lcd and SPI api
#include "hal/lcd_types.h"
#include "esp_lcd_io_spi.h"
#include "hal/spi_types.h"
#include "esp_lcd_panel_commands.h"
#include "esp_lcd_panel_interface.h"
#include "esp_lcd_panel_vendor.h"
#include "esp_lcd_panel_dev.h"
#include "esp_lcd_panel_ops.h"
#include "esp_lcd_types.h"
#include "esp_lcd_panel_io.h"

// For backlight GPIO setup
#include <driver/gpio.h>

// GPIO pins
#define LeftButton 0 // AKA BootButton
#define LCDRES 5
#define LCDChipSelect 6
#define LCDDataCommand 7
#define LCDWrite 8
#define LCDRead 9
#define SPI_CS 10
#define SPI_D 11
#define SPI_CLK 12
#define SPI_Q 13
#define RightButton 14
#define LCDPower 15
#define LCDBackLight 38
#define LCDMOSI 39 // AKA LCDDataBit0
#define LCDMISO 40 // AKA LCDDataBit1
#define LCDDataBit2 41
#define LCDDataBit3 42
#define LCDDataBit4 45
#define LCDDataBit5 46
#define LCDDataBit6 47
#define LCDDataBit7 48

// LCD properties
#define LCDWidth 170
#define LCDHeight 320

#define LCDPixelClk 30*LCDWidth*LCDHeight
#define LCDCmdBits 8
#define LCDParamBits 8

#define NotUsed -1