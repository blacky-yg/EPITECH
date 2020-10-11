/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** play
*/

#include "../../include/defender.h"

void play(game_t *game)
{
    sfRenderWindow_drawSprite(game->screen.window,
                                game->play.sprite, NULL);
    draw_enemy(game);
    draw_play_text(game);
    tower(game);
    sfRenderWindow_drawRectangleShape(game->screen.window,
                                game->play.rectangle, NULL);
}