#ifndef DATABASE_H
#define DATABASE_H

#include <vector> // Include the vector header
#include "monster.h" // Include the Monster header file

class Database {
public:
    Database();
    ~Database();

    void addMonster(const Monster& monster);
    void removeMonster(const std::string& monsterName);
    void importMonsters(const std::string& filename);
    void displayMonsters() const;
    void addMonsterFromInput(); // New method

private:
    std::vector<Monster> monsters;
};

#endif // DATABASE_H