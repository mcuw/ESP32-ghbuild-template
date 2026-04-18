// see https://github.com/Xinyuan-LilyGO/LilyGo-LoRa-Series/blob/master/examples/TBeamFactory/utilities.h
#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define T_BEAM_V1_1

// SPI
static const uint8_t SS = 18;
static const uint8_t MOSI = 27;
static const uint8_t MISO = 19;
static const uint8_t SCK = 5;

// LoRa Radio
static const uint8_t LORA_SCK = SCK;      // GPIO5  - SX1262 SCK
static const uint8_t LORA_MISO = MISO;    // GPIO19 - SX1262 MISO
static const uint8_t LORA_MOSI = MOSI;    // GPIO27 - SX1262 MOSI
static const uint8_t LORA_CS = SS;        // GPIO18 - SX1262 CS
static const uint8_t LORA_RST = 23;       // GPIO23 - SX1262 RST
static const uint8_t LORA_IO1 = 33;       // GPIO33 - SX1262 IO1 -> IRQ wired on pcb AND connected to header pin LORA1
static const uint8_t LORA_IO2 = 32;       // GPIO32 - SX1262 IO2 -> additional IRQ wired on pcb AND connected to header pin LORA2
static const uint8_t LORA_IRQ = LORA_IO1; // alias

static const uint8_t TX = 1;
static const uint8_t RX = 3;

// GPS ublox GPS NEO-6M-0-001
static const uint8_t GPS_BAUD_RATE = 9600;
static const uint8_t GPS_RX_PIN = 34;
static const uint8_t GPS_TX_PIN = 12;

static const uint8_t BUTTON_PIN = 38;
#define BUTTON_PIN_MASK GPIO_SEL_38
static const uint8_t BUTTON_ACTIVEHIGH = 0;
static const uint8_t BUTTON_PULLUP = 1;

static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

static const uint8_t PMU_IRQ = 35; // Battery ADC
#define PMU_WIRE_PORT Wire

// #define HAS_DISPLAY // Optional, bring your own board, no OLED !!
// #define DISPLAY_MODEL_SSD_LIB =       SSD1306Wire
// #define DISPLAY_MODEL =               U8G2_SSD1306_128X64_NONAME_F_HW_I2C

static const uint8_t A0 = 36;
static const uint8_t A3 = 39;
static const uint8_t A4 = 32;
static const uint8_t A5 = 33;
static const uint8_t A6 = 34;
static const uint8_t A7 = 35;

static const uint8_t A10 = 4;
static const uint8_t A11 = 0;
static const uint8_t A12 = 2;
static const uint8_t A14 = 13;
static const uint8_t A16 = 14;
static const uint8_t A18 = 25;

static const uint8_t T0 = 4;
static const uint8_t T1 = 0;
static const uint8_t T2 = 2;
static const uint8_t T4 = 13;
static const uint8_t T6 = 14;
static const uint8_t T8 = 33;
static const uint8_t T9 = 32;

static const uint8_t DAC1 = 25;

#endif /* Pins_Arduino_h */
