// In WeatherStation.cpp

#include "WeatherStation.h"
#include <iostream>

using namespace WeatherSensorNamespace;
using namespace WeatherDataNamespace;

namespace WeatherStationNamespace {
    void WeatherStation::addSensor(const WeatherSensor& sensor) {
        sensors.push_back(sensor);
    }

    void WeatherStation::collectData() {
        for (const WeatherSensor& sensor : sensors) {
            WeatherData data = sensor.readData();
            std::cout << "Collected data: Temperature " << data.getTemperature() << "°C, Humidity " << data.getHumidity() << "%, Pressure " << data.getPressure() << "hPa, Description: " << data.getDescription() << std::endl;
        }
    }
}

