/*
** EPITECH PROJECT, 2019
** bootstrap BSQ
** File description:
** fs_open_file
*/

#include "include/my.h"
#include "include/file.h"

int fs_open_file(char const *filepath)
{
    int file_desc = open(filepath, O_RDONLY);

    if (file_desc == -1)
        my_putstr("FAILURE\n");
    else
        my_putstr("SUCCESS\n");
    return (file_desc);
}
