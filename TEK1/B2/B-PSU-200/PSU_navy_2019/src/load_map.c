/*
** EPITECH PROJECT, 2020
** navy
** File description:
** load_map
*/

#include "../include/navy.h"

int load_map(char *fp, GAME *game)
{
    int fd = open(fp, O_RDONLY);
    char *pos = get_next_line(fd);

    while (pos) {
        if (put_on_map(pos, game))
            return (1);
        free(pos);
        pos = get_next_line(fd);
    }
    close(fd);
    return (0);
}