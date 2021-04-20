/*
** EPITECH PROJECT, 2021
** day03
** File description:
** clear
*/

#include "string.h"

void clear(string_t *this)
{
    if (this != NULL && this->str != NULL) {
        this->str[0] = '\0';
        this->str = realloc(this->str, sizeof(char));
    }
}