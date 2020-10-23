/*
** EPITECH PROJECT, 2020
** navy
** File description:
** check_file
*/

#include "../include/navy.h"

int check_file(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *line;
    int rows = 0;

    if (fd == -1)
        return (84);
    if ((line = get_next_line(fd)) == NULL)
        return (84);
    while (line) {
        rows++;
        if (check_line(line))
            return (84);
        free(line);
        line = get_next_line(fd);
    } close(fd);
    if (rows != 4)
        return (84);
    if (check_file2(filepath) != 0)
        return (84);
    return (0);
}