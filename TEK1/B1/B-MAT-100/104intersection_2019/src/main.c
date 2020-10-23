/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** main
*/

#include "../include/my.h"

int first(char *str)
{
    int z = 0;

    while (str[z] != '\0') {
        if (str[z] >= '1' && str[z] <= '3' ) {
            z++;
        } else
            exit(84);
    }
    return (0);
}

int check(char *str)
{
    int z = 0;

    while (str[z] != '\0') {
        if (str[z] >= '0' && str[z] <= '9' || str[z] == '.' || str[z] == '-') {
            z++;
        } else
            exit(84);
    }
    return (0);
}

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        usage();
    else if (ac == 9) {
        first(av[1]);
        check(av[1]);
        check(av[2]);
        check(av[3]);
        check(av[4]);
        check(av[5]);
        check(av[6]);
        check(av[7]);
        check(av[8]);
        intersection(av);
    }
    else
        return (84);
    return (0);
}