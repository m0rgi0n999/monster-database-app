#include <iostream>
#include "database.h"

void displayMenu() {
    std::cout << "1. Add monster manually\n";
    std::cout << "2. Import monsters from file\n";
    std::cout << "3. Display all monsters\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    Database monsterDatabase;
    int choice;

    while (true) {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore(); // Ignore the newline character left in the buffer

        switch (choice) {
            case 1:
                monsterDatabase.addMonsterFromInput();
                break;
            case 2: {
                std::string filename;
                std::cout << "Enter filename: ";
                std::getline(std::cin, filename);
                monsterDatabase.importMonsters(filename);
                break;
            }
            case 3:
                monsterDatabase.displayMonsters();
                break;
            case 4:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}