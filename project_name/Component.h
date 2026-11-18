// ==========================================
// COMPONENT - ABSTRACT BASE CLASS
// ==========================================

// Include guards:
// Prevent this header file from being included
// multiple times during compilation.

#ifndef COMPONENT_H
#define COMPONENT_H

// Component is the base class of all hardware components.
// Both sensors and actuators will inherit from this class.
//
// This class defines the common interface shared by
// all physical components connected to the ESP8266.

class Component {

public:

    // ==========================================
    // INITIALIZATION
    // ==========================================

    // Pure virtual method:
    // - "virtual" enables polymorphism.
    // - "= 0" means that this method is not implemented here.
    //
    // Each concrete derived class must provide its own
    // implementation according to its hardware requirements.
    //
    // Example:
    // A button is initialized as an input,
    // whereas an LED is initialized as an output.
    //
    // This pure virtual method makes Component an abstract
    // class, meaning that it cannot be instantiated directly.

    virtual void initialize() = 0;


    // ==========================================
    // DESTRUCTOR
    // ==========================================

    // Virtual destructor:
    // Ensures that the correct destructor is called
    // when a derived object is deleted through
    // a pointer to the base class Component.
    //
    // "= default" tells the compiler to generate
    // the default implementation of the destructor.

    virtual ~Component() = default;
};

// End of the include guard.
#endif