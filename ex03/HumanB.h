//
// Created by Stephane Walter on 11/10/22.
//

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.h"

class HumanB {

private:
   std::string _name;
   Weapon* _weapon;

public:

    HumanB(std::string const& name);
    ~HumanB();

    void    attack();
    void    setWeapon(Weapon& weapon);




};


#endif //CPP01_HUMANB_H
