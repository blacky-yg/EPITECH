/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** check_bad_stat
*/

#include "../include/my.h"
#include "../include/my_runner.h"

int check_bad_stat(int ac, char **av)
{
    char *error = "./my_runner: bad arguments: "
                "0 given but 1 is required\nretry with -h\n";

    if (ac == 1 || ac > 2) {
        write(2, error, my_strlen(error));
        return (84);
    }
    return (0);
}