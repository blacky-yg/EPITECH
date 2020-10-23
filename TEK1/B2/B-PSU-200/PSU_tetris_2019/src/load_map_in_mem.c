/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** load_map_in_mem
*/

#include "../include/tetris.h"

char *load_file_in_mem(char const *filepath)
{
    int fd = 0;
    int rd = 0;
    char *buffer = NULL;
    struct stat buf;

    buf.st_size = 0;
    stat(filepath, &buf);
    buffer = malloc(sizeof(char) * (buf.st_size + 1));
    buffer[0] = '\0';
    fd =  open(filepath, O_RDONLY);
    if (fd == -1 || buffer == NULL)
        return (NULL);
    rd = read(fd, buffer, buf.st_size);
    if (rd <= 0)
        return (NULL);
    buffer[rd] = '\0';
    close(fd);
    return (buffer);
}