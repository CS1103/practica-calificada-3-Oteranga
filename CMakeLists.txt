cmake_minimum_required(VERSION 3.13.4)
project(pc3)

set(CMAKE_CXX_STANDARD 17)
if(WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wpedantic -Wextra")
endif()

add_executable(pc3 main.cpp subastas.h subastas.cpp ordenar.cpp leer_crear.cpp)