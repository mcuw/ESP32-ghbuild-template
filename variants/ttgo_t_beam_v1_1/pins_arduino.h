// see https://github.com/Xinyuan-LilyGO/LilyGo-LoRa-Series/blob/master/examples/TBeamFactory/utilities.h
#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define SS 18
#define MOSI 27
#define MISO 19
#define SCK 5

// SPI LoRa Radio
#define LORA_SCK  5           // GPIO5  - SX1262 SCK
#define LORA_MISO MISO        // GPIO19 - SX1262 MISO
#define LORA_MOSI MOSI        // GPIO27 - SX1262 MOSI
#define LORA_CS   SS          // GPIO18 - SX1262 CS
#define LORA_RST  23          // GPIO23 - SX1262 RST
#define LORA_IO1  33          // GPIO33 - SX1262 IO1 -> IRQ wired on pcb AND connected to header pin LORA1
#define LORA_IO2  32          // GPIO32 - SX1262 IO2 -> additional IRQ wired on pcb AND connected to header pin LORA2
#define LORA_IRQ  LORA_IO1    // alias

#define TX 1
#define RX 3

// GPS ublox GPS NEO-6M-0-001
#define GPS_BAUD_RATE 9600
#define GPS_RX_PIN 34
#define GPS_TX_PIN 12

#define BUTTON_PIN 38
#define BUTTON_PIN_MASK GPIO_SEL_38
#define BUTTON_ACTIVEHIGH 0
#define BUTTON_PULLUP 1

#define SDA 21
#define SCL 22

#define PMU_IRQ 35 // Battery ADC
#define PMU_WIRE_PORT Wire

// #define HAS_DISPLAY //Optional, bring your own board, no OLED !!
// #define DISPLAY_MODEL_SSD_LIB       SSD1306Wire
// #define DISPLAY_MODEL               U8G2_SSD1306_128X64_NONAME_F_HW_I2C

// static const uint8_t A0 = 36;
// static const uint8_t A3 = 39;
// static const uint8_t A4 = 32;
// static const uint8_t A5 = 33;
// static const uint8_t A6 = 34;
// static const uint8_t A7 = 35;

// static const uint8_t A10 = 4;
// static const uint8_t A11 = 0;
// static const uint8_t A12 = 2;
// static const uint8_t A14 = 13;
// static const uint8_t A16 = 14;
// static const uint8_t A18 = 25;

// static const uint8_t T0 = 4;
// static const uint8_t T1 = 0;
// static const uint8_t T2 = 2;
// static const uint8_t T4 = 13;
// static const uint8_t T6 = 14;
// static const uint8_t T8 = 33;
// static const uint8_t T9 = 32;

// static const uint8_t DAC1 = 25;

#endif /* Pins_Arduino_h */
