/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** draw_birds
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void draw_bird(game_t *game)
{
    set_bird_pos(game);
    sfSprite_setTexture(game->bird.sprite, game->bird.texture, sfTrue);
    sfSprite_setTextureRect(game->bird.sprite, game->bird.rect);
    sfSprite_setPosition(game->bird.sprite, (sfVector2f)
                        {game->bird.pos_x, game->bird.pos_y});
    sfRenderWindow_drawSprite(game->screen.window,
                                    game->bird.sprite, NULL);
}