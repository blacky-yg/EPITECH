/*
** EPITECH PROJECT, 2021
** day17
** File description:
** Encryption
*/

#include "Encryption.hpp"

Encryption::Encryption(IEncryptionMethod &mthd, method_ptr func): _mthd(&mthd), _func(func)
{
}

Encryption::~Encryption()
{
}

void Encryption::operator()(char c)
{
    (_mthd->*_func)(c);
}

void Encryption::encryptString(IEncryptionMethod &mthd, const std::string &encrypt)
{
    mthd.reset();
    std::for_each(encrypt.begin(), encrypt.end(), Encryption(mthd, &IEncryptionMethod::encryptChar));
    std::cout << std::endl;
}

void Encryption::decryptString(IEncryptionMethod &mthd, const std::string &decrypt)
{
    mthd.reset();
    std::for_each(decrypt.begin(), decrypt.end(), Encryption(mthd, &IEncryptionMethod::decryptChar));
    std::cout << std::endl;
}