// sensor.h - Sensor class (owner: Chloe)
#ifndef SENSOR_H
#define SENSOR_H
#include <random>
#include "hvac.h"

class Sensor {
private:
    double currentTemp;
    double minTemp;
    double maxTemp;
    double drift;
    std::mt19937 rng;
public:
    Sensor(double startTemp = 70.0);
    void update(HVACState state);
    double readTemperature() const;
    bool setTemperature(double t);
    void applyDisturbance(double dt);
    void reset();
};
#endif
