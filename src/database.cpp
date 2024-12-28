#include "database.h"
#include "monster.h"
#include "utils.h" // Include the utils header
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

Database::Database() {}

Database::~Database() {}

void Database::addMonster(const Monster& monster) {
    monsters.push_back(monster);
}

void Database::removeMonster(const std::string& name) {
    monsters.erase(std::remove_if(monsters.begin(), monsters.end(),
        [&name](const Monster& m) { return m.getName() == name; }), monsters.end());
}

void Database::importMonsters(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Could not open the file: " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        // Assuming the line format is "name,type,hitDice,armorClass"
        std::vector<std::string> tokens = split(line, ',');
        if (tokens.size() == 4) {
            std::string name = tokens[0];
            std::string type = tokens[1];
            int hitDice = std::stoi(tokens[2]);
            int armorClass = std::stoi(tokens[3]);
            addMonster(Monster(name, type, hitDice, armorClass));
        }
    }
}

void Database::displayMonsters() const {
    for (const auto& monster : monsters) {
        std::cout << "Name: " << monster.name << ", Type: " << monster.type
                  << ", Hit Dice: " << monster.hitDice << ", Armor Class: " << monster.armorClass << std::endl;
    }
}