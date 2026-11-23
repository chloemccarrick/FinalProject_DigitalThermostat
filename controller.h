// controller.h - Mode enum, LogEntry struct, ThermostatController class (owner: Riya)
#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <vector>
#include "sensor.h"
#include "hvac.h"

enum class Mode { AUTO, HEAT, COOL, OFF };

struct LogEntry {
    int step;
    double temperature;
    HVACState state;
};

class ThermostatController {
private:
    double targetTemp;
    double deadband;
    Mode mode;
    Sensor* sensor;
    HVACSystem* hvac;
    std::vector<LogEntry> history;
public:
    ThermostatController(Sensor* s, HVACSystem* h);
    bool setTarget(double t);
    void setDeadband(double d);
    void setMode(Mode m);
    void step();
    HVACState evaluate(double temp) const;
    void printStatus() const;
    const std::vector<LogEntry>& getHistory() const;
    void reset();
};
#endif
