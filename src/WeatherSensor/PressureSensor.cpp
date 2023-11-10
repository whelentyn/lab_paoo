#include "PressureSensor.h"

namespace WeatherSensorNamespace {
    double PressureSensor::readData(const WeatherDataNamespace::WeatherData& input) const {
        double correctValue = input.getPressure() - 0.5 ;  // remove error

        return correctValue;
    }
}