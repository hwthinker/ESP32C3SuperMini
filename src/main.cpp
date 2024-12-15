#include <Arduino.h>

int led = 8;

void setup() {
    // Initialize USB Serial explicitly
    Serial.begin(9600);
    while (!Serial) {
        // Tunggu hingga Serial siap
        delay(10);
    }
    pinMode(led, OUTPUT);
}

void loop() {
    digitalWrite(led, LOW); // turn the LED on
    delay(100);             // wait for a second
    Serial.println("OFF");

    digitalWrite(led, HIGH); // turn the LED off
    delay(1000);             // wait for a second
    Serial.println("ON");
}
