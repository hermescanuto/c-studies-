cmake_minimum_required(VERSION 3.22)
project(My_First_Class)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(app main.cpp mylog.cpp)
