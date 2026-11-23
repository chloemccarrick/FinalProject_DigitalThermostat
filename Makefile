CXX = g++
CXXFLAGS = -std=c++17 -Wall
SRCS = main.cpp menu.cpp tasks.cpp sensor.cpp hvac.cpp controller.cpp logger.cpp
OBJS = $(SRCS:.cpp=.o)

thermostat: $(OBJS)
	$(CXX) $(CXXFLAGS) -o thermostat $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS) thermostat thermostat_log.csv
