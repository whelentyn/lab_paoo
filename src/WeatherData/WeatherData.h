#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include <iostream>
#include <utility>
#include <cstring> // Include <cstring> for string functions
#include "../WeatherData/IWeatherData.h"

using namespace std;

namespace WeatherDataNamespace {
    class WeatherData : public IWeatherData {
    private:
        double temperature;
        double humidity;
        double pressure;
        char* description;

    public:
        //Constructor
        WeatherData(double temp, double hum, double press, const char* desc) :
            temperature(temp), humidity(hum), pressure(press) {
                // Allocate memory for data description and copy the string
                description = new char[strlen(desc) + 1];
                strcpy(description, desc);
            }

        //Copy constructor
        WeatherData(const WeatherData &other) :
            temperature(other.temperature), humidity(other.humidity), pressure(other.pressure) {
                cout<<"WeatherData copy constructor called"<<endl;
                description = new char[strlen(other.description) + 1];
                strcpy(description, other.description);
            }

        //Destructor to free dynamic memory
        ~WeatherData() {
            cout<<"WeatherData deconstructor called"<<endl;
            delete[] description;
        }

        //Move constructor
        WeatherData(WeatherData&& other) noexcept :
            temperature(0.0), humidity(0.0), pressure(0.0), description(nullptr) {
            // Use the resources from the other object
            cout<<"WeatherData move constructor called"<<endl;
            *this = std::move(other);
        }


        double getTemperature() override;
        double getHumidity() override;
        double getPressure() override;
        const char* getDescription() override;

        void setTemperature(double temp) override; 
        void setHumidity(double hum) override;
        void setPressure(double press) override;
        void setDescription(const char* desc) override;

        WeatherData& operator=(const WeatherData& other);
    };
}
#endif
