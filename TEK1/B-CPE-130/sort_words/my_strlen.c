/*
** EPITECH PROJECT, 2020
** sort_words
** File description:
** my_strlen
*/

#include "sort_words.h"

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}