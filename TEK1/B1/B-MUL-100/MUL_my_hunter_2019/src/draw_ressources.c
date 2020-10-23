/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** draw_ressources
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void draw_ressources(game_t *game)
{
    if (game->scene == 1) {
        sfRenderWindow_drawSprite(game->screen.window,
                                    game->start.sprite, NULL);
        draw_start_text(game);
    }
    if (game->scene == 2) {
        sfRenderWindow_drawSprite(game->screen.window,
                                        game->play.sprite, NULL);
        draw_play_text(game);
        draw_bird(game);
    }
    if (game->scene == 3) {
        sfRenderWindow_drawSprite(game->screen.window,
                                        game->start.sprite, NULL);
        draw_help_text(game);
    }
}