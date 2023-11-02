#ifndef REACTORCORE_H
#define REACTORCORE_H

class ReactorCore {
private:
    double temperature; // Current temperature of the core
    double controlRodLevel; // Position of the control rods (0 to 1 where 1 is fully withdrawn)
    double heatProductionRate;


public:
    ReactorCore(); // Constructor to initialize the core state
    void updateTemperature(double deltaTime); // Update the temperature based on time and control rod level
    void adjustControlRodLevel(double adjustment); // Adjust the control rod level
    double getTemperature() const; // Get the current temperature of the core
};

#endif //REACTORCORE_H
