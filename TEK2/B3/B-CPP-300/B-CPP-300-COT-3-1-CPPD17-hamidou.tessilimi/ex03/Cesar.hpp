/*
** EPITECH PROJECT, 2021
** day17
** File description:
** Cesar
*/

#ifndef CESAR_HPP
#define CESAR_HPP

#include "IEncryptionMethod.hpp"
#include <iostream>

class Cesar : public IEncryptionMethod {
    public:
        Cesar();
        ~Cesar();

        void encryptChar(char plainchar);
        void decryptChar(char plainchar);
        void reset();

    // private:
        int _nb_shift;
};

bool is_min_alpha(char c);
bool is_maj_alpha(char c);

#endif /* !CESAR_HPP */