// In WeatherStation.cpp

// WeatherStation.cpp

#include "WeatherStation.h"
#include "../WeatherSensor/IWeatherSensor.h"
#include "../WeatherData/WeatherData.h"
#include <iostream>

using namespace WeatherSensorNamespace;
using namespace WeatherDataNamespace;

namespace WeatherStationNamespace {
    template <typename T>
    void WeatherStation<T>::addSensor(const T& sensor) {
        sensors.push_back(sensor);
    }

    template <typename T>
    void WeatherStation<T>::collectData() {
        for (const T& sensor : sensors) {
            std::cout<<"Station recieved data from sensor!"<<endl;
            std::cout<<sensor.readData()<<endl;
        }
    }

    // Explicit instantiation for WeatherSensor, assuming it's needed
    template class WeatherStation<IWeatherSensor<WeatherData>>;
    // Add explicit instantiations for other sensor types if needed
}

