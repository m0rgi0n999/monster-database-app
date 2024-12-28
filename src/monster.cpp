#include "monster.h"

Monster::Monster(const std::string& name, const std::string& type, int hitDice, int armorClass)
    : name(name), type(type), hitDice(hitDice), armorClass(armorClass) {
    // Constructor implementation...
}

std::string Monster::getName() const {
    return name;
}

std::string Monster::getType() const {
    return type;
}

int Monster::getHitDice() const {
    return hitDice;
}

int Monster::getArmorClass() const {
    return armorClass;
}

int Monster::getDamage() const {
    return damage;
}

void Monster::setName(const std::string& name) {
    this->name = name;
}

void Monster::setType(const std::string& type) {
    this->type = type;
}

void Monster::setHitDice(int hitDice) {
    this->hitDice = hitDice;
}

void Monster::setArmorClass(int armorClass) {
    this->armorClass = armorClass;
}

void Monster::setDamage(int damage) {
    this->damage = damage;
}