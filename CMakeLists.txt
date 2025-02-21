cmake_minimum_required(VERSION 3.10)
project(CasinoNumberGuessingGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(casino_game src/main.cpp src/Game.cpp src/Player.cpp)
add_executable(test_game tests/test_game.cpp src/Game.cpp src/Player.cpp)