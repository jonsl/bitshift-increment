cmake_minimum_required(VERSION 3.10)
project(bitshift_increment C)

set(CMAKE_C_STANDARD 99)

set(INCLUDE_DIRS
        src/)

set(SRCS
        src/increment_by_one_abs.c
        src/increment_by_one_abs.h
        src/main.c)

add_executable(bitshift_increment ${SRCS})

target_include_directories(bitshift_increment PRIVATE ${INCLUDE_DIRS})
