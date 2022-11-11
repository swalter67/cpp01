//
// Created by Stephane Walter on 11/10/22.
//

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {
private:
    std::string type;

public:

    Weapon(std::string const& type);
    ~Weapon(void);

    std::string const& getType(void);
    void  setType(std::string const& newType);
};


#endif //CPP01_WEAPON_H
