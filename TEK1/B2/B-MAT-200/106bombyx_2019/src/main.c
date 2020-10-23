/*
** EPITECH PROJECT, 2020
** bombyx
** File description:
** main
*/

#include "../include/bombyx.h"

int main(int ac, char *av[])
{
    bombyx_t *bombyx = malloc(sizeof(bombyx_t));

    if (ac == 2 && !my_strcmp(av[1], "-h"))
        usage();
    else if (ac == 3 || ac == 4) {
        if (fix_error(ac, av))
            return (84);
        else {
            init_struct(ac, av, bombyx);
            bomb(bombyx);
            free(bombyx);
        }
    } else {
        printf("Bad arguments.\nType ./106bombyx -h.\n");
        return (84);
    }
    return (0);
}