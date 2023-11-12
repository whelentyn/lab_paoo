#include "WeatherSensor.h"
#include <iostream>
#include "../WeatherData/WeatherData.h"

namespace WeatherSensorNamespace {
    WeatherSensor::WeatherSensor(WeatherDataNamespace::WeatherData& data) : data(data) {}

    WeatherDataNamespace::WeatherData WeatherSensor::readData() const{
        return WeatherDataNamespace::WeatherData(data.getTemperature(), data.getPressure(), data.getHumidity(), data.getDescription());
    }
}