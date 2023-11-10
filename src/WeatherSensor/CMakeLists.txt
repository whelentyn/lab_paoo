set(HEADERS IWeatherSensor.h PressureSensor.h TemperatureSensor.h)

set(SOURCES PressureSensor.cpp TemperatureSensor.cpp)

add_library(WeatherDataLibrary ${SOURCES} ${HEADERS})

target_include_directories(WeatherSensorLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(WeatherSensorLibrary WeatherDataLibrary)