#define BLYNK_TEMPLATE_ID "TMPL5Z6YAOMV"
#define BLYNK_DEVICE_NAME "Smart Relay"
#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
#define APP_DEBUG
#define USE_NODE_MCU_BOARD
#include "BlynkEdgent.h"

BLYNK_WRITE(V0)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(D7, HIGH);
    Serial.println("LED ON");
  }
  if(value == 0)
  {
     digitalWrite(D7, LOW);
     Serial.println("LED OFF");
  }
}

BLYNK_WRITE(V1)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(D6, HIGH);
    Serial.println("LED ON");
  }
  if(value == 0)
  {
     digitalWrite(D6, LOW);
     Serial.println("LED OFF");
  }
}

BLYNK_WRITE(V2)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(D5, HIGH);
    Serial.println("LED ON");
  }
  if(value == 0)
  {
     digitalWrite(D5, LOW);
     Serial.println("LED OFF");
  }
}

BLYNK_WRITE(V3)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(D0, HIGH);
    Serial.println("LED ON");
  }
  if(value == 0)
  {
     digitalWrite(D0, LOW);
     Serial.println("LED OFF");
  }
}

BLYNK_WRITE(V4)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(D0, HIGH);
    digitalWrite(D5, HIGH);
    digitalWrite(D6, HIGH);
    digitalWrite(D7, HIGH);
    Serial.println("LED ON");
  } 
}
BLYNK_WRITE(V5)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
     digitalWrite(D0, LOW);
     digitalWrite(D5, LOW);
     digitalWrite(D6, LOW);
     digitalWrite(D7, LOW);
     Serial.println("LED OFF");
  }
}
void setup()
{
  Serial.begin(115200);
  delay(100);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);
  pinMode(D0,OUTPUT);
  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}

