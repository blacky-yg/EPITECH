/*
** EPITECH PROJECT, 2021
** objdump
** File description:
** main
*/

#include "../include/objdump.h"

int main(int ac, char *av[])
{
    gen_t gen;
    if (ac == 1) {
        gen._arg_name = strdup("a.out");
        if (objdump(&gen))
            return (84);
    } else if (ac == 2 && !strcmp(av[1], "-h"))
        usage();
    else {
        gen._arg = ac;
        for (int i = 1; i < ac; i++) {
            gen._arg_name = strdup(av[i]);
            if (objdump(&gen))
                return (84);
        }
    }
    return (0);
}