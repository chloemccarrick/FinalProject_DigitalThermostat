// controller.cpp - ThermostatController implementation (owner: Riya)
#include <iostream>
#include "controller.h"

ThermostatController::ThermostatController(Sensor* s, HVACSystem* h)
    : targetTemp(70.0), deadband(1.0), mode(Mode::AUTO), sensor(s), hvac(h) {}

bool ThermostatController::setTarget(double t) { (void)t; return false; } // TODO (Riya): validate 50-90 F
void ThermostatController::setDeadband(double d) { (void)d; }             // TODO (Riya)
void ThermostatController::setMode(Mode m) { (void)m; }                   // TODO (Riya)
void ThermostatController::step() {}                                      // TODO: read sensor, evaluate, log
HVACState ThermostatController::evaluate(double temp) const { (void)temp; return HVACState::STANDBY; } // TODO (Riya): deadband logic
void ThermostatController::printStatus() const { std::cout << "Not implemented yet\n"; } // TODO (Riya)
const std::vector<LogEntry>& ThermostatController::getHistory() const { return history; }
void ThermostatController::reset() { history.clear(); }                   // TODO (Riya): reset all defaults
