#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"

class Inventory {
private:
    Item* items; // Pointer to dynamic array
    int capacity;
    int itemCount;

public:
    Inventory(int capacity);
    ~Inventory(); // Destructor for dynamic memory

    bool addItem(const Item& item);
    void display() const;
};

#endif