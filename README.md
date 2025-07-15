
# README

Counter application for Lilygo T-Display-S3.

The Lilygo T-Display-S3 consists of an ESP32-S3R8 microcontroller and a ST7789 LCD display.

## Functionality

The application is not yet functional. The goals of the project are as follows:
1. Get an output to the LCD screen.
2. Setting up a button to increment a counter.
3. Making the button a hardware interrupt to increment the counter.
4. Set up the second button to decrement the button in a similar way.
5. Set up a watchdog timer to put the device to sleep after a period of inactivity.
6. Have the device wake when a hardware interrupt is triggered.

## Platform

The application was developed with PlatformIO using Espressif's IoT Development framework.