#pragma once
#include "Character.h"

class Warrior : public Player {
public:
    Warrior() : Player(250, 50, 0, 15, 10, 0) {}
    ~Warrior(){}
};

class Mage : public Player {
public:    
    Mage() : Player(250, 0, 50, 10, 15, 0){}
    ~Mage(){}
};

class Goblin : public Enemy{
public:
    Goblin() : Enemy(120, 35, 10, 5, 5, 100){}
    ~Goblin() {}
};

class LargeGoblin : public Enemy{
public:
    LargeGoblin() : Enemy(250, 60, 20, 10, 10, 500){}
    ~LargeGoblin() {}
};

class GoblinBoss : public Enemy{
public:
    GoblinBoss() : Enemy(1500, 100, 50, 100, 100, 3500){}
    ~GoblinBoss(){}
};
