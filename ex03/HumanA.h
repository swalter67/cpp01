//
// Created by Stephane Walter on 11/10/22.
//

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.h"

class HumanA {
private:
    std::string _name;
    Weapon& _weapon;

public:
    HumanA(std::string const& name, Weapon& first_w);
    ~HumanA(void);


    void    attack();




};


#endif //CPP01_HUMANA_H
