int main() {
    std::cout << "Welcome to the Casino Number Guessing Game!" << std::endl;

    // Check if running in a non-interactive environment (e.g., Jenkins)
    bool isNonInteractive = (std::getenv("JENKINS_HOME") != nullptr);

    std::string playerName;
    int difficulty;

    if (isNonInteractive) {
        // Use default values for non-interactive mode
        playerName = "Jenkins";
        difficulty = 1; // Easy
        std::cout << "Running in non-interactive mode. Using default values." << std::endl;
    } else {
        // Prompt for user input in interactive mode
        std::cout << "Enter your name: ";
        std::cin >> playerName;

        std::cout << "Choose difficulty (1: Easy, 2: Medium, 3: Hard): ";
        std::cin >> difficulty;

        // Validate difficulty input
        while (difficulty < 1 || difficulty > 3) {
            std::cout << "Invalid difficulty! Choose 1 (Easy), 2 (Medium), or 3 (Hard): ";
            std::cin >> difficulty;
        }
    }

    // TODO: Implement the game logic
}