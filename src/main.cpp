#include <Arduino.h>
#define LDR_Pin A0

void setup()
{
    Serial.begin(9600);
    while (!Serial);
}

void loop()
{
    int ldrRaw = analogRead(LDR_Pin);
    // Map to percentage
    int lightPercent = map(ldrRaw, 0, 1023, 100, 0);
    Serial.print("LDR Raw Value: ");
    Serial.print(ldrRaw);
    Serial.print(" | Light Intensity: ");
    Serial.print(lightPercent);
    Serial.println("%");
    delay(500);
}
