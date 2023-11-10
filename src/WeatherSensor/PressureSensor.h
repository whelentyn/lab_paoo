#ifndef PRESSURESENSOR_H
#define PRESSURESENSOR_H

#include "IWeatherSensor.h"

namespace WeatherSensorNamespace {
    class PressureSensor : public IWeatherSensor<double> { // Example: Return type is double
    public:
        double readData(const WeatherDataNamespace::WeatherData& input) const override;
    };
}

#endif
