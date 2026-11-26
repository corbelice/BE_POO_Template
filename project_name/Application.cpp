/*********************************************************************
 * @file  Apllication.cpp
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier source de l'application
 *********************************************************************/
#include "Application.h"


#include "Application.h"
#include <Arduino.h>

Application::Application()
    : pot(A0, 1023.0f), lastPrintTime(0) {
}

Application::~Application() {
}

void Application::init(void) {
    Serial.begin(115200);
    pot.initialize();
    Serial.println("PotentiometerSensor initialise sur A0");
}

void Application::run(void) {
    unsigned long now = millis();
    if (now - lastPrintTime >= 300) {
        lastPrintTime = now;
        int raw = pot.readRaw();
        float pct = pot.read();
        Serial.print("Brut: ");
        Serial.print(raw);
        Serial.print(" | Pourcentage: ");
        Serial.print(pct, 1);
        Serial.println(" %");
    }
}


Application::Application()
{
  // Code
  ; 
}
  
Application::~Application()
{
  // Code
  ;
}  

void Application::init(void)
{
  // Code
    ;
}


void Application::run(void)
{
  // Code
    ;
}
