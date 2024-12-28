class Database {
public:
    Database();
    ~Database();

    void addMonster(const Monster& monster);
    void removeMonster(const std::string& monsterName);
    void importMonsters(const std::string& filename);
    void displayMonsters() const;

private:
    std::vector<Monster> monsters;
};