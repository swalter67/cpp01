//
// Created by Stephane Walter on 11/8/22.
//

#include "Zombie.h"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main(void)
{



    std::string name;

    name = "toto";

    Zombie  test(name);
    test.announce();

    // new zombie "tata"

    Zombie* zombien = newZombie("tata");
    std::cout << "newzombie tata new created\n";
    zombien->announce();
    delete zombien;
    std::cout << "newzombie  tata new deleted\n";

    // random "titi"

    randomChump("titi");



    return (0);



}
