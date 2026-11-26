#ifndef POTENTIOMETERSENSOR_H
#define POTENTIOMETERSENSOR_H

#include <Arduino.h>
#include "Sensor.h"

class PotentiometerSensor : public Sensor {
private:
    int pin;
    float maxRawValue;

public:
    explicit PotentiometerSensor(int pin = A0, float maxRawValue = 1023.0f);

    void initialize() override;
    float read() override;
    int readRaw() const;
    int getPin() const;

    ~PotentiometerSensor() override = default;
};

#endif