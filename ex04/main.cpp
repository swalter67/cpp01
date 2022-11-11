//
// Created by stephane walter on 11/11/2022.
//
#include <string.h>
#include <iostream>
#include <fstream>
#include "sedloser.hpp"

int main(int argc, char **argv)
{
    if(argc != 4) {
        std::cout << " invalid nub arg" << std::endl;
        return (1);
    }
    else
    {
        std::string file_name = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::string buffer;

        std::ifstream ifs(argv[1]);
        if (!ifs.is_open())
        {
            std::cout << " invalid file" << std::endl;
            return (1);
        }
        std::getline(ifs, buffer, '$');
        ifs >> buffer;
        ifs.close();

        std::ofstream ofs(file_name.append(".replace"));
        if(!ofs.is_open())
        {
            std::cout << " invalid new file" << std::endl;
            return (1);
        }

        if(!buffer.empty())
            ofs << cppreplace(buffer, s1, s2);
        ofs.close();

    }

    return (0);

}