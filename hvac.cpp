// hvac.cpp - HVACSystem implementation (owner: Riya)
#include "hvac.h"

HVACSystem::HVACSystem() : state(HVACState::STANDBY), stepsHeating(0), stepsCooling(0) {}

void HVACSystem::setState(HVACState s) { state = s; }            // TODO (Riya): count heating/cooling steps
HVACState HVACSystem::getState() const { return state; }
std::string HVACSystem::stateToString() const { return "STANDBY"; } // TODO (Riya): return real state name
void HVACSystem::reset() { state = HVACState::STANDBY; stepsHeating = 0; stepsCooling = 0; }
