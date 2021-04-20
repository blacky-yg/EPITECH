/*
** EPITECH PROJECT, 2021
** day01
** File description:
** z
*/

#include "../include/z.h"

int main(int ac, char *av[])
{
    if (ac == 1)
        printf("%s", RESULT);
    else if (ac == 2)
        (!is_hexa(av[1])) ? printf("%s", RESULT) : printf("%s", RESULT);
    else
        for (int i = ac - 1; i > 0; i--) {
            (!is_hexa(av[i])) ? printf("%s", RESULT) : 1;
            (i == 1) ? printf("%s", RESULT) : 1;
        }
    return (0);
}