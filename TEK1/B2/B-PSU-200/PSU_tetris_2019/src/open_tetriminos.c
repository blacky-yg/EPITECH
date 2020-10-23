/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** open_tetriminos
*/

#include "../include/tetris.h"

tab_int_t open_tetriminos(DIR *dir, struct dirent *rd_dir,  int i)
{
    tab_int_t my_tab;

    my_tab.tab = NULL;
    my_tab.nb_tetris_files = 0;
    dir = opendir("tetriminos");
    if (dir == NULL)
        exit(84);
    for (rd_dir = readdir(dir); rd_dir != NULL;
    rd_dir = readdir(dir), my_tab.nb_tetris_files++);
    closedir(dir);
    my_tab.tab = mem_alloc_2d_array(my_tab.nb_tetris_files, 256);
    dir = opendir("tetriminos");
    for (rd_dir = readdir(dir); rd_dir != NULL; rd_dir = readdir(dir))
        if (rd_dir->d_name[0] != '.') {
            my_tab.tab[i] = my_strcpy(my_tab.tab[i], rd_dir->d_name);
            i++;
        }
    my_tab.tab[i] = NULL;
    my_tab.tab = order_words(my_tab.tab, i);
    closedir(dir);
    return ((tab_int_t){my_tab.nb_tetris_files - 2, my_tab.tab});
}
