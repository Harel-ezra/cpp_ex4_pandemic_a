cmake_minimum_required(VERSION 3.19)
project(untitled3)

set(CMAKE_CXX_STANDARD 14)

add_executable(pandemic-a Demo1.cpp Demo2.cpp Board.hpp Board.cpp City.hpp City.cpp Color.hpp Color.cpp Player.hpp Player.cpp
        Dispatcher.hpp Dispatcher.cpp FieldDoctor.hpp FieldDoctor.cpp GeneSplicer.hpp GeneSplicer.cpp
        Medic.hpp Medic.cpp OperationsExpert.hpp OperationsExpert.cpp Researcher.hpp Researcher.cpp Scientist.hpp Scientist.cpp Virologist.hpp Virologist.cpp Test.cpp)