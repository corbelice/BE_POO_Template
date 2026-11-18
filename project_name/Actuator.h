// ==========================================
// ACTUATOR - ABSTRACT BASE CLASS
// ==========================================

// Include guards:
// Prevent multiple inclusions of this header file.

#ifndef ACTUATOR_H
#define ACTUATOR_H

// Include the parent class definition.
#include "Component.h"


// Actuator inherits publicly from Component.
//
// This class represents all hardware components
// that perform a physical action.
//
// Examples:
// - LED
// - Buzzer
// - Servo motor
// - LCD screen

class Actuator : public Component {

public:

    // ==========================================
    // DESTRUCTOR
    // ==========================================

    // The destructor is already virtual in Component.
    //
    // "override" ensures that this destructor
    // overrides the destructor of the parent class.
    //
    // This allows derived objects to be safely deleted
    // through a pointer to their base class.

    ~Actuator() override = default;
};

#endif