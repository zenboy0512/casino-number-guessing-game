#include "Player.h"

Player::Player(std::string playerName) : name(playerName), totalWinnings(0) {}

void Player::addWinnings(int amount) {
    totalWinnings += amount;
}

int Player::getTotalWinnings() {
    return totalWinnings;
}