//
// Created by Stephane Walter on 11/8/22.
//

#ifndef CPP_ZOMBIE_H
#define CPP_ZOMBIE_H

# include <iostream>
# include <string>

class Zombie {
    private:
        std::string _name;
    public:

    Zombie(std::string name);
    ~Zombie(void);

    void announce( void );

};





#endif //CPP_ZOMBIE_H
