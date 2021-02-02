/*
** EPITECH PROJECT, 2021
** Ncurses_interfaces.cpp
** File description:
** sdfgh
*/

#include <ncurses.h>
#include "getData.hpp"

void print(WINDOW *window, int x, int y, const char *str, int color, bool is_underline)
{
    wcolor_set(window, color, NULL);
    if (is_underline) {
        wattron(window, A_UNDERLINE);
        wattron(window, A_BOLD);
    }
    mvwprintw(window, x, y, str);
    if (is_underline) {
        wattroff(window, A_UNDERLINE);
        wattroff(window, A_BOLD);
    }
    wcolor_set(window, 0, NULL);
}
