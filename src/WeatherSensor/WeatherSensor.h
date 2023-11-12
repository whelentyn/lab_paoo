#ifndef WEATHERSENSOR_H
#define WEATHERSENSOR_H

#include "../WeatherData/WeatherData.h"

using namespace WeatherDataNamespace;

namespace WeatherSensorNamespace {
    class WeatherSensor {
    public:
        WeatherSensor(WeatherData& data);
        WeatherData readData() const;

    private:
        WeatherData& data;
    };
}

#endif