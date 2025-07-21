cmake_minimum_required(VERSION 3.10)
project(HelloApp
    VERSION 0.0.1
    DESCRIPTION "A simple Hello World application"
    LANGUAGES CXX )


add_executable(hello_app main.cpp)
target_compile_features(hello_app PRIVATE cxx_std_20)