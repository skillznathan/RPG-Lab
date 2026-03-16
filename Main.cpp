#include "Player.h"
#include "Item.h"
#include <iostream>

int main() {
    // 1. Create Player
    Player hero("Hero", 100);

    // 2. Create Items
    Item i1("Sword", 10);
    Item i2("Shield", 15);
    Item i3("Potion", 5);

    std::cout << "--- Adding items to hero's inventory ---" << std::endl;
    
    // 3. Add items
    hero.addItem(i1);
    hero.addItem(i2);
    hero.addItem(i3);

    // 4. Display Inventory
    hero.showInventory();

    // 5. Test Static Member
    std::cout << "Total items added to inventories: " << Item::getTotalItems() << std::endl;

    return 0;
}