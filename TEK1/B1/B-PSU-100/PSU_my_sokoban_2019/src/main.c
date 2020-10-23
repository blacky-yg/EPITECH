/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** main
*/

#include "../include/my.h"
#include "../include/sokoban.h"

int main(int ac, char *av[])
{
    sokoban_t *sokoban = malloc(sizeof(sokoban_t));

    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        usage();
        return (0);
    }
    if (ac != 2) {
        my_putstr("./my_sokoban -h for options\n");
        return (84);
    }
    init_sokoban(sokoban, av);
    initscr();
    keypad(stdscr, true);
    curs_set(0);
    noecho();
    init_game(sokoban);
    free(sokoban->map);
    free(sokoban->map_dup);
    free(sokoban);
    return (0);
}