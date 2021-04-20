/*
** EPITECH PROJECT, 2021
** day03
** File description:
** c_str
*/

#include "string.h"

const char *c_str(const string_t *this)
{
    if (this && this->str)
        return (this->str);
    else
        return (NULL);
}