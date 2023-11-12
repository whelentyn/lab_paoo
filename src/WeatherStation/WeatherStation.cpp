#include "WeatherStation.h"
#include <iostream>
#include "../WeatherData/WeatherData.h"

namespace WeatherStationNamespace {
    void WeatherStation::addSensor(const WeatherSensor& sensor) {
        sensors.push_back(sensor);
    }

    void WeatherStation::collectData() {
        for (const WeatherSensor& sensor : sensors) {
            WeatherDataNamespace::WeatherData data = sensor.readData();
            std::cout << "Collected data: Temperature " << data.getTemperature() << "°C, Humidity " << data.getHumidity() << "%, Pressure " << data.getPressure() << "hPa, Description: " << data.getDescription() << std::endl;
        }
    }
}
