# cmake_minimum_required(VERSION <specify CMake version here>)
project(CppPrjs)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CppPrjs
        FirstStep/First.cpp
        )
