// ==========================================
// SENSOR - ABSTRACT BASE CLASS
// ==========================================

// Include guards:
// Prevent multiple inclusions of this header file.

#ifndef SENSOR_H
#define SENSOR_H

// Include the parent class definition.
#include "Component.h"


// Sensor inherits publicly from Component.
//
// This class represents all physical sensors
// connected to the ESP8266.
//
// Examples:
// - Rotary angle sensor
// - Button
// - Ultrasonic sensor
// - Temperature sensor
// - Light sensor

class Sensor : public Component {

public:

    // ==========================================
    // SENSOR READING
    // ==========================================

    // Pure virtual method used to read a sensor value.
    //
    // Each concrete sensor must provide its own
    // implementation of this method.
    //
    // We use float as a common return type:
    // - Button: 0 or 1
    // - Temperature: temperature in degrees Celsius
    // - Ultrasonic sensor: distance
    // - Rotary angle sensor: analog value
    //
    // This allows different types of sensors to be
    // handled through a common interface.

    virtual float read() = 0;


    // ==========================================
    // DESTRUCTOR
    // ==========================================

    // The destructor is already virtual in Component.
    // "override" confirms that we are overriding
    // the destructor of the parent class.

    ~Sensor() override = default;
};

#endif