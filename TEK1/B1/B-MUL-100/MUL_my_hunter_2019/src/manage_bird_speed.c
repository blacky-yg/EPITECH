/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** manage_bird_speed
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void manage_bird_speed(game_t *game)
{
    if (game->score >= 400)
        game->bird.pos_x += 0.18;
    if (game->score >= 800)
        game->bird.pos_x += 0.25;
    if (game->score >= 1200)
        game->bird.pos_x += 0.40;
}