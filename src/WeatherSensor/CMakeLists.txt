set(HEADERS WeatherSensor.h)

set(SOURCES WeatherSensor.cpp)

add_library(WeatherSensorLibrary ${SOURCES} ${HEADERS})

target_include_directories(WeatherSensorLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(WeatherSensorLibrary WeatherDataLibrary)