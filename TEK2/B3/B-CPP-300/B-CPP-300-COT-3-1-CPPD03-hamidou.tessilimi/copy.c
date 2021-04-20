/*
** EPITECH PROJECT, 2021
** day03
** File description:
** copy
*/

#include "string.h"

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    size_t nb_car = 0;
    size_t count = pos;

    if (this && this->str) {
        if (pos > strlen(this->str))
            return (nb_car);
        for (; count < pos + n && this->str[count]; count++, nb_car++)
            s[nb_car] = this->str[count];
        for (int i = nb_car; i < n; i++)
            s[i] = '\0';
        s[nb_car] = '\0';
        if (this->str[count] == '\0' && count != pos + n)
            nb_car++;
        return (nb_car);
    }
}