#include "Game.h"
#include <cstdlib>
#include <ctime>

Game::Game(int level) : difficultyLevel(level) {
    srand(time(0));
    secretNumber = generateRandomNumber();
}

int Game::generateRandomNumber() {
    // TODO: Generate a random number based on difficulty level
    return 0;
}

bool Game::checkGuess(int guess) {
    // TODO: Check if the guess matches the secret number
    return false;
}

int Game::calculatePrize(int attempts) {
    // TODO: Calculate the prize based on attempts and difficulty
    return 0;
}