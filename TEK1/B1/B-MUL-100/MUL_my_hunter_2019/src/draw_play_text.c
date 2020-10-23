/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** draw_start_text
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void draw_play_text(game_t *game)
{
    sfText_setString(game->play.text, "Menu");
    sfText_setCharacterSize(game->play.text, 70);
    sfText_setPosition(game->play.text, (sfVector2f){650, 620});
    sfRenderWindow_drawText(game->screen.window, game->play.text, NULL);
}