cmake_minimum_required(VERSION 3.10)
project(POKUSoUsvit)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(POKUSoUsvit
        Aplikacia.cpp
        Aplikacia.h
        main.cpp
        Obchod.cpp
        Obchod.h
        Sklad.cpp
        Sklad.h
        Surovina.cpp
        Surovina.h
        Vyroba.cpp
        Vyroba.h
        Vyrobok.cpp
        Vyrobok.h Suroviny/Drevo.cpp Suroviny/Drevo.h Recept.h)
