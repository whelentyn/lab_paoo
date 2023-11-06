set(HEADERS IWeatherData.h WeatherData.h WeatherDataWind.h)

set(SOURCES WeatherData.cpp WeatherDataWind.cpp)

add_library(WeatherDataLibrary ${SOURCES} ${HEADERS})

target_include_directories(WeatherDataLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})