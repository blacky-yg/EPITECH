/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** create_music
*/

#include "../../include/defender.h"

int create_music(music_t *music)
{
    music->musique = sfMusic_createFromFile(MUSIC);
    if (!music->musique)
        return (84);
    sfMusic_play(music->musique);
    sfMusic_setLoop(music->musique, sfTrue);
    return (0);
}