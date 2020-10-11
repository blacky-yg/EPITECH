/*
** EPITECH PROJECT, 2020
** project
** File description:
** main
*/

#include "../include/solver.h"

char *open_and_read(char *file)
{
    int fd = 0, rd = 0;
    char *tab = NULL;
    fd = open(file, O_RDONLY);
    struct stat info;
    if (stat(file, &info) == -1) {
        return (NULL);
    }
    else {
        tab = malloc(sizeof(char) * (info.st_size + 1));
        rd = read(fd, tab, info.st_size);
    }
    if (fd == -1 || rd == -1)
        return (NULL);
    close(fd);
    return (tab);
}
