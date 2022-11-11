//
// Created by Stephane Walter on 11/10/22.
//

#include "Weapon.h"

Weapon::Weapon(std::string const& type) : type(type)
{}

Weapon::~Weapon() {}

std::string const& Weapon::getType(void)
{
    return (this->type);

}

void  Weapon::setType(std::string const& newType)
{

    this->type = newType;


}