
cmake_minimum_required(VERSION 3.0)

project(testsharedstatic)

file(GLOB SOURCE_FILES ./*.cc)

add_definitions("-Wall -g -std=c++11")
add_definitions("-fPIC")
add_definitions("-O0")

include_directories(include)

add_subdirectory(shared_lib_cat)
add_subdirectory(shared_lib_dog)


add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} sharedcat shareddog pthread)
