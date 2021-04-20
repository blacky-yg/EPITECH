/*
** EPITECH PROJECT, 2021
** day03
** File description:
** to_int
*/

#include "string.h"

int to_int(const string_t *this)
{
    if (this && this->str)
        return (atoi(this->str));
    return (0);
}