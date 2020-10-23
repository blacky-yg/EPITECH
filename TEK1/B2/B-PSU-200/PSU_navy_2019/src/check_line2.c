/*
** EPITECH PROJECT, 2020
** navy
** File description:
** check_line2
*/

#include "../include/navy.h"

int check_line2(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int i = 0;
    char **line;

    if (fd == -1)
        return (84);
    line = malloc(sizeof(char *) * 5);
    for (; i < 4; i++)
        line[i] = malloc(sizeof(char *) * 8);
    for (i = 0; i < 4; i++)
        line[i] = get_next_line(fd);
    close(fd);
    for (i = 0; i < 4; i++) {
        if (line[i][0] != ('2' + i))
            return (84);
    } return (0);
}