#include "player.h"
#include <iostream>
#include <string>
#include <algorithm> // For std::max

// Default Constructor
Player::Player() {
    name = "Hero";
    health = 100;
    maxHealth = 100;
    attackPower = 10;
    std::cout << "Default constructor called." << std::endl;
}

// Overloaded Constructor
Player::Player(std::string name, int health, int attackPower) {
    this->name = name;
    this->health = health;
    this->maxHealth = health; // Set maxHealth to starting health
    this->attackPower = attackPower;
    std::cout << "Overloaded constructor called." << std::endl;
}

// Destructor
Player::~Player() {
    std::cout << "The object for Player " << name << " has been destroyed." << std::endl;
}

// Take Damage Method
void Player::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
    
    if (health == 0) {
        std::cout << name << " falls to the ground, defeated." << std::endl;
    }
}

// Display Status Method
void Player::displayStatus() const {
    std::cout << "[" << name << "] - HP: " << health << "/" << maxHealth << std::endl;
}

// Getter Functions
std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getMaxHealth() const { return maxHealth; }
int Player::getAttackPower() const { return attackPower; }




/*
@skillznathan ➜ /workspaces/Lab-6-RPGPART1 (main) $ g++ main.cpp player.cpp -o program
@skillznathan ➜ /workspaces/Lab-6-RPGPART1 (main) $ ./program
Default constructor called.
Overloaded constructor called.
--- Initial Status ---
[Hero] - HP: 100/100
[Gandalf] - HP: 120/120

--- Hero takes damage! ---
[Hero] - HP: 75/100

--- Wizard takes damage! ---
Gandalf falls to the ground, defeated.
[Gandalf] - HP: 0/120

The object for Player Gandalf has been destroyed.
The object for Player Hero has been destroyed.
@skillznathan ➜ /workspaces/Lab-6-RPGPART1 (main) $ 
*/