#include "WeatherData.h"
#include <cstring>


namespace WeatherDataNamespace {
    double WeatherData::getTemperature() const{
        return temperature;
    }


    double WeatherData::getHumidity() const{
        return humidity;
    }

    double WeatherData::getPressure() const{ 
        return pressure;
    }

    const char* WeatherData::getDescription() const{
        return description;
    }

    void WeatherData::setTemperature(double newTemperature) {
        temperature = newTemperature;
    }

    void WeatherData::setHumidity(double newHumidity) {
        humidity = newHumidity;
    }

    void WeatherData::setPressure(double newPressure) {
        pressure = newPressure;
    }

    void WeatherData::setDescription(const char* newDescription) {
        if (description != nullptr) {
            delete[] description; //free the previous memory (if any)
        }

        description = new char[strlen(newDescription) + 1];
        strcpy(description, newDescription);
    }

    WeatherData& WeatherData::operator=(const WeatherData& other) {
        if (this == &other) {
            return *this; 
        }

        //copy data from the other object
        temperature = other.temperature;
        humidity = other.humidity;
        pressure = other.pressure;

        //free existing description memory
        delete[] description;

        //allocate memory for description and copy string
        description = new char[strlen(other.description) + 1];
        strcpy(description, other.description);

        return *this;
    }
}

