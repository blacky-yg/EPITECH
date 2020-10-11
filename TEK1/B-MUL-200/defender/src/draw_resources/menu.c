/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** menu
*/

#include "../../include/defender.h"

void menu(game_t *game)
{
    sfRenderWindow_drawSprite(game->screen.window,
                            game->menu.sprite, NULL);
    draw_menu_text(game);
}