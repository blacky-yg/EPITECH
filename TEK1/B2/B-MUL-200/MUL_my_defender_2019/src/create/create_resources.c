/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** create_resources
*/

#include "../../include/defender.h"

void create_resources(game_t *game)
{
    init_screen(&game->screen);
    create_menu(&game->menu);
    create_sound(&game->sound);
    create_music(&game->music);
    create_help(&game->help);
    create_tower(&game->tower);
    create_play(&game->play);
    create_enemy(&game->play.enemy);
    create_pause(&game->pause);
    game->scene = 1;
}