//
// Created by Stephane Walter on 11/10/22.
//

#include "HumanA.h"

HumanA::HumanA(std::string const& name, Weapon& first_w) : _weapon(first_w)
{
    _name = name;
}

HumanA::~HumanA()
{}

void HumanA::attack()
{
    std::cout << _name << " attack with " << _weapon.getType() << std::endl;
}