//
// Created by Stephane Walter on 11/10/22.
//
#include "HumanA.h"
#include "HumanB.h"

int main(void)
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("crude spiked club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("crude spiked club");
        jim.attack();
    }
    return 0;
}