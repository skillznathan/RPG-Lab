#include "Inventory.h"
#include <iostream>

Inventory::Inventory(int capacity) 
    : items(new Item[capacity]), capacity(capacity), itemCount(0) {
    // Memory allocated in initialization list
}

Inventory::~Inventory() {
    delete[] items; // Free dynamic memory
    std::cout << "Inventory has been destroyed." << std::endl;
}

bool Inventory::addItem(const Item& item) {
    if (itemCount < capacity) {
        items[itemCount] = item;
        itemCount++;
        Item::incrementTotalItems();
        std::cout << "An item was added: " << item.getName() << std::endl;
        return true;
    }
    return false; // Full
}

void Inventory::display() const {
    std::cout << "Inventory (" << itemCount << "/" << capacity << "):" << std::endl;
    for (int i = 0; i < itemCount; ++i) {
        std::cout << "  ";
        items[i].display();
    }
}