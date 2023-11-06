#ifndef IWEATHERDATA_H
#define IWEATHERDATA_H


namespace WeatherDataNamespace {
    class IWeatherData {
        virtual double getTemperature() = 0;
        virtual double getHumidity() = 0;
        virtual double getPressure() = 0;
        virtual const char* getDescription() = 0;

        virtual void setTemperature(double newTemperature) = 0;
        virtual void setHumidity(double newHumidity) = 0;
        virtual void setPressure(double newPressure) = 0;
        virtual void setDescription(const char* newDescription) = 0;

    };
}

#endif