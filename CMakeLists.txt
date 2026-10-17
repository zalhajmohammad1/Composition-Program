cmake_minimum_required(VERSION 3.26)
project(composition)

set(CMAKE_CXX_STANDARD 17)

add_executable(composition ComputerDriver.cpp
        Computer.cpp
        Computer.h
        Memory.cpp
        Memory.h
        Graphics_card.cpp
        Graphics_card.h
        Harddrive.cpp
        Harddrive.h
        Central_processing_unit.cpp
        Central_processing_unit.h)
