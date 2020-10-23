/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** counts and returns the numbers of characters
*/

#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

int main()
{
    char str[] = "Hamidou 12est trop";

    printf("%d\n", my_strlen(str));
    return (0);
}
