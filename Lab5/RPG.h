#ifndef RPG_H
#define RPG_H

#include <string>
#include <array>

using namespace std;

const int SKILL_SIZE = 2;

class RPG {
public:
    // Constructors
    RPG();
    RPG(string name, int health, int strength, int defense, string type);

    // Member functions
    void setSkills();
    void printAction(string, RPG);
    void updateHealth(int);
    void attack(RPG*);
    void useSkill(RPG*);
    bool isAlive() const;
    string getName() const;
    int getHealth() const;
    int getStrength() const;
    int getDefense() const;

private:
    string name;
    int strength;
    int health;
    int defense;
    string type; //warrior, mage, thief, archer
    array<string, SKILL_SIZE> skills;
};

#endif // RPG_H
