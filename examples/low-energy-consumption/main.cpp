/**
 * This example shows how to run with low energy consumption
 *
 * used features:
 * - Deep-Sleep mode
 * - Touch sensor as wake up trigger (T0 = GPIO4)
 */
#include <Arduino.h>

#define THRESHOLD 20 // you can modify this value

void setup()
{
  Serial.begin(115200);
  // while (!Serial)
  //   ;

  // Setup sleep wakeup on Touch Pad 0 (GPIO4)
  touchSleepWakeUpEnable(T0, THRESHOLD);

  Serial.println("Going to sleep now");
  Serial.flush();
  esp_deep_sleep_start();
}

void loop()
{
  // never reach here
}