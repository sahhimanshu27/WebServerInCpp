cmake_minimum_required(VERSION 3.30)
project(WebServerCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(WebServerCpp main.cpp
        Networking/SimpleSocket.cpp
        Networking/SimpleSocket.h
        Networking/BindingSocket.cpp
        Networking/BindingSocket.h)
