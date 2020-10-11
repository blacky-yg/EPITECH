/*
** EPITECH PROJECT, 2020
** get_next_line
** File description:
** get_next_line
*/

#include "../../include/get_next_line.h"
#include "../../include/my.h"

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