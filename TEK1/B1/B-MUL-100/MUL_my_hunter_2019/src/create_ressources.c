/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** create_ressources
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

int create_ressources(game_t *game)
{
    init_screen(&game->screen);
    create_start_ressources(&game->start);
    create_play_ressources(&game->play);
    create_help_ressources(&game->help);
    create_rect(&game->bird);
    create_bird_ressources(&game->bird);
    game->score = 0;
    game->life = 0;
    return (0);
}