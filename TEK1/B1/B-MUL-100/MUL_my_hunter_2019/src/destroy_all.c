/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** destroy_all
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void destroy_all(game_t *game)
{
    sfRenderWindow_destroy(game->screen.window);
    sfTexture_destroy(game->start.texture);
    sfSprite_destroy(game->start.sprite);
    sfText_destroy(game->start.text);
    sfFont_destroy(game->start.font);
    sfTexture_destroy(game->play.texture);
    sfSprite_destroy(game->play.sprite);
    sfText_destroy(game->play.text);
    sfFont_destroy(game->play.font);
    sfTexture_destroy(game->bird.texture);
    sfSprite_destroy(game->bird.sprite);
    sfText_destroy(game->help.text);
}