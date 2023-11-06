#include <iostream>
#include "WeatherSensor/WeatherSensor.h"
#include "WeatherData/WeatherData.h"
#include "WeatherStation/WeatherStation.h"
#include "WeatherData/WeatherDataWind.h"

using namespace std;
using namespace WeatherDataNamespace;

int main() {
    WeatherDataWind windData = *new WeatherDataWind(20.0, 50.0, 1013.2, "Windy day", 30);

    //acces super class methods through an instance of the subclass
    cout << "Temperature: " << windData.getTemperature() << "°C" << endl;
    cout << "Humidity: " << windData.getHumidity() << "%" << endl;
    cout << "Pressure: " << windData.getPressure() << "hPa" << endl;
    cout << "Description: " << windData.getDescription() << endl;

    cout << "Wind Speed: " << windData.getWindSpeed() << " mph" << endl;

    //create a weather instance 
    WeatherData weather1(25.0, 60.0, 1010.0, "Sunny day");

    //use the move constructor to create a second instance
    WeatherData weather2(move(weather1));

    cout << "Weather2 - Temperature: " << weather1.getTemperature() << "°C" << std::endl;
    cout << "Weather2 - Humidity: " << weather1.getHumidity() << "%" << std::endl;
    cout << "Weather2 - Pressure: " << weather1.getPressure()<< "hPa" << std::endl;
    cout << "Weather2 - Description: " << weather1.getDescription() << std::endl;

    return 0;
}
