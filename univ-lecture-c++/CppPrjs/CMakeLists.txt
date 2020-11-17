# cmake_minimum_required(VERSION <specify CMake version here>)
project(CppPrjs)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-fexec-charset=CP949")

include_directories(.)

add_executable(CppPrjs
        Counter/Counter.cpp
        )
