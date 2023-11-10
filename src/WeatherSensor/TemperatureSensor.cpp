#include "TemperatureSensor.h"

namespace WeatherSensorNamespace {
    int TemperatureSensor::readData(const WeatherDataNamespace::WeatherData& input) const {
        int correctValue = input.getTemperature() + 0.3;  // error fix

        return correctValue;
    }
}