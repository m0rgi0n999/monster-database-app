#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster {
public:
    std::string name;
    std::string type;
    int hitDice;
    int armorClass;

    Monster(const std::string& name, const std::string& type, int hitDice, int armorClass);
    // Other methods...
};

#endif // MONSTER_H