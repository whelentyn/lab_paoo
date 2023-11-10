#include "WeatherSensor.h"
using namespace WeatherDataNamespace;

namespace WeatherSensorNamespace {
    std::list<WeatherData> WeatherSensor::readData(const std::list<WeatherData>& weatherDataList) const {
        cout<<"Sensor detected the following data: "<<endl;
        return weatherDataList;
    }
}
