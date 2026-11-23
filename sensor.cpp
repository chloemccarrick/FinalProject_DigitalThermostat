// sensor.cpp - Sensor implementation (owner: Chloe)
#include "sensor.h"

Sensor::Sensor(double startTemp)
    : currentTemp(startTemp), minTemp(32.0), maxTemp(110.0), drift(0.5), rng(42) {}

void Sensor::update(HVACState state) { (void)state; }   // TODO (Chloe): drift model
double Sensor::readTemperature() const { return currentTemp; }
bool Sensor::setTemperature(double t) { (void)t; return false; } // TODO (Chloe): validate + set
void Sensor::applyDisturbance(double dt) { (void)dt; }  // TODO (Chloe): shift temperature
void Sensor::reset() { currentTemp = 70.0; }
