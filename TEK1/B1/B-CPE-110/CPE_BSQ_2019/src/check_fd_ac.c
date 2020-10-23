/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** bsq_mission
*/

#include "../include/bsq.h"
#include "../include/my.h"

int check_fd_ac(int ac, char *av[])
{
    int fd = 0;

    if (ac == 2) {
        if (my_strcmp(av[1], "-h") == 0) {
            my_putstr("USAGE\n    ./bsq [map]\n");
            my_putstr("DESCRIPTION\n    ");
            my_putstr("bsq will find the biggest square in your map\n    ");
            my_putstr("map must contain '.' , 'o' and it's first"
                        "line contains the number of lines on the map\n");
        }
        fd = open(av[1], O_RDONLY);
        if (fd != -1) {
            close(fd);
            return (84);
        } else {
            write(2, "The file doesn't exist\n", 23);
            return (0);
        }
    } else {
        write(2, "Wrong format, please use : ./bsq -h to find help\n", 40);
        return (0);
    }
}