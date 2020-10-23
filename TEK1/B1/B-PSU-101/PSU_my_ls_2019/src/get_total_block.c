/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** get_total_block
*/

#include "../include/my_ls.h"

int get_total_block(struct dirent *folder, struct stat info, char *filepath)
{
    DIR *dir = opendir(filepath);
    int i = 0;

    for (; (folder = readdir(dir)) != NULL;) {
        stat(folder->d_name, &info);
        folder->d_name[0] != '.' ? i += info.st_blocks : 1;
    }
    i /= 2;
    if (closedir(dir) == -1)
        exit(84);
    return (i);
}