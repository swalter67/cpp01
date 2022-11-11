//
// Created by stephane walter on 11/11/2022.
//

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include  <string>

class Harl {
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

public:
    Harl(void);
    ~Harl(void);

    void    complain(std::string level);


};


#endif //CPP01_HARL_H
