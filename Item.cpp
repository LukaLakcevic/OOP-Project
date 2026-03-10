#include "Item.h"
#include "Character.h"

void Weapon::apply(Character& character) {
    character.increaseAD(bonusAD);
    character.increaseAP(bonusAP);
}
