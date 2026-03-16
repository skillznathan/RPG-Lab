#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Inventory.h"

class Player {
private:
    std::string name;
    int health;
    Inventory inventory; // Aggregation

public:
    // Constructor updated to initialize inventory
    Player(std::string name, int health);
    ~Player();

    void showInventory() const;
    void addItem(const Item& item);
};

#endif