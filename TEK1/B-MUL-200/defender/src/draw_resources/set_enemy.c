/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** set_enemy
*/

#include "../../include/defender.h"

void set_enemy(game_t *game)
{
    game->play.enemy.time = sfClock_getElapsedTime(game->play.enemy.clock);
    if (sfTime_asSeconds(game->play.enemy.time) > 0.25f) {
        if (game->play.enemy.rect.left >= 684 - 57)
            game->play.enemy.rect.left = 0;
        else
            game->play.enemy.rect.left += 57;
        game->play.enemy.pos_x++;
        sfClock_restart(game->play.enemy.clock);
    }
    game->play.enemy.pos_x += 0.40;
}