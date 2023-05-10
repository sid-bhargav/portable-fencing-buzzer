// C++ code

#define BUZZER_PIN 2
#define BUTTON_PIN 7

void setup()
{
    pinMode(BUZZER_PIN, OUTPUT);
    pinMode(BUTTON_PIN, INPUT);
}

void loop()
{
    if (digitalRead(BUTTON_PIN) == HIGH)
    {
        digitalWrite(BUZZER_PIN, HIGH);
        delay(1000); // Wait for 1000 millisecond(s)
        digitalWrite(BUZZER_PIN, LOW);
    }
}
