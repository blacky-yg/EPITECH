/*
** EPITECH PROJECT, 2021
** day17
** File description:
** OneTime
*/

#include "OneTime.hpp"

OneTime::OneTime(const std::string &key): _id(0), _key(key)
{
}

OneTime::~OneTime()
{
}

static bool is_min_alpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return (true);
    return (false);
}

static bool is_maj_alpha(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (true);
    return (false);
}

void OneTime::encryptChar(char plainchar)
{
    unsigned char c = plainchar;
    if (is_min_alpha(c)) {
        (is_min_alpha(_key[_id])) ? c += (_key[_id] - 'a') : c += (_key[_id] - 'A');
        if (c > 'z')
            c -= 26;
    } else if (is_maj_alpha(c)) {
        (is_min_alpha(_key[_id])) ? c += (_key[_id] - 'a') : c += (_key[_id] - 'A');
        if (c > 'Z')
            c -= 26;
    }
    std::cout << c;
    _id = (_id + 1) % _key.size();
}

void OneTime::decryptChar(char cchar)
{
    unsigned char c = cchar;
    if (is_min_alpha(c)) {
        (is_min_alpha(_key[_id])) ? c -= (_key[_id] - 'a') : c -= (_key[_id] - 'A');
        if (c < 'a')
            c += 26;
    } else if (is_maj_alpha(c)) {
        (is_min_alpha(_key[_id])) ? c -= (_key[_id] - 'a') : c -= (_key[_id] - 'A');
        if (c < 'A')
            c += 26;
    }
    std::cout << c;
    _id = (_id + 1) % _key.size();
}

void OneTime::reset()
{
    _id = 0;
}