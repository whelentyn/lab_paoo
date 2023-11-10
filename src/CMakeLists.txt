add_subdirectory(WeatherData)
add_subdirectory(WeatherSensor)
add_subdirectory(WeatherStation)

add_executable(project_paoo_vb main.cpp)

# Include headers and source files from subdirectories
target_include_directories(project_paoo_vb PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_BINARY_DIR}/WeatherData" "${PROJECT_BINARY_DIR}/WeatherSensor" "${PROJECT_BINARY_DIR}/WeatherStation")

target_link_libraries(project_paoo_vb WeatherDataLibrary)