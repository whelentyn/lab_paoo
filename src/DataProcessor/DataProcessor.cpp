#include "DataProcessor.h"
#include <iostream>
#include "../WeatherData/WeatherData.h"

namespace DataProcessorNamespace {
    template <typename T>
    void DataProcessor<T>::processData(const T& data) {
        // Example template method for processing data
        std::cout << "Processing data...\n";
        std::cout << "Temperature: " << data.getTemperature() << "°C\n";
        std::cout << "Humidity: " << data.getHumidity() << "%\n";
        std::cout << "Pressure: " << data.getPressure() << " hPa\n";
        std::cout << "Description: " << data.getDescription() << "\n";
    }

    // Explicit instantiation for WeatherData
    template class DataProcessor<WeatherDataNamespace::WeatherData>;
    // Add explicit instantiations for other data types if needed
}
