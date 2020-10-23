/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** print_right
*/

#include "../include/my_ls.h"

void print_right(mode_t mode, struct stat info)
{
    my_printf((S_ISDIR(info.st_mode)) ? "d" : "-");
    my_printf((info.st_mode & S_IRUSR) ? "r" : "-");
    my_printf((info.st_mode & S_IWUSR) ? "w" : "-");
    my_printf((info.st_mode & S_IXUSR) ? "x" : "-");
    my_printf((info.st_mode & S_IRGRP) ? "r" : "-");
    my_printf((info.st_mode & S_IWGRP) ? "w" : "-");
    my_printf((info.st_mode & S_IXGRP) ? "x" : "-");
    my_printf((info.st_mode & S_IROTH) ? "r" : "-");
    my_printf((info.st_mode & S_IWOTH) ? "w" : "-");
    my_printf((info.st_mode & S_IXOTH) ? "x" : "-");
    my_printf(". ");
}