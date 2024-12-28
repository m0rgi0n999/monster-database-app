#include <iostream>
#include "database.h"

int main() {
    Database monsterDatabase;
    int choice;

    do {
        std::cout << "Monster Database Application\n";
        std::cout << "1. Add Monster\n";
        std::cout << "2. Remove Monster\n";
        std::cout << "3. Import Monsters from File\n";
        std::cout << "4. Display Monsters\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string name, type;
                int hitDice, armorClass;
                std::cout << "Enter Monster Name: ";
                std::cin >> name;
                std::cout << "Enter Monster Type: ";
                std::cin >> type;
                std::cout << "Enter Hit Dice: ";
                std::cin >> hitDice;
                std::cout << "Enter Armor Class: ";
                std::cin >> armorClass;
                monsterDatabase.addMonster(Monster(name, type, hitDice, armorClass));
                break;
            }
            case 2: {
                std::string name;
                std::cout << "Enter Monster Name to Remove: ";
                std::cin >> name;
                monsterDatabase.removeMonster(name);
                break;
            }
            case 3: {
                std::string filename;
                std::cout << "Enter Filename to Import: ";
                std::cin >> filename;
                monsterDatabase.importMonsters(filename);
                break;
            }
            case 4:
                monsterDatabase.displayMonsters();
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}