/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** destroy_sound
*/

#include "../../include/defender.h"

void destroy_sound(sound_t *sound)
{
    sfSound_destroy(sound->click);
    sfSoundBuffer_destroy(sound->click_buffer);
    sfSound_destroy(sound->back_click);
    sfSoundBuffer_destroy(sound->back_click_buffer);
}