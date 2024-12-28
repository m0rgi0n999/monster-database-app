#include "database.h"
#include "monster.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

class Database {
public:
    Database() {}

    ~Database() {}

    void addMonster(const Monster& monster) {
        monsters.push_back(monster);
    }

    void removeMonster(const std::string& name) {
        monsters.erase(std::remove_if(monsters.begin(), monsters.end(),
            [&name](const Monster& m) { return m.getName() == name; }), monsters.end());
    }

    void importMonsters(const std::string& filename) {
        std::ifstream file(filename);
        if (!file.is_open()) {
            std::cerr << "Could not open the file: " << filename << std::endl;
            return;
        }

        std::string line;
        while (std::getline(file, line)) {
            // Assuming the line format is "name,type,hitDice,armorClass"
            std::istringstream iss(line);
            std::string name, type;
            int hitDice, armorClass;
            if (iss >> name >> type >> hitDice >> armorClass) {
                addMonster(Monster(name, type, hitDice, armorClass));
            }
        }
    }

    void displayMonsters() const {
        for (const auto& monster : monsters) {
            std::cout << "Name: " << monster.name << ", Type: " << monster.type
                      << ", Hit Dice: " << monster.hitDice << ", Armor Class: " << monster.armorClass << std::endl;
        }
    }

private:
    std::vector<Monster> monsters;
};