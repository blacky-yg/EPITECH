/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** draw_enemy
*/

#include "../../include/defender.h"

void draw_enemy(game_t *game)
{
    set_enemy(game);
    sfSprite_setTexture(game->play.enemy.sprite,
                        game->play.enemy.texture, sfTrue);
    sfSprite_setTextureRect(game->play.enemy.sprite, game->play.enemy.rect);
    sfSprite_setPosition(game->play.enemy.sprite, (sfVector2f)
                        {game->play.enemy.pos_x, game->play.enemy.pos_y});
    sfRenderWindow_drawSprite(game->screen.window,
                                    game->play.enemy.sprite, NULL);
}