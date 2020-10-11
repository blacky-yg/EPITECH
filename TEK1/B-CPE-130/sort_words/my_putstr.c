/*
** EPITECH PROJECT, 2020
** sort_words
** File description:
** my_putstr
*/

#include "sort_words.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        write(1, &str[i], 1);
}