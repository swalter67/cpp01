//
// Created by stephane walter on 11/11/2022.
//

#include "Harl.h"

int main(void)
{
    Harl    lance;

    std::cout << " test vide" << std::endl;
    lance.complain("");
    std::cout << std::endl;

    std::cout << " test non exist" << std::endl;
    lance.complain("dont exist");
    std::cout << std::endl;

    std::cout << " test : DEBUG" << std::endl;
    lance.complain("DEBUG");
    std::cout << std::endl;

    std::cout << " test : INFO" << std::endl;
    lance.complain("INFO");
    std::cout << std::endl;

    std::cout << "test : WARNING" << std::endl;
    lance.complain("WARNING");
    std::cout << std::endl;

    std::cout << " test : ERROR" << std::endl;
    lance.complain("ERROR");
    std::cout << std::endl;

    std::cout << "BYE HARL" << std::endl;
    return (0);





}
