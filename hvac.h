// hvac.h - HVACState enum and HVACSystem class (owner: Riya)
#ifndef HVAC_H
#define HVAC_H
#include <string>

enum class HVACState { STANDBY, HEATING, COOLING };

class HVACSystem {
private:
    HVACState state;
    int stepsHeating;
    int stepsCooling;
public:
    HVACSystem();
    void setState(HVACState s);
    HVACState getState() const;
    std::string stateToString() const;
    void reset();
};
#endif
