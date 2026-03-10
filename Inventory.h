#pragma once
#include <vector>
#include <memory>
#include <iostream>
#include "Item.h"

class Inventory {
private:
    std::vector<std::unique_ptr<Item>> items;

public:
    void addItem(std::unique_ptr<Item> item) {
        items.push_back(std::move(item));
    }

    void showInventory() const {
        std::cout << "Inventory:\n";
        for (const auto& item : items) {
            std::cout << "- " << item->name << "\n";
        }
    }
};
