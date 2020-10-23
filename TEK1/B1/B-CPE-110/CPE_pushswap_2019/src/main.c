/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** main.c
*/

#include "../include/my.h"
#include "../include/push_swap.h"

int main(int ac, char *av[])
{
    list_t *l_a = NULL;
    list_t *l_b = NULL;

    if (ac == 1 || ac < 3 || check_av(av) == 1)
        return (84);
    if (ac == 2)
        write(1, "\n", 1);
    for (int i = 1; av[i] != NULL; i++)
        append(&l_a, my_getnbr(av[i]));
    first_swap(&l_a);
    if (is_ordered(ac, &l_a) == 1)
        return (0);
    push_swap(&l_a, &l_b);
    return (0);
}