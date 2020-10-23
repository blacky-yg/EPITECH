/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** manage_scene2
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void manage_scene2(game_t *game, int x, int y)
{
    if ((x >= game->bird.pos_x && x <= game->bird.pos_x + 110) &&
        y >= game->bird.pos_y && y <= game->bird.pos_y + 110) {
        game->bird.pos_x = -100;
        game->bird.pos_y = rand() % 500;
        game->score += 100;
        my_putstr("Nice Shoot\tScore + 100: ");
        my_put_nbr(game->score);
        my_putchar('\n');
    }
}