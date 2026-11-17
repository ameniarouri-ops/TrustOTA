#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "secrets.h"

void setup() {
  Serial.begin(115200);
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED) { delay(500); Serial.print("."); }
  Serial.println();
  Serial.println(WiFi.localIP());
  Serial.print("Free heap: ");
  Serial.println(ESP.getFreeHeap());
}
void loop() {}