// main.cpp - creates the objects and runs the menu loop (owner: Riya)
#include <iostream>
#include "menu.h"
#include "tasks.h"
using namespace std;

int main() {
    Sensor sensor(70.0);
    HVACSystem hvac;
    ThermostatController controller(&sensor, &hvac);
    Logger logger("thermostat_log.csv");

    bool running = true;
    while (running) {
        showMenu();
        int choice = readChoice();
        switch (choice) {
            case 1: taskShowStatus(controller);           break; // T4
            case 2: taskSetTarget(controller);            break; // T2
            case 3: taskSetMode(controller);              break; // T3
            case 4: taskRunSimulation(controller);        break; // T6
            case 5: taskSetAmbient(sensor);               break; // T7
            case 6: taskDisturbance(sensor);              break; // T8
            case 7: taskShowHistory(controller);          break; // T9
            case 8: taskSaveLog(controller, logger);      break; // T10
            case 9: taskReset(controller, sensor, hvac);  break; // T5
            case 0: running = false; cout << "Goodbye!\n"; break; // T1
            default: cout << "Invalid option, try again.\n";
        }
    }
    return 0;
}
