/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** manage_keyboard_click
*/

#include "../../include/defender.h"

void manage_keyboard_click(game_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyQ))
        sfRenderWindow_close(game->screen.window);
    if (game->scene == 1 && sfKeyboard_isKeyPressed(sfKeyP))
            game->scene = 2;
    if (game->scene == 2 && sfKeyboard_isKeyPressed(sfKeyEscape))
            game->scene = 4;
}