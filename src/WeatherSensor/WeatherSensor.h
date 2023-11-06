#ifndef WEATHERSENSOR_H
#define WEATHERSENSOR_H

#include "../WeatherData/WeatherData.h"

using namespace WeatherDataNamespace;

class WeatherSensor {
    public:
        WeatherData readData() const;
};

#endif