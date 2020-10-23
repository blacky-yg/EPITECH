/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** usage
*/

#include "../include/my_ls.h"

void usage(void)
{
    my_printf("REPRESENTATION OF LS\n\n");
    my_printf("USAGE:\n\t./my_ls -[OPTION]... [FILE]...\n\n");
    my_printf("OPTION AVAILABLE:\n");
    my_printf("\tl: long listing format\n");
    my_printf("\tr: reverse order while sorting\n");
    my_printf("\td: list directories themselves, not their contents\n");
    my_printf("\tR: list subdirectories recursively\n");
    my_printf("\tt: sort by modification time, newest first\n");
}