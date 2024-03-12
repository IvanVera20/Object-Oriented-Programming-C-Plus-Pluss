#include <iostream>
#include "RPG.h"

using namespace std;

int main()
{
    RPG p1 = RPG("wiz", 70, 45, 15, "mage");
    RPG p2 = RPG();

    printf("%s Current STats\n", p1.getName().c_str());
    printf("Health: %i\t Strength: %i\t Defense: %i\n" , p1.getHealth(),p1.getStrength(), p1.getDefense());
    
    printf("%s Current Stats\n", p2.getName().c_str());
    printf("Health: %i\t Strength: %i\t Defense: %i\n", p2.getHealth(), p2.getStrength(), p2.getDefense());
    
    //DO THE SAME FOR p2

    //CALL updateHealth(0) on either p1 and p2
    p1.updateHealth(0);

    //PRINT OUT THE NEW HEALTH
    printf("%s's new Health: %i\n", p1.getName().c_str(), p1.getHealth());

    // CALL isAlive() on both p1 and p2
    printf("%s is alive: %s\n", p1.getName().c_str(), p1.isAlive() ? "true" : "false");
    printf("%s is alive: %s\n", p2.getName().c_str(), p2.isAlive() ? "true" : "false");

    return 0;
}
