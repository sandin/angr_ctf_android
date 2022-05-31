cmake_minimum_required(VERSION 3.4.1)

project(angr_cfg)

# Android 5.0 and later only support position-independent executables (-fPIE).
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -no-pie")  

add_executable(00_angr_find 00_angr_find/00_angr_find.c)
add_executable(01_angr_avoid 01_angr_avoid/01_angr_avoid.c)
add_executable(02_angr_find_condition 02_angr_find_condition/02_angr_find_condition.c)
add_executable(03_angr_symbolic_registers 03_angr_symbolic_registers/03_angr_symbolic_registers.c)
add_executable(04_angr_symbolic_stack 04_angr_symbolic_stack/04_angr_symbolic_stack.c)
set_target_properties(04_angr_symbolic_stack PROPERTIES COMPILE_FLAGS "-fno-stack-protector")
add_executable(05_angr_symbolic_memory 05_angr_symbolic_memory/05_angr_symbolic_memory.c)
add_executable(06_angr_symbolic_dynamic_memory 06_angr_symbolic_dynamic_memory/06_angr_symbolic_dynamic_memory.c)