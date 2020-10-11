/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** game
*/

#include "../include/tetris.h"

void basic(char *buff)
{
    getch();
    start_color();
    init_pair(1, COLOR_BLUE, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    mvprintw(0, 0, "%s", buff);
    attron(COLOR_PAIR(1));
    refresh();
}

void game(tetris_t *tetris)
{
    char *buf = load_file_in_mem("maps/tetris");
    initscr();
    basic(buf);
    WINDOW *win1 = newwin(10, 25, 10, 0);
    refresh();
    box(win1, (int)'|', (int)'-');
    mvwprintw(win1, 1, 0, "HIGH SCORE");
    wrefresh(win1);
    wgetch(win1);
    endwin();
}
