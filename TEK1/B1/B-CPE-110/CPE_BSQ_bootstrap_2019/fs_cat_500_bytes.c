/*
** EPITECH PROJECT, 2019
** bootstrap BSQ
** File description:
** fs_cat_500_bytes
*/

#include "include/my.h"
#include "include/file.h"

void fs_cat_500_bytes(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int size = 500;
    char buffer[size + 1];
    int reader = read(fd, buffer, size);
    int i = 0;

    if (fd == -1)
        my_putstr("FAILURE\n");
    else if (fd > 0 && reader > 0)
        my_putstr(&buffer[i]);
}
