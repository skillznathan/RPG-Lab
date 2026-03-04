#include <iostream>
#include "player.h"

int main() {
    // 1. Create Player Objects
    Player hero; // Default constructor
    Player wizard("Gandalf", 120, 15); // Overloaded constructor

    // 2. Display Initial Status
    std::cout << "--- Initial Status ---" << std::endl;
    hero.displayStatus();
    wizard.displayStatus();

    // 3. Simulate Combat
    std::cout << "\n--- Hero takes damage! ---" << std::endl;
    hero.takeDamage(25);
    hero.displayStatus();

    std::cout << "\n--- Wizard takes damage! ---" << std::endl;
    wizard.takeDamage(150); // Massive damage
    wizard.displayStatus();

    std::cout << std::endl; // For spacing before destructors print

    return 0;
}
