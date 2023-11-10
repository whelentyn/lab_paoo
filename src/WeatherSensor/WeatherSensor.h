#ifndef WEATHERSENSOR_H
#define WEATHERSENSOR_H

#include <list>
#include "../WeatherData/WeatherData.h"

namespace WeatherSensorNamespace {
    class WeatherSensor {
    public:
        std::list<WeatherData> readData(const std::list<WeatherData>& existingData) const;
    };
}

#endif
