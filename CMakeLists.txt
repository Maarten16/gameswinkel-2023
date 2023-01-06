cmake_minimum_required(VERSION 3.22)
project(gameswinkel)

set(CMAKE_CXX_STANDARD 23)

add_executable(gameswinkel main.cpp Game.cpp Game.h Person.cpp Person.h)
