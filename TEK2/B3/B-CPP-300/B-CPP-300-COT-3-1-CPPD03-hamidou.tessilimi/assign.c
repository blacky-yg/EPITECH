/*
** EPITECH PROJECT, 2021
** day03
** File description:
** assign
*/

#include "string.h"

void assign_s(string_t *this, const string_t *str)
{
    if (this != NULL)
        string_destroy(this);
    if (str != NULL)
        this->str = strdup(str->str);
}

void assign_c(string_t *this, const char *s)
{
    if (this != NULL)
        string_destroy(this);
    if (s != NULL)
        this->str = strdup(s);
}