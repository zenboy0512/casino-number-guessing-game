#ifndef GAME_H
#define GAME_H

#include <string>

class Game {
private:
    int secretNumber;
    int difficultyLevel;
public:
    Game(int level);
    int generateRandomNumber();
    bool checkGuess(int guess);
    int calculatePrize(int attempts);
};

#endif