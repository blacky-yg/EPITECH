/*
** EPITECH PROJECT, 2020
** asm
** File description:
** main
*/

#include "../include/asm.h"

void usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./asm file_name[.s]\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tfile_name\tfile in assembly language to be converted ");
    my_putstr("into file_name.cor, an \n\t\t\t");
    my_putstr("executable in the Virtual Machine.\n");
}

int main(int ac, char *av[])
{
    asm_t *assembl = malloc(sizeof(asm_t));
    if (ac != 2) {
        free(assembl);
        return (84);
    } else {
        if (!my_strcmp(av[1], "-h")) {
            usage();
            free(assembl);
            return (0);
        } else {
            init_struct(assembl, ac, av);
            check_file(assembl);
            create_cor_file(assembl);
        }
    }
    return (assembl->return_value);
}