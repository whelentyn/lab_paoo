#include "WeatherSensor/PressureSensor.h"
#include "WeatherSensor/TemperatureSensor.h"
#include "WeatherStation.h"
#include "WeatherData/WeatherData.h"

int main() {
    // Create a WeatherData instance
    WeatherDataNamespace::WeatherData weatherData(25.0, 60.0, 1013.2, "Sunny day");

    // Create instances of sensors
    WeatherSensorNamespace::PressureSensor pressureSensor;
    WeatherSensorNamespace::TemperatureSensor temperatureSensor;

    // Create instances of the WeatherStation for each type of sensor
    WeatherStationNamespace::WeatherStation<WeatherSensorNamespace::PressureSensor> pressureStation;
    WeatherStationNamespace::WeatherStation<WeatherSensorNamespace::TemperatureSensor> temperatureStation;

    // Add sensors to their respective stations
    pressureStation.addSensor(pressureSensor);
    temperatureStation.addSensor(temperatureSensor);

    // Collect and display data from each station
    std::cout << "Pressure Station Data:" << std::endl;
    pressureStation.collectData();

    std::cout << "\nTemperature Station Data:" << std::endl;
    temperatureStation.collectData();

    return 0;
}
