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

    // Validate difficulty input
    while (difficulty < 1 || difficulty > 3) {
        std::cout << "Invalid difficulty! Choose 1 (Easy), 2 (Medium), or 3 (Hard): ";
        std::cin >> difficulty;
    }

    Game game(difficulty);
    int guess, attempts = 0;
    bool hasWon = false;

    while (!hasWon) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        // Validate guess input
        if (std::cin.fail()) {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input! Please enter a number." << std::endl;
            continue;
        }

        attempts++;

        if (game.checkGuess(guess)) {
            std::cout << "Congratulations! You guessed the number!" << std::endl;
            int prize = game.calculatePrize(attempts);
            player.addWinnings(prize);
            std::cout << "You won $" << prize << "!" << std::endl;
            hasWon = true; // Terminate the loop
        } else {
            std::cout << "Wrong guess! Try again." << std::endl;
        }
    }

    std::cout << "Total winnings: $" << player.getTotalWinnings() << std::endl;
    return 0;
}