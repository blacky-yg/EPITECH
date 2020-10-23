/*
** EPITECH PROJECT, 2020
** corewar
** File description:
** main
*/

#include "../include/corewar.h"

void usage(void)
{
    my_putstr("USAGE\n\t./corewar [-dump nbr_cycle] [[-n prog_number] [-a l");
    my_putstr("oad_address] prog_name] ...\n\nDESCRIPTION\n\t-dump nbr_c");
    my_putstr("ycle\tdumps the memory after the nbr_cycle execution (if t");
    my_putstr("he round isn't\n\t\t\talready over) with the following for");
    my_putstr("mat:  32 bytes/line in\n\t\t\thexadecimal (A0BCDEFE1DD3...");
    my_putstr(")\n\t-n prog_number\tsets the next program's number.  By d");
    my_putstr("efault, the first free number\n\t\t\tin the parameter orde");
    my_putstr("r\n\t-a load_address\tsets the next program's loading addr");
    my_putstr("ess.  When no address is\n\t\t\tspecified, optimize the ad");
    my_putstr("dresses so that the processes are as far\n\t\t\taway from ");
    my_putstr("each other as possible.  The addresses are MEM_SIZE modulo");
    my_putstr("\n");
}

int main(int ac, char *av[])
{
    if (ac == 2 && !my_strcmp(av[1], "-h"))
        usage();
    else
        return (84);
    return (0);
}