#include "WeatherSensor/WeatherSensor.h"
#include "WeatherStation/WeatherStation.h"
#include "DataProcessor/DataProcessor.h"
#include "WeatherData/WeatherData.h"
#include <memory>

int main() {
    double temperature = 25.0;
    double humidity = 60.0;
    double pressure = 1013.25;
    const char* description = "Sunny day";

    //create a unique pointer using std::make_unique
    std::unique_ptr<WeatherDataNamespace::WeatherData> uniqueWeatherDataPtr = std::make_unique<WeatherDataNamespace::WeatherData>(temperature, humidity, pressure, description);

    //create a shared pointer using std::make_shared
    std::shared_ptr<WeatherDataNamespace::WeatherData> sharedWeatherDataPtr = std::make_shared<WeatherDataNamespace::WeatherData>(22.5, 55.0, 1012.5, "Partly cloudy");


    DataProcessorNamespace::DataProcessor<WeatherDataNamespace::WeatherData> processor;

    processor.processData(*uniqueWeatherDataPtr);


    WeatherSensorNamespace::WeatherSensor uniqueWeatherSensor(*uniqueWeatherDataPtr);


    WeatherSensorNamespace::WeatherSensor sharedWeatherSensor(*sharedWeatherDataPtr);


    WeatherStationNamespace::WeatherStation station;

    // Add sensors to the station
    station.addSensor(uniqueWeatherSensor);
    station.addSensor(sharedWeatherSensor);

    // Collect data from the sensors
    station.collectData();

    //uniqueWeatherDataPtr will be automatically released when it goes out of scope
    //sharedWeatherDataPtr is shared and will stay valid even after going out of scope

    return 0;
}
