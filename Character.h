#pragma once
#include <memory>
#include "Item.h"
#include "Inventory.h"

class Character {
protected:
    int hp, ad, ap, ar, mr, gold;
    Inventory inventory;

public:
    Character(int hp, int ad, int ap, int ar, int mr, int gold)
        : hp(hp), ad(ad), ap(ap), ar(ar), mr(mr), gold(gold) {}

    void increaseAD(int value) { ad += value; }
    void increaseAP(int value) { ap += value; }

    bool spendGold(int price) {
        if (gold >= price) { gold -= price; return true; }
        return false;
    }

    void addItem(std::unique_ptr<Item> item) {
        item->apply(*this);
        inventory.addItem(std::move(item));
    }

    void showInventory() const { inventory.showInventory(); }

    int getGold() const { return gold; }
};

class Player : public Character {
public:
    Player(int hp, int ad, int ap, int ar, int mr, int gold)
        : Character(hp, ad, ap, ar, mr, gold) {}
};
