/*
** EPITECH PROJECT, 2019
** Ponters are back: my_revstr
** File description:
**  a function that reverses a string
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i;
    int j;
    char temp;

    i = my_strlen(str);
    j = 0;
    while (j < i/2) {
        temp = str[j];
        str[j] = str[i-1-j];
        str[i-1-j] = temp;
        j++;
    }
    return (str);
}
