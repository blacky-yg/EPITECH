/*
** EPITECH PROJECT, 2019
** 101pong
** File description:
** main
*/

#include "../include/my.h"
#include "../include/pong.h"

int main(int ac, char *av[])
{
    unsigned int n = 0;
    int i = 1;
    vect_coord u;
    vect_coord v;

    if (ac == 2)
        usage(av);
    if (ac == 8) {
        while (i != ac) {
            if (check_argument(av[i]) == 1)
                i++;
            else
                exit(84);
    	}
        u.x = atof(av[1]);
        u.y = atof(av[2]);
        u.z = atof(av[3]);
        v.x = atof(av[4]);
        v.y = atof(av[5]);
        v.z = atof(av[6]);
        if (av[7][0] == '-')
            exit(84);
        else
            n = atoi(av[7]);
        pong(u, v, n);
        }
    else
        exit(84);
    return (0);
}