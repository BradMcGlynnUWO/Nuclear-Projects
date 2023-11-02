#ifndef COOLINGSYSTEM_H
#define COOLINGSYSTEM_H

#include "ReactorCore.h"

class CoolingSystem {
private:
    double coolantFlowRate; // Rate of coolant flow

public:
    CoolingSystem(); // Constructor to initialize the cooling system
    void simulateCooling(ReactorCore &reactorCore, double deltaTime); // Perform cooling action on the reactor core
};

#endif //COOLINGSYSTEM_H
