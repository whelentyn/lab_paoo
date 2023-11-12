set(HEADERS DataProcessor.h)

set(SOURCES DataProcessor.cpp)

add_library(DataProcessorLibrary ${SOURCES} ${HEADERS})

target_include_directories(DataProcessorLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})