/*
** EPITECH PROJECT, 2020
** trigo
** File description:
** main
*/

#include "../include/trigo.h"

int main(int ac, char *av[])
{
    matrix_t *matrix = (matrix_t *) malloc(sizeof(*matrix));

    if (ac == 2 && !my_strcmp(av[1], "-h")) {
        usage();
        free(matrix);
    } else if (check_av(ac, av)) {
        free(matrix);
        return (84 + my_putstr("Type ./108trigo -h for help\n"));
    } else {
        init_struct(matrix, ac, av);
        trigo(matrix);
        free_all(matrix);
        free(matrix);
    }
    return (0);
}