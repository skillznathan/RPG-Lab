#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

class Player {
private:
    // Attributes
    std::string name;
    int health;
    int maxHealth;
    int attackPower;

public:
    // Constructors & Destructor
    Player(); // Default
    Player(std::string name, int health, int attackPower); // Overloaded
    ~Player();

    // Methods
    void takeDamage(int damage);
    void displayStatus() const;

    // Getters (Accessors)
    std::string getName() const;
    int getHealth() const;
    int getMaxHealth() const;
    int getAttackPower() const;
};

#endif