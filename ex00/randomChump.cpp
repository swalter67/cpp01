//
// Created by Stephane Walter on 11/9/22.
//
#include "Zombie.h"

void randomChump( std::string name )
{

    Zombie zombier = Zombie(name);
    zombier.announce();
    std::cout << "zombie random is created\n";



}