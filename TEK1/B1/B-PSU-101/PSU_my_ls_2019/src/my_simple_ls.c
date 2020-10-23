/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** my_simple_ls
*/

#include "../include/my_ls.h"

int my_simple_ls(char const *filepath)
{
    DIR *rep = opendir(filepath);
    struct dirent *folder = NULL;


    if (rep == NULL)
        exit(84);
    while ((folder = readdir(rep)) != NULL)
        if (folder->d_name[0] != '.')
            my_printf("%s\n", folder->d_name);
    if (closedir(rep) == -1)
        exit(84);
}