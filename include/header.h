/*
Author: Kristo Siiskonen (FPGA-Adept)
Device: Lilygo T-Display-S3 (ESP32-S3R8 with an ST7789 LCD display)
    Declarations needed for the main applications
*/

// ESP-IDF lcd api
#include "hal/lcd_types.h"

// SPI bus for lcd
#include "esp_lcd_io_spi.h"
//#include "hal/spi_types.h"

// GPIO pins
#define LeftButton 0 // AKA BootButton
#define LCDReset 5
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
#define LCDBlackLight 38
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

// --------------- UNUSED ---------------
// pthread and mutex
//#include "pthread.h"
//static pthread_mutex_t CounterMutex;