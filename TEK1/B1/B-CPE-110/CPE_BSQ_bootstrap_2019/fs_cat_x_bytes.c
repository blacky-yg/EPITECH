/*
** EPITECH PROJECT, 2019
** bootstrap BSQ
** File description:
** fs_cat_x_bytes
*/

#include "include/my.h"
#include "include/file.h"

void fs_cat_x_bytes(char const *filepath, int x)
{
    int fd = open(filepath, O_RDONLY);
    char buffer[x];
    int reader = read(fd, buffer, x);
    int i = 0;

    if (fd == -1 || reader == -1)
        my_putstr("Nothing to read");
    if (reader > 0)
        my_putstr(buffer);
    close(fd);
}
