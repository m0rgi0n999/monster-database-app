#include <iostream>
#include "database.h"

int main() {
    Database monsterDatabase;

    std::string name = "Ant, Giant";
    std::string type = "Neutral";
    int hitDice = 4;
    int armorClass = 3;

    monsterDatabase.addMonster(Monster(name, type, hitDice, armorClass));

    monsterDatabase.displayMonsters();

    return 0;
}