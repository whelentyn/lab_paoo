// ExtendedWeatherData.h
#ifndef WEATHERDATAWIND_H
#define WEATHERDATAWIND_H

#include "WeatherData.h"

namespace WeatherDataNamespace {
    class WeatherDataWind : public WeatherData {
    private:
        int windSpeed;  // Additional attribute for wind speed

    public:
        WeatherDataWind(double temp, double hum, double press, const char* desc, int wind) :
            WeatherData(temp, hum, press, desc), windSpeed(wind) {
        }

        int getWindSpeed() const;

        void setWindSpeed(int newWindSpeed);
    };
}

#endif