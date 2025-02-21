#include <iostream>
#include "Game.h"
#include "Player.h"

int main() {
    std::cout << "Welcome to the Casino Number Guessing Game!" << std::endl;
    std::string playerName;
    std::cout << "Enter your name: ";
    std::cin >> playerName;

    Player player(playerName);
    int difficulty;
    std::cout << "Choose difficulty (1: Easy, 2: Medium, 3: Hard): ";
    std::cin >> difficulty;

    Game game(difficulty);
    int guess, attempts = 0;
    bool hasWon = false;

    while (!hasWon) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (game.checkGuess(guess)) {
            std::cout << "Congratulations! You guessed the number!" << std::endl;
            int prize = game.calculatePrize(attempts);
            player.addWinnings(prize);
            std::cout << "You won $" << prize << "!" << std::endl;
            hasWon = true;
        } else {
            std::cout << "Wrong guess! Try again." << std::endl;
        }
    }

    std::cout << "Total winnings: $" << player.getTotalWinnings() << std::endl;
    return 0;
}