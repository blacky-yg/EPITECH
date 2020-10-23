/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** draw_ressources
*/

#include "../../include/my.h"
#include "../../include/my_runner.h"

void draw_ressources(game_t *game)
{
    if (game->scene == 1) {
        sfRenderWindow_drawSprite(game->screen.window,
                                    game->start.sprite, NULL);
        draw_start_text(game);
    }
    if (game->scene == 2) {
        for (int i = 0; i <= 6; i++)
            sfRenderWindow_drawSprite(game->screen.window,
                                        game->play.sprite[i], NULL);
        draw_play_text(game);
    }
}