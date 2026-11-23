// tasks.h - one function per menu task (each owner edits only their own)
#ifndef TASKS_H
#define TASKS_H
#include "controller.h"
#include "sensor.h"
#include "hvac.h"
#include "logger.h"

// Riya: T2-T5
void taskSetTarget(ThermostatController& c);    // T2, option 2
void taskSetMode(ThermostatController& c);      // T3, option 3
void taskShowStatus(ThermostatController& c);   // T4, option 1
void taskReset(ThermostatController& c, Sensor& s, HVACSystem& h); // T5, option 9

// Chloe: T6-T10
void taskRunSimulation(ThermostatController& c); // T6, option 4
void taskSetAmbient(Sensor& s);                  // T7, option 5
void taskDisturbance(Sensor& s);                 // T8, option 6
void taskShowHistory(ThermostatController& c);   // T9, option 7
void taskSaveLog(ThermostatController& c, Logger& l); // T10, option 8
#endif
