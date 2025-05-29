cmake_minimum_required(VERSION 3.28)
project(Hanacoin)

set(CMAKE_CXX_STANDARD 17)

add_executable(Hanacoin main.cpp
        sha256.h
        sha256.cpp
        block.h
        block.cpp
        blockchain.h
        blockchain.cpp)
