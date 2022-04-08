cmake_minimum_required(VERSION 3.21)
project(Lab3)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab3 main.cpp Parent.cpp Parent.hpp correct_input.cpp Child.cpp Child.hpp Grandchild.cpp Grandchild.hpp)
