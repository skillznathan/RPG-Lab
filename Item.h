#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

class Item {
private:
    static int totalItems; // Tracks total items added to inventories
    std::string name;
    int value;

public:
    Item(std::string name = "Scrap", int value = 0);
    
    // Static functions
    static int getTotalItems();
    static void incrementTotalItems();

    // Accessors
    std::string getName() const;
    int getValue() const;

    void display() const;
};

#endif