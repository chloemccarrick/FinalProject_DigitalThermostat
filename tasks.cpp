// tasks.cpp - task functions; every task starts as a stub
#include <iostream>
#include "tasks.h"
using namespace std;

// ---------- Riya: T2-T5 ----------
void taskSetTarget(ThermostatController& c)  { (void)c; cout << "T2 Set target temperature: Not implemented yet\n"; }
void taskSetMode(ThermostatController& c)    { (void)c; cout << "T3 Set mode and deadband: Not implemented yet\n"; }
void taskShowStatus(ThermostatController& c) { (void)c; cout << "T4 Show system status: Not implemented yet\n"; }
void taskReset(ThermostatController& c, Sensor& s, HVACSystem& h) { (void)c; (void)s; (void)h; cout << "T5 Reset system: Not implemented yet\n"; }

// ---------- Chloe: T6-T10 ----------
void taskRunSimulation(ThermostatController& c) { (void)c; cout << "T6 Run simulation: Not implemented yet\n"; }
void taskSetAmbient(Sensor& s)                  { (void)s; cout << "T7 Set ambient start temperature: Not implemented yet\n"; }
void taskDisturbance(Sensor& s)                 { (void)s; cout << "T8 Inject disturbance: Not implemented yet\n"; }
void taskShowHistory(ThermostatController& c)   { (void)c; cout << "T9 View history log: Not implemented yet\n"; }
void taskSaveLog(ThermostatController& c, Logger& l) { (void)c; (void)l; cout << "T10 Save log to file: Not implemented yet\n"; }
