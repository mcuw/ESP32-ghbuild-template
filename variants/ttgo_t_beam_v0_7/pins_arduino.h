#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define T_BEAM_V0_7

// SPI
static const uint8_t SS = 18;
static const uint8_t MOSI = 27;
static const uint8_t MISO = 19;
static const uint8_t SCK = 5;

// LoRa Radio
static const uint8_t LORA_SCK = SCK;      // GPIO5  - SX1276 SCK
static const uint8_t LORA_MISO = MISO;    // GPIO19 - SX1276 MISO
static const uint8_t LORA_MOSI = MOSI;    // GPIO27 - SX1276 MOSI
static const uint8_t LORA_CS = SS;        // GPIO18 - SX1276 CS/ NSS
static const uint8_t LORA_RST = 23;       // GPIO23 - SX1276 RST
static const uint8_t LORA_IRQ = 26;       // GPIO26 - SX1276 IO0
static const uint8_t LORA_IO0 = LORA_IRQ; // alias
static const uint8_t LORA_IO1 = 33;       // GPIO33 - SX1276 IO1 -> wired on pcb AND connected to header pin LORA1
static const uint8_t LORA_IO2 = 32;       // GPIO32 - SX1276 IO2 -> wired on pcb AND connected to header pin LORA2

// ublox GPS NEO-6M-0-001
static const uint16_t GPS_BAUD_RATE = 9600;
static const uint8_t GPS_RX_PIN = 15;
static const uint8_t GPS_TX_PIN = 12;

static const uint8_t BUTTON_PIN = 39;
static const uint8_t BUTTON_ACTIVEHIGH = 0;
static const uint8_t BUTTON_PULLUP = 1;

// built-in LED
static const uint8_t LED_BUILTIN = 14;
static const uint8_t BUILTIN_LED = LED_BUILTIN; // backward compatibility

static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

static const uint8_t TX = 1;
static const uint8_t RX = 3;

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
