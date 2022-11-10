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

    Zombie(void);
    ~Zombie(void);

    void    announce( void );
    void    setname(std::string);
};

Zombie* zombieHorde(int N, std::string name);



#endif //CPP_ZOMBIE_H
