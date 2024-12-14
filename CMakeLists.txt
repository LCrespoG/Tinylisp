cmake_minimum_required(VERSION 3.29)
project(Tinylisp)

set(CMAKE_CXX_STANDARD 20)

# Agregar el directorio donde están los archivos fuente
include_directories(${CMAKE_SOURCE_DIR}/variante)

# Especificar los archivos fuente del proyecto
add_executable(Tinylisp main.cpp variante/Variant.cpp)
