#include "../WeatherData/WeatherDataWind.h"

namespace WeatherDataNamespace {
    int WeatherDataWind::getWindSpeed() {
        return windSpeed;
    }

    void WeatherDataWind::setWindSpeed(int newWindSpeed) {
        windSpeed = newWindSpeed;
    }
}
