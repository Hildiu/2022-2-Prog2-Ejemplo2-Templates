cmake_minimum_required(VERSION 3.17)
project(Ejemplo1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ejemplo1 main.cpp Tipos.h CRectangulo.cpp CRectangulo.h CCirculo.cpp CCirculo.h)