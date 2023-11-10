#include "../WeatherData/WeatherDataWind.h"

namespace WeatherDataNamespace {
    int WeatherDataWind::getWindSpeed() const{
        return windSpeed;
    }

    void WeatherDataWind::setWindSpeed(int newWindSpeed) {
        windSpeed = newWindSpeed;
    }
}
