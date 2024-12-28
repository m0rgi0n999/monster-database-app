#include "database.h"
#include "monster.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Database {
public:
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
            // Assuming the line format is "name,type,stats"
            std::istringstream iss(line);
            std::string name, type, stats;
            if (std::getline(iss, name, ',') && std::getline(iss, type, ',') && std::getline(iss, stats)) {
                Monster monster(name, type, stats);
                addMonster(monster);
            }
        }
        file.close();
    }

private:
    std::vector<Monster> monsters;
};