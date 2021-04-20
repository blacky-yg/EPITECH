/*
** EPITECH PROJECT, 2021
** day03
** File description:
** at
*/

#include "string.h"

char at(const string_t *this, size_t pos)
{
    if (this != NULL && this->str != NULL) {
        for (size_t i = 0; this->str[i]; i++)
            if (i == pos)
                return (this->str[i]);
    }
    return (-1);
}