// ==========================================
// SPACESHIP - CLASS DECLARATION
// ==========================================

// Include guards:
// Prevent multiple inclusions of this header file.

#ifndef SPACESHIP_H
#define SPACESHIP_H


// This class represents the virtual spaceship.
//
// It stores and manages the different parameters
// required for the spaceship to remain operational.
//
// Unlike sensors and actuators, Spaceship does not
// represent a physical hardware component.

class Spaceship {

private:

    // ==========================================
    // ATTRIBUTES
    // ==========================================

    // Remaining energy level (0 to 100%).
    float energy;

    // Virtual reactor temperature in degrees Celsius.
    float temperature;

    // Remaining oxygen level (0 to 100%).
    float oxygen;

    // Structural integrity of the spaceship (0 to 100%).
    float integrity;

    // Current reactor power (0 to 100%).
    float ReactorPower;

    // Indicates whether an electrical failure is active.
    bool electricalFailure;

public:

    // ==========================================
    // CONSTRUCTOR
    // ==========================================

    // Initializes the spaceship with its default
    // parameters at the beginning of the game.

    Spaceship();


    // ==========================================
    // GETTERS
    // ==========================================

    // Getters provide read-only access to private
    // attributes from outside the class.
    //
    // "const" ensures that these methods do not
    // modify the state of the spaceship.

    float getEnergy() const;
    float getTemperature() const;
    float getOxygen() const;
    float getIntegrity() const;
    float getReactorPower() const;
    // Returns whether an electrical failure is active.
    bool hasElectricalFailure() const;
    


    // ==========================================
    // SETTERS
    // ==========================================

    // Setters allow other classes to modify
    // the spaceship parameters in a controlled way.
    //
    // Values will be checked before being assigned
    // to the corresponding attributes.

    void setEnergy(float value);
    void setTemperature(float value);
    void setOxygen(float value);
    void setIntegrity(float value);
    void setReactorPower(float value);


    // ==========================================
    // GAME MECHANICS
    // ==========================================

    // Restores all spaceship parameters to their
    // initial values when starting a new game.

    void reset();


    // Checks whether the spaceship can still operate.
    //
    // Returns true if the spaceship is operational.
    // Returns false if a critical resource is depleted.

    bool isOperational() const;

    void triggerElectricalFailure();
    void repairElectricalFailure();

};

#endif