#include "PotentiometerSensor.h"
#include <Arduino.h>

PotentiometerSensor::PotentiometerSensor(int pin, float maxRawValue)
    : pin(pin), maxRawValue(maxRawValue) {
}

void PotentiometerSensor::initialize() {
    pinMode(pin, INPUT);
}

int PotentiometerSensor::readRaw() const {
    return analogRead(pin);
}

float PotentiometerSensor::read() {
    int raw = analogRead(pin);
    if (maxRawValue <= 0.0f) {
        return 0.0f;
    }

    float percentage = (static_cast<float>(raw) / maxRawValue) * 100.0f;
    if (percentage < 0.0f) {
        return 0.0f;
    }
    if (percentage > 100.0f) {
        return 100.0f;
    }
    return percentage;
}

int PotentiometerSensor::getPin() const {
    return pin;
}