//
// Created by Stephane Walter on 11/9/22.
//
#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{

    Zombie* horde = new Zombie[N] ;

    for(int i = 0; i < N; i++)
    {
        horde[i].setname(name);
    }
    return(horde);
}

