cmake_minimum_required(VERSION 3.16)

project(ICBK_CPP_Homework)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenCV REQUIRED)

add_executable(opencv_homework main.cpp)

target_include_directories(opencv_homework PRIVATE ${OpenCV_INCLUDE_DIRS})

target_link_libraries(opencv_homework PRIVATE ${OpenCV_LIBS})
