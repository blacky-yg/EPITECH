/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** fill_it
*/

#include "../include/lemin.h"

char *fill_it(char *name, char *str)
{
    char *a_a = my_getstring(ant_to_move);
    str[0] = 'P';
    str[1] = '\0';
    str = my_catt(str, a_a);
    str = my_catt(str, "-");
    str = my_catt(str, name);
    return (str);
}

char *fill_t(char *name, char *str, char *nb)
{
    str[0] = 'P';
    str[1] = '\0';
    str = my_catt(str, nb);
    str = my_catt(str, "-");
    str = my_catt(str, name);
    return (str);
}