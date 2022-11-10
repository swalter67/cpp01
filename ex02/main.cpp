//
// Created by Stephane Walter on 11/9/22.
//
# include<iostream>
# include<string>
# include<iomanip>

int main(void)
{
    std::string s1;

    s1 = "HI THIS IS BRAIN";

    std::string* stringPTR = &s1;
    std::string& stringREF = s1;

    std::cout << "L’adresse de la string en mémoire " << &s1 << std::endl;
    std::cout << "L’adresse stockée dans stringPTR " <<  stringPTR << std::endl;
    std::cout <<  "L’adresse stockée dans stringREF " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "La valeur de la string " << s1 << std::endl;
    std::cout << "La valeur pointée par stringPTR  " << *stringPTR << std::endl;
    std::cout << "La valeur pointée par stringREF  " << stringREF << std::endl;

    return (0);

}