/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** manage_keyboard_click
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void manage_keyboard_click(game_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) || sfKeyboard_isKeyPressed(sfKeyQ))
        sfRenderWindow_close(game->screen.window);
    if (sfKeyboard_isKeyPressed(sfKeyR))
        game->scene = 1;
    if (sfKeyboard_isKeyPressed(sfKeyP))
        game->scene = 2;
    if (sfKeyboard_isKeyPressed(sfKeyH))
        game->scene = 3;
}