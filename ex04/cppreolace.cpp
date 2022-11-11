//
// Created by stephane walter on 11/11/2022.
//
#include <string.h>
#include <iostream>
#include "sedloser.hpp"

std::string cppreplace(std::string buffer, std::string s1, std::string  s2)
{
    std::string dest;
    std::string::size_type i = 0;
    std::string::size_type j = 0;

    while( i < buffer.length()) {
        j = 0;
        while (j < s1.length()) {
            if (buffer[i + j] == s1[j])
                j++;
            else
                break;
        }
        if (j == s1.length()) {
            dest.append(s2);
            i += s1.length();
        }
        else {
            dest.append(1, buffer[i]);
            i++;
        }
    }
    return (dest);
}