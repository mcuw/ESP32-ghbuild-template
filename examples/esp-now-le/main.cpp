/**
 * This example shows how to run with low energy consumption.
 * And use as a node with esp-now communication.
 *
 * used features:
 * - Deep-Sleep mode
 * - Touch sensor as wake up trigger (T0 = GPIO4)
 * - ESP now
 */
#include <Arduino.h>
#include <esp_now.h>
#include <WiFi.h>

#define THRESHOLD 20 // you can modify this value

// this is the boardcast address, change to your receiver MAC
uint8_t broadcastAddress[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

typedef struct struct_message
{
  char a[32];
  int b;
  float c;
  bool d;
} struct_message;

struct_message myData;

esp_now_peer_info_t peerInfo;

// callback when data is sent
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status)
{
  Serial.print("Last Packet Send Status: ");
  if (status == ESP_NOW_SEND_SUCCESS)
  {
    Serial.println("Delivery Success");
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else
  {
    Serial.println("Delivery Fail");
  }
}

void setup()
{
  Serial.begin(115200);
  // while (!Serial)
  //   ;

  pinMode(LED_BUILTIN, OUTPUT);

  // Init ESP-NOW
  // Set device as a Wi-Fi Station
  WiFi.mode(WIFI_STA);
  if (esp_now_init() != ESP_OK)
  {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // Once ESPNow is successfully Init, we will register for Send CB to
  // get the status of Trasnmitted packet
  if (esp_now_register_send_cb(OnDataSent) != ESP_OK)
  {
    Serial.println("Error initializing ESP-NOW callback");
  }

  // Register peer
  memcpy(peerInfo.peer_addr, broadcastAddress, 6);
  peerInfo.channel = 0;
  peerInfo.encrypt = false;
  // Add peer
  if (esp_now_add_peer(&peerInfo) != ESP_OK)
  {
    Serial.println("Failed to add peer");
    return;
  }

  // Set values to send
  strcpy(myData.a, "THIS IS A CHAR");
  myData.b = random(1, 20);
  myData.c = 1.2;
  myData.d = false;

  // Send message via ESP-NOW
  esp_err_t result = esp_now_send(broadcastAddress, (uint8_t *)&myData, sizeof(myData));
  if (result == ESP_OK)
  {
    Serial.println("Called ESP-Now send successfully");
  }
  else
  {
    Serial.println("Error sending the data");
  }

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