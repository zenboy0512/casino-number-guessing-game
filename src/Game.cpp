#include "Game.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Game::Game(int level) : difficultyLevel(level) {
    srand(time(0));
    secretNumber = generateRandomNumber();
}

int Game::generateRandomNumber() {
    int maxNumber;
    switch (difficultyLevel) {
        case 1: maxNumber = 10; break; // Easy
        case 2: maxNumber = 50; break; // Medium
        case 3: maxNumber = 100; break; // Hard
        default: maxNumber = 10;
    }
    int randomNumber = rand() % maxNumber + 1;
    std::cout << "Generated random number: " << randomNumber << std::endl;
    return randomNumber;
}

bool Game::checkGuess(int guess) {
    return guess == secretNumber;
}

int Game::calculatePrize(int attempts) {
    int basePrize;
    switch (difficultyLevel) {
        case 1: basePrize = 100; break; // Easy
        case 2: basePrize = 500; break; // Medium
        case 3: basePrize = 1000; break; // Hard
        default: basePrize = 100;
    }
    return basePrize / attempts;
}