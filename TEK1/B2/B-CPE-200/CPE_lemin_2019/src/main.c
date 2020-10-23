/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** main
*/

#include "../include/lemin.h"

extern int return_value;

void usage(void)
{
    my_putstr("Usage:\n\n");
    my_putstr("To run Lemin, you can type:\n");
    my_putstr("./lem_in < 'filepath'\n");
}

int main(int ac, char *av[])
{
    char **input = NULL;
    lem_t *lemin = (lem_t *)malloc(sizeof(*lemin));

    if (ac == 2 && !my_strcmp(av[1], "-h")) {
        usage();
        free(lemin);
    } else if (ac == 1) {
        inlem(input, lemin);
        free(lemin);
        return (return_value);
    } else {
        free(lemin);
        return (84);
    } return (0);
}