/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** manage_key_event
*/

#include "../include/sokoban.h"
#include "../include/my.h"

void manage_key_event(sokoban_t *sokoban)
{
    switch (wgetch(stdscr)) {
        case KEY_UP:
            move_up(sokoban);
            break;
        case KEY_DOWN:
            move_down(sokoban);
            break;
        case KEY_LEFT:
            move_left(sokoban);
            break;
        case KEY_RIGHT:
            move_right(sokoban);
            break;
        case 32:
            re_game(sokoban);
            break;
        case 27:
            endwin();
            free(sokoban);
            exit(0);
    }
}