/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** usage
*/

#include "../include/my.h"
#include "../include/sokoban.h"

void usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("      ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("      map  file representing the warehouse map, "
                " containing ‘#’ for walls, \n");
    my_putstr("\t   ‘P’ for the player, ‘X’ for boxes and"
                " ‘O’ for storage locations.\n");
}