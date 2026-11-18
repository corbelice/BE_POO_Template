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
//
// "::" is the scope resolution operator.
// It indicates that this method belongs to Spaceship.

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
}


// ==========================================
// OPERATIONAL STATUS
// ==========================================

// The spaceship remains operational as long as
// its three critical resources are above zero.
//
// "&&" is the logical AND operator.
// All conditions must be true for the method
// to return true.
//
// Prolonged overheating will be managed separately
// by the Game class because it depends on time.

bool Spaceship::isOperational() const {

    return (energy > 0 &&
            oxygen > 0 &&
            integrity > 0);
}