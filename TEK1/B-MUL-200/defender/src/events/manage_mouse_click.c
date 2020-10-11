/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** manage_mouse_click
*/

#include "../../include/defender.h"

void manage_mouse_click(game_t *game, int x, int y)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (game->scene == 1)
            manage_menu(game, x, y);
        if (game->scene == 2)
            manage_play(game, x, y);
        if (game->scene == 3)
            manage_help(game, x, y);
        if (game->scene == 4)
            manage_pause(game, x, y);
    }
}