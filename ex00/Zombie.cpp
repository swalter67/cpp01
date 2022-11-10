#include "Zombie.h"

Zombie::Zombie(std::string name) : _name(name)

{
    std::cout << this->_name << " is created\n";
}

Zombie::~Zombie(void )
{
    std::cout << this->_name << " is destroyed\n";
}


void Zombie::announce( void )
{

    std::cout << this->_name << " BraiiiiiiinnnzzzZ...\n";


}


