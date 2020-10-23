/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** manage_mouse_click
*/

#include "../../include/my.h"
#include "../../include/my_runner.h"

void manage_mouse_click(game_t *game)
{
    int x = sfMouse_getPositionRenderWindow(game->screen.window).x;
    int y = sfMouse_getPositionRenderWindow(game->screen.window).y;

    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (game->scene == 1)
            manage_scene1(game, x, y);
        if (game->scene == 2)
            manage_scene2(game, x, y);
    }
}