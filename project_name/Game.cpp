#include "Game.h"

// ==========================================
// CONSTRUCTOR
// ==========================================

Game::Game() : running(false),
               startTime(0),
               elapsedTime(0),
               lastUpdateTime(0) {
}


// ==========================================
// GAME CONTROL
// ==========================================

// Starts a new game and resets the timer.

void Game::start(unsigned long currentTime) {
    spaceship.reset();
    running = true;
    startTime = currentTime;
    elapsedTime = 0;

    // Initialize the time of the last update.
    lastUpdateTime = currentTime;
}


// Updates the game state and the timer.

void Game::update(unsigned long currentTime) {

    // Do nothing if the game is not running.
    if (!running) {
        return;
    }

    // Calculate the total elapsed game time.
    elapsedTime = currentTime - startTime;

    // Calculate the time since the previous update,
    // without exceeding the game duration.
    unsigned long deltaTime = currentTime - lastUpdateTime;

    if (elapsedTime > duration) {
        deltaTime -= elapsedTime - duration;
        elapsedTime = duration;
    }

    // Convert milliseconds into seconds.
    float deltaSeconds = deltaTime / 1000.0f;

    // Store the current time for the next update.
    lastUpdateTime = currentTime;

    // Calculate and update the spaceship energy.
    spaceship.setEnergy(
        spaceship.getEnergy() - energyConsumption * deltaSeconds
    );

    // Stop the game when the time limit is reached.
    if (elapsedTime >= duration) {
        stop();
    }
}


// Stops the current game.

void Game::stop() {

    running = false;
}


// ==========================================
// GETTERS
// ==========================================

// Returns whether the game is running.

bool Game::isRunning() const {

    return running;
}


// Returns the remaining time in milliseconds.

unsigned long Game::getRemainingTime() const {

    return duration - elapsedTime;
}


// Returns a reference to the original spaceship.

Spaceship& Game::getSpaceship() {

    return spaceship;
}