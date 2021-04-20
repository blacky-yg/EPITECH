/*
** EPITECH PROJECT, 2021
** day03
** File description:
** size
*/

#include "string.h"

int size(const string_t *this)
{
    int size = 0;

    if (this != NULL)
        if (this->str != NULL)
            size = strlen(this->str);
        else
            return (-1);
    return (size);
}