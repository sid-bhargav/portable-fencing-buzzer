// C++ code

#define BUZZER_PIN 11
#define BLADE_PIN 12

void setup()
{
    pinMode(BUZZER_PIN, OUTPUT);
    pinMode(BLADE_PIN, INPUT);

    Serial.print("test");
}

void loop()
{
    if (digitalRead(BLADE_PIN) == LOW)
    {
        digitalWrite(BUZZER_PIN, HIGH);
        delay(1000); // Wait for 1000 millisecond(s)
        digitalWrite(BUZZER_PIN, LOW);
    }
}
