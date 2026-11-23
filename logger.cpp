// logger.cpp - Logger implementation (owner: Chloe)
#include "logger.h"

Logger::Logger(const std::string& file) : filename(file) {}

bool Logger::writeCsv(const std::vector<LogEntry>& history) const { (void)history; return false; } // TODO (Chloe)
