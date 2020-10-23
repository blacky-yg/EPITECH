/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** destroy_all
*/

#include "../../include/my.h"
#include "../../include/my_runner.h"

void destroy_all(game_t *game)
{
    sfRenderWindow_destroy(game->screen.window);
    sfTexture_destroy(game->start.texture);
    sfSprite_destroy(game->start.sprite);
    sfText_destroy(game->start.text);
    sfFont_destroy(game->start.font);
    sfMusic_destroy(game->start.music);
    for (int i = 0; i <= 6; i++) {
        sfTexture_destroy(game->play.texture[i]);
        sfSprite_destroy(game->play.sprite[i]);
    }
    sfText_destroy(game->play.text);
    sfFont_destroy(game->play.font);
}