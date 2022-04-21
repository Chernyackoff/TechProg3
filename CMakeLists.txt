cmake_minimum_required(VERSION 3.21)
project(Lab3)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab3 main.cpp Parent.hpp Parent.cpp Child.hpp Child.cpp Grandchild.hpp Grandchild.cpp Vector.cpp correct_input.cpp)
