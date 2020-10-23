/*
** EPITECH PROJECT, 2019
** GUI_rpg
** File description:
** get_usr_name.c
*/

#include "../include/game.h"

char *get_name(void)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    write(1, "Enter your name: ", 17);
    read = getline(&line, &len, stdin);
    if (read == -1)
        return (NULL);
    while (line[0] == '\n') {
        write(1, "Enter your name: ", 18);
        read = getline(&line, &len, stdin);
        if (read == -1)
            return (NULL);
    }
    if (line[my_strlen(line) - 1] == '\n')
            line[my_strlen(line) - 1] = '\0';
    return (line);
}
