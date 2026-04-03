#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define LORA32_V1_6_1

// I2C OLED Display works with SSD1306 driver
#define OLED_SDA 21
#define OLED_SCL 22

// SPI LoRa Radio
#define LORA_SCK  5   // GPIO5 - SX1276 SCK
#define LORA_MISO 19  // GPIO19 - SX1276 MISO
#define LORA_MOSI 27  // GPIO27 - SX1276 MOSI
#define LORA_CS   18  // GPIO18 - SX1276 CS
#define LORA_RST  23  // GPIO23 - SX1276 RST
#define LORA_IRQ  26  // GPIO26 - SX1276 IRQ (interrupt request)
#define LORA_IO2  32  // GPIO32 - SX1276 IO2 (optional, used for some modules)

// SD card
#define SD_SCK  14
#define SD_MISO 2
#define SD_MOSI 15
#define SD_CS   13

#define LED_BUILTIN 25
#define BUILTIN_LED LED_BUILTIN  // alias backward compatibility

#define BUTTON_PIN 0

static const uint8_t TX = 1;
static const uint8_t RX = 3;

static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

static const uint8_t SS = LORA_CS;
static const uint8_t MOSI = LORA_MOSI;
static const uint8_t MISO = LORA_MISO;
static const uint8_t SCK = LORA_SCK;

static const uint8_t A0 = 36;
static const uint8_t A1 = 37;
static const uint8_t A2 = 38;
static const uint8_t A3 = 39;
static const uint8_t A4 = 32;
static const uint8_t A5 = 33;
static const uint8_t A6 = 34;
static const uint8_t A7 = 35;
static const uint8_t A10 = 4;
static const uint8_t A11 = 0;
static const uint8_t A12 = 2;
static const uint8_t A13 = 15;
static const uint8_t A14 = 13;
static const uint8_t A15 = 12;
static const uint8_t A16 = 14;
static const uint8_t A17 = 27;
static const uint8_t A18 = 25;
static const uint8_t A19 = 26;

static const uint8_t T0 = 4;
static const uint8_t T1 = 0;
static const uint8_t T2 = 2;
static const uint8_t T3 = 15;
static const uint8_t T4 = 13;
static const uint8_t T5 = 12;
static const uint8_t T6 = 14;
static const uint8_t T7 = 27;
static const uint8_t T8 = 33;
static const uint8_t T9 = 32;

static const uint8_t DAC1 = 25;
static const uint8_t DAC2 = 26;

#endif /* Pins_Arduino_h */
