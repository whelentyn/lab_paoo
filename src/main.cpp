#include "WeatherSensor/WeatherSensor.h"
#include "WeatherStation/WeatherStation.h"
#include "DataProcessor/DataProcessor.h"
#include "WeatherData/WeatherData.h"

int main() {
    double temperature = 25.0;
    double humidity = 60.0;
    double pressure = 1013.25;
    const char* description = "Sunny day";

    // Instantiate WeatherData with sample values
    WeatherDataNamespace::WeatherData weatherData(temperature, humidity, pressure, description);

    DataProcessorNamespace::DataProcessor<WeatherDataNamespace::WeatherData> processor;
    processor.processData(weatherData);

    // Create WeatherSensor with WeatherData instance
    WeatherSensorNamespace::WeatherSensor sensor(weatherData);
    WeatherStationNamespace::WeatherStation station;

    // Create DataProcessor for WeatherData

    // Add the sensor to the station
    station.addSensor(sensor);

    // Collect data from the sensor, process it
    station.collectData();

    return 0;
}

