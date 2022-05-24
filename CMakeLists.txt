cmake_minimum_required(VERSION 3.4.1)

project(angr_cfg)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -no-pie")  

add_executable(00_angr_find 00_angr_find/00_angr_find.c)
add_executable(01_angr_avoid 01_angr_avoid/01_angr_avoid.c)
add_executable(02_angr_find_condition 02_angr_find_condition/02_angr_find_condition.c)