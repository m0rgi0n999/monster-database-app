cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MonsterDatabaseApp)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(MonsterDatabaseApp
    src/main.cpp
    src/database.cpp
    src/monster.cpp
    src/utils.cpp
)

# Include directories
include_directories(src)