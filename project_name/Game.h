#ifndef GAME_H
#define GAME_H

#include "Spaceship.h"

class Game {

private:

    // Spaceship controlled by the player.
    Spaceship spaceship;

    // Indicates whether the game is running.
    bool running;

    // Game duration: 2 minutes in milliseconds.
    const unsigned long duration = 120000;

    // Time at which the game started.
    unsigned long startTime;

    // Time elapsed since the game started.
    unsigned long elapsedTime;

    // Energy consumption per second.
const float energyConsumption = 0.5f;

// Time of the previous game update.
unsigned long lastUpdateTime;

public:

    // Constructor.
    Game();

    // Starts the game.
    void start(unsigned long currentTime);

    // Updates the game state.
    void update(unsigned long currentTime);
    // Stops the game.
    void stop();

    // Returns the game status.
    bool isRunning() const;

    // Returns the remaining time in milliseconds.
    unsigned long getRemainingTime() const;

    // Returns a reference to the spaceship.
    Spaceship& getSpaceship();
};

#endif