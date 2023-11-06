#include "WeatherSensor.h"

using namespace WeatherDataNamespace;

WeatherData WeatherSensor::readData() const {
    // Simulate some data that is ready
    double temp = 25.5;
    double hum = 60.0;
    double press = 1013.2;
    return WeatherData(temp, hum, press, "Sunny day");
}
