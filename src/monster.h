#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster {
public:
    Monster(const std::string& name, const std::string& type, int hitDice, int armorClass, int damage);
    
    std::string getName() const;
    std::string getType() const;
    int getHitDice() const;
    int getArmorClass() const;
    int getDamage() const;

    void setName(const std::string& name);
    void setType(const std::string& type);
    void setHitDice(int hitDice);
    void setArmorClass(int armorClass);
    void setDamage(int damage);

private:
    std::string name;
    std::string type;
    int hitDice;
    int armorClass;
    int damage;
};

#endif // MONSTER_H