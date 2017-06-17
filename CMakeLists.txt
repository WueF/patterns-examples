cmake_minimum_required(VERSION 3.7)
project(internship_patterns)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Beverage.h BeverageAddition.h Milk.cpp Milk.h Coffee.h Sugar.cpp Sugar.h)
add_executable(internship_patterns ${SOURCE_FILES})