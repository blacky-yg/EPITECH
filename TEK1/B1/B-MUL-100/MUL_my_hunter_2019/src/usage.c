/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** usage
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void usage(void)
{
    my_putstr("USAGE\n\t./my_hunter [option]\n");
    my_putstr("Option\n\t-h to find help\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tThe goal of the game is to kill as many birds as possible.\n");
    my_putstr("\tFor this you just have to left-click on the birds.\n");
    my_putstr("\tYou have the right to miss 3 shots.\n");
    my_putstr("\tEvery time you hit the bird, the score increases by 100\n");
}