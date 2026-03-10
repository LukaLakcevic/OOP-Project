#pragma once
#include <vector>
#include <memory>
#include <iostream>
#include "Item.h"
#include "Character.h"

class Shop {
private:
    std::vector<std::unique_ptr<Item>> items;

public:
    void addItem(std::unique_ptr<Item> item);

    void showItems() const;

    void buyItem(const std::string& name, Player& player);
};
