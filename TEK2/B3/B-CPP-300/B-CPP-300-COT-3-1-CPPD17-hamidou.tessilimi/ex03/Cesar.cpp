/*
** EPITECH PROJECT, 2021
** day17
** File description:
** Cesar
*/

#include "Cesar.hpp"

Cesar::Cesar()
{
}

Cesar::~Cesar()
{
}

bool is_min_alpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return (true);
    return (false);
}

bool is_maj_alpha(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (true);
    return (false);
}

void Cesar::encryptChar(char pchar)
{
    unsigned char c = pchar;
    if (is_min_alpha(c)) {
        c += _nb_shift;
        if (c > 'z')
            c -= 26;
    } else if (is_maj_alpha(c)) {
        c += _nb_shift;
        if (c > 'Z')
            c -= 26;
    }
    std::cout << c;
    _nb_shift = (_nb_shift + 1) % 26;
}

void Cesar::decryptChar(char pchar)
{
    unsigned char c = pchar;
    if (is_min_alpha(c)) {
        c -= _nb_shift;
        if (c < 'a')
            c += 26;
    } else if (is_maj_alpha(c)) {
        c -= _nb_shift;
        if (c < 'A')
            c += 26;
    }
    std::cout << c;
    _nb_shift = (_nb_shift + 1) % 26;
}

void Cesar::reset()
{
    _nb_shift = 3;
}