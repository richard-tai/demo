
cmake_minimum_required(VERSION 3.0)

project(commonstatic)

file(GLOB SOURCE_FILES ./*.cc)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})
