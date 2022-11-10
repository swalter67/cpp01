//
// Created by Stephane Walter on 11/8/22.
//

#include "Zombie.h"

//Zombie* newZombie( std::string name );
//void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

int main(void)
{
    int nb = 100;
    Zombie* horde;
    std::string name;

    name = " toto";

    horde = zombieHorde(nb, name);

    for(int i = 0; i < nb; i++)
    {

        std::cout << "Zombie n " << i + 1 << " ";
        horde[i].announce();
    }
    std::cout << std::endl;

    delete[] horde;


    return (0);



}
