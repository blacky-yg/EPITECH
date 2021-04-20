/*
** EPITECH PROJECT, 2021
** day03
** File description:
** point
*/

#include "string.h"

void print(const string_t *this)
{
    if (this && this->str)
        write(1, this->str, strlen(this->str));
}