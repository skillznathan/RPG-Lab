#include "Player.h"
#include <iostream>

using namespace std;

// Updated Constructor with initializer list for inventory
Player::Player(string name, int health) 
    : name(name), health(health), inventory(5) { // Giving capacity of 5
    cout << "Default constructor called for Player." << endl;
}

Player::~Player() {
    cout << "Player " << name << " has been destroyed." << endl;
}

void Player::showInventory() const {
    cout << "--- Hero's Inventory ---" << endl;
    inventory.display();
}

void Player::addItem(const Item& item) {
    if(inventory.addItem(item)) {
        cout << "Hero found a ";
        item.display();
    } else {
        cout << "Inventory full! Cannot add " << item.getName() << endl;
    }
}