/**
 * This example shows how to use a built-in LED with low energy consumption
 *
 * used features:
 * - blink built-in LED
 * - Deep-Sleep mode
 *
 * see https://docs.arduino.cc/built-in-examples/basics/Blink
 */
#include <Arduino.h>

#define uS_TO_S_FACTOR 1000000

void setup()
{
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.println("switch LED on");
  digitalWrite(LED_BUILTIN, LOW); // depend on LED circuit, can also be HIGH
  delay(200);

  Serial.println("switch LED off");
  digitalWrite(LED_BUILTIN, HIGH);
  esp_sleep_enable_timer_wakeup(2 * uS_TO_S_FACTOR); // 2s
  esp_deep_sleep_start();
}

void loop()
{
  // never reach here
}