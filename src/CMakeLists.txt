add_library(MainLibrary main.cpp)

add_subdirectory(WeatherData)
add_subdirectory(WeatherSensor)
add_subdirectory(WeatherStation)
add_subdirectory(DataProcessor)

# Include headers and source files from subdirectories
target_include_directories(MainLibrary PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_BINARY_DIR}/WeatherData" "${PROJECT_BINARY_DIR}/WeatherSensor" "${PROJECT_BINARY_DIR}/WeatherStation" "${PROJECT_BINARY_DIR}/DataProcessor")

target_link_libraries(MainLibrary WeatherDataLibrary WeatherSensorLibrary WeatherStationLibrary DataProcessorLibrary)