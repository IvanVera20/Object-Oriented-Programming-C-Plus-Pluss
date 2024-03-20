#include <iostream>
#include "RPG.h"

using namespace std;

void gameLoop(RPG* p1, RPG* p2);
void displayEnd(RPG p1, RPG p2);
void displayStats(RPG p1, RPG p2);

int main() {
    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");
    RPG p2 = RPG();

    gameLoop(&p1, &p2);
    displayEnd(p1, p2);

    return 0;
}

void gameLoop(RPG* p1, RPG* p2) {
    while (p1->isAlive() && p2->isAlive()) {
        displayStats(*p1, *p2);
        p1->useSkill(p2);
        if (!p2->isAlive()) {
            break;
        }
        RPG* temp = p1;
        p1 = p2;
        p2 = temp;
    }
}

void displayEnd(RPG p1, RPG p2) {
    if (p1.isAlive()) {
        cout << p1.getName() << " wins!" << endl;
    } else {
        cout << p2.getName() << " wins!" << endl;
    }
}

void displayStats(RPG p1, RPG p2) {
    cout << "-----------------------------------" << endl;
    cout << p1.getName() << " Current Stats" << endl;
    cout << "Health: " << p1.getHealth() << "\tStrength: " << p1.getStrength() << "\tDefense: " << p1.getDefense() << endl;
    cout << p2.getName() << " Current Stats" << endl;
    cout << "Health: " << p2.getHealth() << "\tStrength: " << p2.getStrength() << "\tDefense: " << p2.getDefense() << endl;
    cout << "-----------------------------------" << endl;
}
