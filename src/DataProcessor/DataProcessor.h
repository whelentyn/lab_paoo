#include "../WeatherData/IWeatherData.h"

namespace DataProcessorNamespace {
    template <typename T>
    class DataProcessor {
    public:
        void processData(const T& data);
    };
}