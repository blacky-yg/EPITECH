/*
** EPITECH PROJECT, 2021
** Project
** File description:
** Ncurses
*/

#include "../include/Ncurses.hpp"

void init_curses_window()
{
    initscr();
    noecho();
    cbreak();
    getch();
    endwin();
}

