#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    int totalWinnings;
public:
    Player(std::string playerName);
    void addWinnings(int amount);
    int getTotalWinnings();
};

#endif