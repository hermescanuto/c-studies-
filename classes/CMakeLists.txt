project(My_First_Class)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(app main.cpp mylog.hpp)
