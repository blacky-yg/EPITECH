/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** ls_l
*/

#include "../include/my_ls.h"

int ls_l(char *filepath)
{
    struct dirent *folder = NULL;
    struct stat info;
    DIR *dir = opendir(filepath);

    my_printf("total %i\n", get_total_block(folder, info, filepath));
    if (dir == NULL)
        exit(84);
    for (; (folder = readdir(dir)) != NULL; ) {
        stat(folder->d_name, &info);
        ls_l_2(folder, info);
    }
    if (closedir(dir) == -1)
        exit(84);
    free(folder);
    return (0);
}