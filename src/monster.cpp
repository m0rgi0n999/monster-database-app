#include "monster.h"

Monster::Monster(const std::string& name, const std::string& type, int hitDice, int armorClass)
    : name(name), type(type), hitDice(hitDice), armorClass(armorClass) {
    // Constructor implementation...
}

std::string Monster::getName() const {
    return name;
}