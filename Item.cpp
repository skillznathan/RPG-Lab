#include "Item.h"

// Initialize static member
int Item::totalItems = 0;

Item::Item(std::string name, int value) : name(name), value(value) {
    // Constructor body empty
}

int Item::getTotalItems() {
    return totalItems;
}

void Item::incrementTotalItems() {
    totalItems++;
}

std::string Item::getName() const { return name; }
int Item::getValue() const { return value; }

void Item::display() const {
    std::cout << "[" << name << "] (Value: " << value << ")" << std::endl;
}
