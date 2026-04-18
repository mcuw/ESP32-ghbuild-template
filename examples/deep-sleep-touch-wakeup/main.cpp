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

#ifdef ESP32C6
#error "This board can not use touch sleep wakeup because it does not have a touch sensor"
#else
  // if T0 is not available, you can use any other touch pin, e.g. T1 or T9, but make sure to change the pin number in the touchSleepWakeUpEnable() function below and also adjust the threshold value accordingly
  /// or use another wake up source, e.g. timer or GPIO, see esp_sleep.h for more details
  touchSleepWakeUpEnable(T0, THRESHOLD);
#endif /* ESP32C6 */

  Serial.println("Going to sleep now");
  Serial.flush();
  esp_deep_sleep_start();
}

void loop()
{
  // never reach here
}