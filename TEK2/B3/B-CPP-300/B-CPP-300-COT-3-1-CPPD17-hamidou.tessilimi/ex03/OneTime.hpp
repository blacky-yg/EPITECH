/*
** EPITECH PROJECT, 2021
** day17
** File description:
** OneTime
*/

#ifndef ONE_TIME_HPP
#define ONE_TIME_HPP

#include "IEncryptionMethod.hpp"
#include <iostream>

class OneTime : public IEncryptionMethod {
    public:
        OneTime(const std::string &);
        ~OneTime();

        void encryptChar(char plainchar);
        void decryptChar(char cchar);
        void reset();

    private:
        int _id;
        std::string _key;
};

#endif /* !ONE_TIME_HPP */