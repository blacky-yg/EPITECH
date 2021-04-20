/*
** EPITECH PROJECT, 2021
** day16
** File description:
** BF_Translator
*/

#ifndef BF_TRANSLATOR_HPP
#define BF_TRANSLATOR_HPP

#include <iostream>
#include <fstream>
#include <map>

class BF_Translator {
    public:
        BF_Translator();
        ~BF_Translator();

        int translate(const std::string &in, const std::string &out);

    private:
        std::map<unsigned char, std::string> _map;
};

#endif /* !BF_TRANSLATOR_HPP */