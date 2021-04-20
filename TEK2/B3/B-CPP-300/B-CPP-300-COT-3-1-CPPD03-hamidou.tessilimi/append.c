/*
** EPITECH PROJECT, 2021
** day03
** File description:
** append
*/

#include "string.h"

void append_c(string_t *this, const char *ap)
{
    int size = 0;
    if (this != NULL && ap != NULL) {
        size = sizeof(char) * (strlen(this->str) + strlen(ap) + 1);
        this->str = realloc(this->str, size);
        this->str = strcat(this->str, ap);
    }
}

void append_s(string_t *this, const string_t *ap)
{
    if (ap != NULL)
        append_c(this, ap->str);
}