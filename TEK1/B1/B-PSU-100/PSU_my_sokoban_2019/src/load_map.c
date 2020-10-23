/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** load_map
*/

#include "../include/my.h"
#include "../include/sokoban.h"

char *load_map(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int size = 1920 * 1080;
    unsigned char *map = malloc(sizeof(char) * size);
    int reader = 0;

    if (fd == -1)
        exit(84);
    reader = read(fd, map, size);
    if (reader == -1)
        exit(84);
    map[reader] = '\0';
    close(fd);
    return (map);
}