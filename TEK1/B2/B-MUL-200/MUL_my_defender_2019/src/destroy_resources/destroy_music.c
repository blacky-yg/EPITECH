/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** destroy_play
*/

#include "../../include/defender.h"

void destroy_music(music_t *music)
{
    sfMusic_destroy(music->musique);
}