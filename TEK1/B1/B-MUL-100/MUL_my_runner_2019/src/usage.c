/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** usage
*/

#include "../include/my.h"
#include "../include/my_runner.h"

void usage(void)
{
    my_putstr("Finite runner created with CSFML.\n\n");
    my_putstr("USAGE\n  ./my_runner map.txt\n\n\n");
    my_putstr("OPTIONS\n -i\t\t    launch the game in infinity mode.\n");
    my_putstr(" -h\t\t    print the usage and quit.\n\n");
    my_putstr("USER INTERACTIONS\n");
    my_putstr(" SPACE_KEY\t   jump\n");
}