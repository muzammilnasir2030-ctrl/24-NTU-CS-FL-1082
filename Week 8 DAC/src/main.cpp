#include <Arduino.h>

#define DAC_PIN 25

void setup()
{
    Serial.begin(115200);
    Serial.println("ESP32 DAC Gradual Fade Test");
}

void loop()
{
    // Fade up from 0 to 255
    for (int value = 0; value <= 255; value++)
    {
        dacWrite(DAC_PIN, value);
        delay(20); // Dictates the fade speed
    }

    // Fade down from 255 to 0
    for (int value = 255; value >= 0; value--)
    {
        dacWrite(DAC_PIN, value);
        delay(20); // Dictates the fade speed
    }
}