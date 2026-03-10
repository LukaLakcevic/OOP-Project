#pragma once
#include <string>

class Character; // forward declaration

class Item {
public:
    std::string name;
    int price;
protected:
    int bonusAD;
    int bonusAP;

public:
    Item(const std::string& name, int price, int ad, int ap)
        : name(name), price(price), bonusAD(ad), bonusAP(ap) {}

    virtual void apply(Character& character) = 0;
    virtual ~Item() = default;
};

class Weapon : public Item {
public:
    Weapon(const std::string& name, int price, int ad, int ap)
        : Item(name, price, ad, ap) {}

    void apply(Character& character) override; // def. u Item.cpp
};

class Sword : public Weapon {
public:
    Sword() : Weapon("Sword", 300, 20, 0) {}
};

class Staff : public Weapon {
public:
    Staff() : Weapon("Staff", 350, 0, 25) {}
};
