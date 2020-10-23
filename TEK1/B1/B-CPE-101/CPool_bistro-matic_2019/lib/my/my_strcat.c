/*
** EPITECH PROJECT, 2019
** Libmy, arguments
** File description:
** a function that concatenates two strings.
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int dest_length;

    dest_length = my_strlen(dest);
    i = 0;
    while (src[i] != '\0') {
        dest[dest_length+i] = src[i];
        i++;
    }
    dest[dest_length+i] = '\0';
    return (dest);
}
