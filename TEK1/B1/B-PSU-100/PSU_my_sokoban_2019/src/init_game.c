/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** init_game
*/

#include "../include/my.h"
#include "../include/sokoban.h"

int init_game(sokoban_t *sokoban)
{
    while (resize_screen(sokoban) == 1) {
        printw(sokoban->map);
        refresh();
        manage_key_event(sokoban);
        clear();
    }
    return (0);
}