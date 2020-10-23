/*
** EPITECH PROJECT, 2020
** navy
** File description:
** check_file2
*/

#include "../include/navy.h"

int check_file2(char *filepath)
{
    int i = 0;
    int fd = open(filepath, O_RDONLY);
    char buff[1000];
    int read_size;
    int nb_ret = 0;

    if (fd == -1)
        return (84);
    if ((read_size = read(fd, buff, 1000)) != 32)
        return (84);
    while (buff[i++] != 0)
        if (buff[i] == '\n')
            nb_ret++;
    if (nb_ret != 4)
        return (84);
    close(fd);
    if (check_line2(filepath) != 0)
        return (84);
    return (0);
}