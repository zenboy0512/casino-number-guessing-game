#include "Game.h"
#include <cassert>

void testGame() {
    Game game(1); // Easy difficulty
    assert(game.generateRandomNumber() >= 1 && game.generateRandomNumber() <= 10);
    assert(game.checkGuess(5) == false); // Let 5 is not the secret number
}

int main() {
    testGame();
    return 0;
}