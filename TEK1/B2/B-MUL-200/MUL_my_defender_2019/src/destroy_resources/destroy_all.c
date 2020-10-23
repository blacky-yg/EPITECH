/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** destroy_all
*/

#include "../../include/defender.h"

void destroy_all(game_t *game)
{
    destroy_menu(&game->menu);
    destroy_play(&game->play);
    destroy_help(&game->help);
    destroy_sound(&game->sound);
    destroy_music(&game->music);
    destroy_tower(&game->tower);
    sfRenderWindow_destroy(game->screen.window);
}