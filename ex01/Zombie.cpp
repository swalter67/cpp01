#include "Zombie.h"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void )
{
}


void Zombie::announce( void )
{

    std::cout << this->_name << " BraiiiiiiinnnzzzZ...\n";
}

void    Zombie::setname(std::string name)
{
    this->_name = name;

}
