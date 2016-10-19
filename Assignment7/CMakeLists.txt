cmake_minimum_required(VERSION 3.6)
project(Assignment7)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Account.cpp Account.h)
add_executable(Assignment7 ${SOURCE_FILES})