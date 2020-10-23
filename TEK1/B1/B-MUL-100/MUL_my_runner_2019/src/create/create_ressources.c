/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** create_ressources
*/

#include "../../include/my.h"
#include "../../include/my_runner.h"

int create_ressources(game_t *game)
{
    init_screen(&game->screen);
    create_start_ressources(&game->start);
    create_play_ressources(&game->play);
    return (0);
}