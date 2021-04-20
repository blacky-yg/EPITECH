/*
** EPITECH PROJECT, 2021
** day03
** File description:
** insert
*/

#include "string.h"

void insert_s(string_t *this, size_t pos, const string_t *str)
{
    insert_c(this, pos, str->str);
}

void insert_c(string_t *this, size_t pos, const char *str)
{
    int size = 0;
    char *this_content = NULL;
    int position = pos;

    if (this && str && this->str && str) {
        if (pos > strlen(this->str))
            pos = strlen(this->str);
        size = sizeof(char) * (strlen(this->str) + strlen(str) + 1);
        this_content = strdup(this->str);
        this->str = realloc(this->str, size);
        for (int i = 0; str[i]; i++, position++)
            this->str[position] = str[i];
        for (int i = pos; this_content[i]; i++, position++)
            this->str[position] = this_content[i];
        this->str[position] = '\0';
        free(this_content);
    }
}