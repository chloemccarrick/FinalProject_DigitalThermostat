//Menu & main loop
//Menu displays, each option calls one task function, 0 exits cleanly

/*
// main.cpp - Digital Thermostat Simulation, EECE 2140 final project
// Team: Chloe McCarrick & Riya Virajpet. Creates the objects and runs the
// menu loop; each menu option calls exactly one task function. (Owner: Riya)
#include <iostream>
#include "controller.h"
#include "hvac.h"
#include "logger.h"
#include "menu.h"
#include "sensor.h"
//#include "tasks.h"

using namespace std;

int main()
{
    Sensor sensor;
    HVACSystem hvac;
    ThermostatController controller(&sensor, &hvac);
    Logger logger("thermostat_log.csv");

    while (true)
    {
        showMenu();
        int choice = readMenuChoice();
        if (choice == -2) break;   // end of input: exit cleanly

        switch (choice)
        {
            case 1: taskShowStatus(controller); break;
            case 2: taskSetTarget(controller); break;
            case 3: taskSetMode(controller); break;
            case 4: taskRunSimulation(controller, sensor); break;
            case 5: taskSetAmbient(sensor); break;
            case 6: taskDisturbance(sensor); break;
            case 7: taskShowHistory(controller); break;
            case 8: taskSaveLog(controller, logger); break;
            case 9: taskReset(controller); break;
            case 0:
                cout << "Goodbye.\n";
                return 0;
            default:
                cout << "Invalid option. Enter a number from 0 to 9.\n";
        }
        if (cin.eof()) break;
    }
    cout << "Input ended. Goodbye.\n";
    return 0;
}

*/
