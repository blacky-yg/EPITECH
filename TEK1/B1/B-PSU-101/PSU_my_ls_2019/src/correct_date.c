/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** correct_date
*/

#include "../include/my_ls.h"

char *correct_date(char *date)
{
    int i = 0;
    char *correct = malloc(13);

    for (; i < 12; i++)
        correct[i] = date[i];
    correct[i] = '\0';
    return (correct);
}