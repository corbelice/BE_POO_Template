// ==========================================
// SPACESHIP - CLASS IMPLEMENTATION
// ==========================================

// Include the declaration of the Spaceship class.
#include "Spaceship.h"


// ==========================================
// CONSTRUCTOR
// ==========================================

// The constructor is automatically called when
// a new Spaceship object is created.
//
// reset() initializes all spaceship parameters
// with their default values.

Spaceship::Spaceship() {
    reset();
}


// ==========================================
// GETTERS
// ==========================================

// Getters return the value of private attributes.
//
// "const" guarantees that these methods
// do not modify the state of the object.

float Spaceship::getEnergy() const {
    return energy;
}

float Spaceship::getTemperature() const {
    return temperature;
}

float Spaceship::getOxygen() const {
    return oxygen;
}

float Spaceship::getIntegrity() const {
    return integrity;
}

float Spaceship::getReactorPower() const {
    return ReactorPower;
}


// ==========================================
// SETTERS
// ==========================================

// Energy must always remain between 0 and 100%.
//
// If the requested value is outside this range,
// it is automatically limited to the closest boundary.

void Spaceship::setEnergy(float value) {

    if (value < 0) {
        energy = 0;
    }
    else if (value > 100) {
        energy = 100;
    }
    else {
        energy = value;
    }
}


// Temperature is expressed in degrees Celsius,
// not as a percentage.
//
// For our game, we assume that the virtual reactor
// temperature cannot be lower than 0 degrees Celsius.
//
// No upper limit is imposed because overheating
// must remain possible.

void Spaceship::setTemperature(float value) {

    if (value < 0) {
        temperature = 0;
    }
    else {
        temperature = value;
    }
}


// Oxygen must always remain between 0 and 100%.
//
// This prevents negative oxygen levels or values
// exceeding the maximum storage capacity.

void Spaceship::setOxygen(float value) {

    if (value < 0) {
        oxygen = 0;
    }
    else if (value > 100) {
        oxygen = 100;
    }
    else {
        oxygen = value;
    }
}


// Hull integrity must always remain between 0 and 100%.
//
// Damage reduces integrity, while repairs increase it.

void Spaceship::setIntegrity(float value) {

    if (value < 0) {
        integrity = 0;
    }
    else if (value > 100) {
        integrity = 100;
    }
    else {
        integrity = value;
    }
}

void Spaceship::setReactorPower(float value) {
    if (value < 0) {
        ReactorPower = 0;
    }
    else if (value > 100) {
        ReactorPower = 100;
    }
    else {
        ReactorPower = value;
    }
}

// ==========================================
// RESET
// ==========================================

// Restores the initial state of the spaceship.
//
// This method is called:
// - When a Spaceship object is created.
// - When the player starts a new game.
//
// Using a common method avoids duplicating code.

void Spaceship::reset() {

    energy = 100;
    temperature = 25;
    oxygen = 100;
    integrity = 100;
    ReactorPower = 50;
}


// ==========================================
// OPERATIONAL STATUS
// ==========================================

bool Spaceship::isOperational() const {

    return (energy > 0 &&
            oxygen > 0 &&
            integrity > 0);
}

