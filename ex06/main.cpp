//
// Created by stephane walter on 11/11/2022.
//
#include "Harl.h"

int main(int argc, char **argv)
{
    Harl lance;
    if (argc != 2)
        std::cout << " error nb arg" << std::endl;
    else
        lance.harlfilter(argv[1]);
    return (0);


}