cmake_minimum_required(VERSION 3.21)
project(CommandeMcdo C)

set(CMAKE_C_STANDARD 99)

# Compile and link the program
add_executable(CommandeMcdo main.c commande.c)

# Compile definition
target_compile_definitions(CommandeMcdo PRIVATE TEST_FORMATTED=1)


# How to include packages json-c to my project
# https://cmake.org/cmake/help/latest/command/include_directories.html
# https://cmake.org/cmake/help/latest/command/add_subdirectory.html


