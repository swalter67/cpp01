//
// Created by Stephane Walter on 11/10/22.
//

#ifndef CPP01_WEAPON_H
#define CPP01_WEAPON_H


class Weapon {
private:
    std::string _type;

public:

    Weapon(std::string type);
    ~Weapon(void);

    std::string const& getType(void);
    void  setType(std::string type);
};


#endif //CPP01_WEAPON_H
