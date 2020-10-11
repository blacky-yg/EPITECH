/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** manage_mouse_hover
*/

#include "../../include/defender.h"

void manage_mouse_hover(game_t *game, int x, int y)
{
    if (game->scene == 1)
        hover_menu(game->menu, x, y);
    if (game->scene == 3)
        hover_help(game->help, x, y);
    if (game->scene == 4)
        hover_pause(game->pause, x, y);
}