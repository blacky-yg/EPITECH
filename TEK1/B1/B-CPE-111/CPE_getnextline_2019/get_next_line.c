/*
** EPITECH PROJECT, 2020
** get_next_line
** File description:
** get_next_line
*/

#include "get_next_line.h"

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i + 1] = '\0';
    return (dest);
}

char *my_strdup(char *str)
{
    char *cpy_str = malloc(my_strlen(str) + 2);

    if (cpy_str == NULL)
        return (NULL);
    cpy_str = my_strcpy(cpy_str, str);
    free(str);
    return (cpy_str);
}

char *get_next_line(int fd)
{
    int reader = 0;
    static char buffer[READ_SIZE];
    char *str = malloc(READ_SIZE);
    int i = 0;

    if (fd == -1 || str == NULL)
        return (NULL);
    str[0] = '\0';
    while ((reader = read(fd, buffer, READ_SIZE)) > 0 && buffer[0] != '\n') {
        str = my_strdup(str);
        str[i] = buffer[0];
        i++;
    }
    if (i == 0 && reader == 0)
        return (NULL);
    else
        return (str);
}