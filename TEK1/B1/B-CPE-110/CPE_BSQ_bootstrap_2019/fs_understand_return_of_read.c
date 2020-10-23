/*
** EPITECH PROJECT, 2019
** bootstrap BSQ
** File description:
** fs_understand_return_of_read
*/

#include "include/my.h"
#include "include/file.h"

void fs_understand_return_of_read(int fd, char *buffer, int size)
{
    int reader = read(fd, buffer, size);

    if (reader == -1)
        my_putstr("read failed\n");
    if (reader == 0)
        my_putstr("read has nothing more to read\n");
    if (reader != -1 && reader != 0 && reader < size)
        my_putstr("read didn't complete the entire buffer\n");
    if (reader != -1 && reader != 0 && reader == size)
        my_putstr("read completed the entire buffer\n");
}
