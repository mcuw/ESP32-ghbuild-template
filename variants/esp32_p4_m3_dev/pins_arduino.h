// ref: .platformio/packages/framework-arduinoespressif32/variants/esp32p4/pins_arduino.h
#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define ESP32_P4_M3_DEV

// ESP32-C6 mini, SDIO
static const uint8_t C6_CLK = 18; // CHECKED
static const uint8_t C6_CMD = 19; // CHECKED
static const uint8_t C6_D0 = 14; // CHECKED
static const uint8_t C6_D1 = 15; // CHECKED
static const uint8_t C6_D2 = 16; // CHECKED
static const uint8_t C6_D3 = 17; // CHECKED
static const uint8_t C6_RESET = 54; // CHECKED
static const uint8_t C6_IO2 = 6; // pin 10

// Expand IO
static const uint8_t C6_RX = 20; // C6_U0RXD, pin 16, Expand IO 20
static const uint8_t C6_TX = 21; // C6_U0TXD,pin 17, Expand IO 22
static const uint8_t C6_IO9 = 9; // C6_IO9, pin 18, Expand IO 24
// static const uint8_t C6_CHIP_PU = ; // CHIP_PU, Expand IO 26
static const uint8_t SDA = 7; // CHECKED, Expand IO 23
static const uint8_t SCL = 8; // CHECKED, Expand IO 25

// Ethernet (IP101 PHY, CLK_EXT_IN mode)
static const uint8_t ETH_MDC = 31; // CHECKED
static const uint8_t ETH_MDIO = 52; // CHECKED
static const uint8_t ETH_POWER = 51; // CHECKED
static const uint8_t ETH_CLK = 50; // CHECKED

static const uint8_t A0 = 16;
static const uint8_t A1 = 17;
static const uint8_t A2 = 18;
static const uint8_t A3 = 19;
static const uint8_t A4 = 20;
static const uint8_t A5 = 21;
static const uint8_t A6 = 22;
static const uint8_t A7 = 23;
static const uint8_t A8 = 49;
static const uint8_t A9 = 50;
static const uint8_t A10 = 51;
static const uint8_t A11 = 52;
static const uint8_t A12 = 53;
static const uint8_t A13 = 54;

static const uint8_t T0 = 2;
static const uint8_t T1 = 3;
static const uint8_t T2 = 4;
static const uint8_t T3 = 5;
static const uint8_t T4 = 6;
static const uint8_t T5 = 7;
static const uint8_t T6 = 8;
static const uint8_t T7 = 9;
static const uint8_t T8 = 10;
static const uint8_t T9 = 11;
static const uint8_t T10 = 12;
static const uint8_t T11 = 13;
static const uint8_t T12 = 14;
static const uint8_t T13 = 15;

// ES8311 mono audio codec
static const uint8_t ES8311_I2C_SDA = SDA; // CHECKED
static const uint8_t ES8311_I2C_SCL = SCL; // CHECKED
static const uint8_t ES8311_PA_CTRL = 11; // CHECKED
static const uint8_t ES8311_ADDRESS = 0x18; // CHECKED

// SPI
// Use GPIOs 36 or lower on the P4 DevKit to avoid LDO power issues with high numbered GPIOs.
static const uint8_t SCK = 36;
static const uint8_t MISO = 33;
static const uint8_t MOSI = 32;
static const uint8_t SS = 26;

// SD card
static const uint8_t SD_D0 = 39; // pin 59, CHECKED
static const uint8_t SD_D1 = 40; // pin 60, CHECKED
static const uint8_t SD_D2 = 41; // pin 61, CHECKED
static const uint8_t SD_D3 = 42; // pin 62, CHECKED
static const uint8_t SD_CMD = 44; // pin 64, CHECKED
static const uint8_t SD_CLK = 43; // pin 63, CHECKED

// ES7210 I2S audio
static const uint8_t I2S_MCK_IO = 13; // I2S_MCLK
static const uint8_t I2S_BCK_IO = 12; // I2S_SCLK
static const uint8_t I2S_DI_IO = 48; // ES7210_SDOUT, pin 68
static const uint8_t I2S_WS_IO = 10; // I2S_LRCK
static const uint8_t I2S_DO_IO = 9; // I2S_DSDIN

static const uint8_t TX = 37; // CHECKED, pin 56
static const uint8_t RX = 38; // CHECKED, pin 57
static const uint8_t TX1 = 26; // pin 45
static const uint8_t RX1 = 27; // pin 46

static const uint8_t CHIP_PU = 0;
static const uint8_t BOOT_MODE = 35; // pin 54

static const uint8_t TOUCH = 21; // pin 22
static const uint8_t TOUCH_RESET = 22; // pin 23

static const uint8_t LCD_PWM = 23; // pin 24

//SDMMC
#define BOARD_HAS_SDMMC
static const uint8_t BOARD_SDMMC_SLOT = 0;
static const uint8_t BOARD_SDMMC_POWER_CHANNEL = 4;
static const uint8_t BOARD_SDMMC_POWER_PIN = 45;
#define BOARD_SDMMC_POWER_ON_LEVEL  LOW


// TODO: assign pins for DSI interface
// static const uint8_t DSI_DATA1_P = ; // pin 26
// static const uint8_t DSI_DATA1_N = ; // pin 27
// static const uint8_t DSI_CLK_N = ; // pin 28
// static const uint8_t DSI_CLK_P = ; // pin 29
// static const uint8_t DSI_DATA0_P = ; // pin 30
// static const uint8_t DSI_DATA0_N = ; // pin 31

// TODO: assign pins for CSI interface
// static const uint8_t CSI_DATA1_P = ; // pin 38
// static const uint8_t CSI_DATA1_N = ; // pin 37
// static const uint8_t CSI_CLK_N = ; // pin 36
// static const uint8_t CSI_CLK_P = ; // pin 35
// static const uint8_t CSI_DATA0_P = ; // pin 34


#endif /* Pins_Arduino_h */

