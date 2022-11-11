//
// Created by Stephane Walter on 11/10/22.
//

#include "HumanB.h"


HumanB::HumanB(std::string const& name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{}

void HumanB::attack()
{
    if(this->_weapon == NULL)
        std::cout << _name << " no weapon... oups" << std::endl;
    else
        std::cout << _name << " attack with " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon) {this->_weapon = &weapon;}

