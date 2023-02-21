cmake_minimum_required(VERSION 3.23.2)
project(C__STL)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)

add_executable(CppContainers
        run.cpp
        STL_container.h STL_vector.cpp STL_stack.cpp STL_queue.cpp STL_deque.cpp STL_priority_queue.cpp STL_map.cpp STL_set.cpp STL_string.cpp STL_pair.cpp)
