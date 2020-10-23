/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** set_bird_position
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void set_bird_pos(game_t *game)
{
    game->bird.time = sfClock_getElapsedTime(game->bird.clock);
    if (sfTime_asSeconds(game->bird.time) > 0.25f) {
        if (game->bird.rect.left == 220)
            game->bird.rect.left = 0;
        else
            game->bird.rect.left += 110;
        game->bird.pos_x++;
        sfClock_restart(game->bird.clock);
    }
    game->bird.pos_x += 0.13;
    if (game->bird.pos_x >= 700) {
        game->bird.pos_x = -160;
        game->bird.pos_y = rand() % 540;
    }
    manage_bird_speed(game);
}