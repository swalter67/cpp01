//
// Created by stephane walter on 11/11/2022.
//

#include "Harl.h"
#include <iostream>

Harl::Harl(void) {}

Harl::~Harl(void) {}

void    Harl::harlfilter(std::string level) {
    std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int start = -1;
    for (int i = 0; i < 4; i++) {
        if (level == list[i])
            start = i;
    }
    switch (start) {
        case 0:
            debug();
            info();
            warning();
            error();
            break;
        case 1:
            info();
            warning();
            error();
            break;
        case 2:
            warning();
            error();
            break;
        case 3:
            error();
            break;
        default:
            std::cout << " no problem for Harl ;)" << std::endl;
            break;
    }
};

void    Harl::debug() {
    std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;

}

void    Harl::info() {
    std::cout << "[INFO] " << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::warning() {
    std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error() {
    std::cout << "[ERROR]" << std::endl << "This is unacceptable ! I want to speak to the manager now." << std::endl;

}