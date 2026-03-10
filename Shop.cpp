#include "Shop.h"

void Shop::addItem(std::unique_ptr<Item> item) {
    items.push_back(std::move(item));
}

void Shop::showItems() const {
    std::cout << "Shop items:\n";
    for (const auto& item : items)
        std::cout << item->name << " - " << item->price << " gold\n";
}

void Shop::buyItem(const std::string& name, Player& player) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if ((*it)->name == name) {
            if (player.spendGold((*it)->price)) {
                player.addItem(std::move(*it));
                items.erase(it);
                std::cout << "Item bought!\n";
            } else {
                std::cout << "Not enough gold!\n";
            }
            return;
        }
    }
    std::cout << "Item not found.\n";
}
