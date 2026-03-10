#include <iostream>
#include "Character.h"
#include "Shop.h"
#include "Item.h"

int main() {
    Player player(250, 50, 0, 15, 10, 500);

    Shop shop;
    shop.addItem(std::make_unique<Sword>());
    shop.addItem(std::make_unique<Staff>());

    shop.showItems();

    std::cout << "\nBuying Sword...\n";
    shop.buyItem("Sword", player);

    std::cout << "\nPlayer inventory:\n";
    player.showInventory();

    std::cout << "\nGold left: " << player.getGold() << "\n";

    return 0;
}
