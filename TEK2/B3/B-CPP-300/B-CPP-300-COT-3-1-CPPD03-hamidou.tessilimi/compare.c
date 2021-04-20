/*
** EPITECH PROJECT, 2021
** day03
** File description:
** compare
*/

#include "string.h"

int compare_s(const string_t *this, const string_t *str)
{
    if (this != NULL && str != NULL)
        if (this->str && str->str)
            return (strcmp(this->str, str->str));
}

int compare_c(const string_t *this, const char *str)
{
    if (this != NULL && str != NULL)
        if (this->str && str)
            return (strcmp(this->str, str));
}