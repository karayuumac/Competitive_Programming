cmake_minimum_required(VERSION 3.13)
project(Competitive_Programming)

set(CMAKE_CXX_STANDARD 14)

#[[
add_executable(Competitive_Programming
            APG4b/A.cpp
            AOJ/*
        )]]
add_subdirectory(ABC_200)
add_subdirectory(AOJ)
add_subdirectory(APG4b)
add_subdirectory(NewYearVC)