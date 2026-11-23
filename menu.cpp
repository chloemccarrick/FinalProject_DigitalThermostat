// menu.cpp - menu display and input (owner: Riya)
#include <iostream>
#include <limits>
#include "menu.h"
using namespace std;

void showMenu() {
    cout << "\n===== Digital Thermostat =====\n"
         << "1. Show system status\n"
         << "2. Set target temperature\n"
         << "3. Set mode and deadband\n"
         << "4. Run simulation (N steps)\n"
         << "5. Set ambient start temperature\n"
         << "6. Inject disturbance\n"
         << "7. View history log\n"
         << "8. Save log to file\n"
         << "9. Reset system\n"
         << "0. Exit\n"
         << "Choose an option: ";
}

int readChoice() {
    int choice;
    while (!(cin >> choice)) {
        if (cin.eof()) return 0;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter a number 0-9: ";
    }
    return choice;
}
