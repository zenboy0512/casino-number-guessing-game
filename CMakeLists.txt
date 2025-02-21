cmake_minimum_required(VERSION 3.10)
project(CasinoNumberGuessingGame)

set(CMAKE_CXX_STANDARD 14)

# Add the src directory to the include path
include_directories(src)

# Build the main game executable
add_executable(casino_game src/main.cpp src/Game.cpp src/Player.cpp)

# Build the test executable
add_executable(test_game tests/test_game.cpp src/Game.cpp src/Player.cpp)