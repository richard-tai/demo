
cmake_minimum_required(VERSION 3.0)

project(sharedcat)

file(GLOB SOURCE_FILES ./*.cc)

add_subdirectory(static_lib)
add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} commonstatic)
