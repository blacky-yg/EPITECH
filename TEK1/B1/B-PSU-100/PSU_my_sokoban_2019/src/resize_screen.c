/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** resize_console
*/

#include "../include/my.h"
#include "../include/sokoban.h"

int resize_screen(sokoban_t *sokoban)
{
    char *small_screen = "Your console is too small ~ Resize it";

    while ((COLS < sokoban->cols) || (LINES < sokoban->rows)) {
        mvprintw(LINES / 2, (COLS - 49) / 2, small_screen);
        refresh();
        clear();
    }
    return (1);
}