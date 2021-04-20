/*
** EPITECH PROJECT, 2021
** day17
** File description:
** Encryption
*/

#ifndef ENCRYPTION_HPP
#define ENCRYPTION_HPP

#include "IEncryptionMethod.hpp"
#include <algorithm>
#include <string>
#include <iostream>

using method_ptr = void (IEncryptionMethod::*)(char c);

class Encryption {
    public:
        Encryption(IEncryptionMethod &mthd, method_ptr func);
        virtual ~Encryption();

        void operator()(char c);

        static void encryptString(IEncryptionMethod &enMethod, const std::string &encrypt);
        static void decryptString(IEncryptionMethod &deMethod, const std::string &decrypt);

    private:
        IEncryptionMethod *_mthd;
        method_ptr _func;
};

#endif /* !ENCRYPTION_HPP */