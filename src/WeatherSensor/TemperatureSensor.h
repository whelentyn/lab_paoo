#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

#include "IWeatherSensor.h"

namespace WeatherSensorNamespace {
    class TemperatureSensor : public IWeatherSensor<int> { // Example: Return type is int
    public:
        int readData(const WeatherDataNamespace::WeatherData& input) const override;
    };
}

#endif