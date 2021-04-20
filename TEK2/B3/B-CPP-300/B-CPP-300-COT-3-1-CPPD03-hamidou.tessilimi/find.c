/*
** EPITECH PROJECT, 2021
** day03
** File description:
** find
*/

#include "string.h"

int find_s(const string_t *this, const string_t *str, size_t pos)
{
    if (this && this->str && str && str->str)
        return (find_c(this, str->str, pos));
}

int find_c(const string_t *this, const char *str, size_t pos)
{
    if (strlen(str) > strlen(this->str) || pos > strlen(this->str))
        return (-1);
    for (int i = pos; this->str[i]; i++)
        for (int j = 0, k = i; str[j] == this->str[k] && this->str[k];j++,k++)
            if (str[j + 1] == '\0')
                return (i);
    return (-1);
}