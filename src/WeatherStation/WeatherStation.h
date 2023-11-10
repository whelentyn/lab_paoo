#ifndef WEATHERSTATION_H
#define WEATHERSTATION_H

#include <vector>

namespace WeatherStationNamespace {
    template <typename T>
    class WeatherStation {
    private:
        std::vector<T> sensors;

    public:
        void addSensor(const T& sensor);
        void collectData();
    };
}

#endif

