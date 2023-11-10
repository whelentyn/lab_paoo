#ifndef IWEATHERSENSOR_H
#define IWEATHERSENSOR_H

#include "../WeatherData/WeatherData.h"

namespace WeatherSensorNamespace {
    template <typename T>
    class IWeatherSensor {
    public:
        virtual ~IWeatherSensor() = default;

        virtual T readData(const WeatherDataNamespace::WeatherData& input) const = 0;
    };
}

#endif
