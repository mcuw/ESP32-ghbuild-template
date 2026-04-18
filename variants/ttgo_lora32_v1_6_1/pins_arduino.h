#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define LORA32_V1_6_1

// I2C OLED Display works with SSD1306 driver
static const uint8_t OLED_SDA = 21;
static const uint8_t OLED_SCL = 22;

static const uint8_t SS = 18;
static const uint8_t MOSI = 27;
static const uint8_t MISO = 19;
static const uint8_t SCK = 5;

// SPI LoRa Radio
static const uint8_t LORA_SCK = SCK;   // GPIO5 - SX1276 SCK
static const uint8_t LORA_MISO = MISO; // GPIO19 - SX1276 MISO
static const uint8_t LORA_MOSI = MOSI; // GPIO27 - SX1276 MOSI
static const uint8_t LORA_CS = SS;     // GPIO18 - SX1276 CS
static const uint8_t LORA_RST = 23;    // GPIO23 - SX1276 RST
static const uint8_t LORA_IRQ = 26;    // GPIO26 - SX1276 IRQ (interrupt request)
static const uint8_t LORA_IO2 = 32;    // GPIO32 - SX1276 IO2 (optional, used for some modules)

// SD card
static const uint8_t SD_SCK = 14;
static const uint8_t SD_MISO = 2;
static const uint8_t SD_MOSI = 15;
static const uint8_t SD_CS = 13;

static const uint8_t LED_BUILTIN = 25;
static const uint8_t BUILTIN_LED = LED_BUILTIN; // alias backward compatibility

static const uint8_t BUTTON_PIN = 0;

static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

static const uint8_t TX = 1;
static const uint8_t RX = 3;

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

static const uint8_t DAC1 = 26;
static const uint8_t DAC2 = 25;

#endif /* Pins_Arduino_h */
