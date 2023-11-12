add_library(MainLibrary main.cpp)

add_subdirectory(WeatherData)
add_subdirectory(WeatherSensor)
add_subdirectory(WeatherStation)

# Include headers and source files from subdirectories
target_include_directories(MainLibrary PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_BINARY_DIR}/WeatherData" "${PROJECT_BINARY_DIR}/WeatherSensor" "${PROJECT_BINARY_DIR}/WeatherStation")

target_link_libraries(MainLibrary WeatherDataLibrary WeatherSensorLibrary WeatherStationLibrary)