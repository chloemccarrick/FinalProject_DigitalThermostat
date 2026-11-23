// logger.h - Logger class: CSV output (owner: Chloe)
#ifndef LOGGER_H
#define LOGGER_H
#include <string>
#include <vector>
#include "controller.h"

class Logger {
private:
    std::string filename;
public:
    Logger(const std::string& file = "thermostat_log.csv");
    bool writeCsv(const std::vector<LogEntry>& history) const;
};
#endif
