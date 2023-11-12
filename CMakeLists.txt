cmake_minimum_required(VERSION 3.0.0)
project(proiect_paoo VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

# Specify the required C++ standard
if(CMAKE_VERSION GREATER "3.1.2") 
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
else()
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    endif()    
endif()   

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

add_subdirectory(src)

add_executable(proiect_paoo src/main.cpp)

target_link_libraries(proiect_paoo MainLibrary WeatherDataLibrary WeatherSensorLibrary WeatherStationLibrary)

include(CPack)
