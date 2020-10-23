/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** create_sound
*/

#include "../../include/defender.h"

int create_sound(sound_t *sound)
{
    sound->click = sfSound_create();
    sound->back_click = sfSound_create();
    if (!sound->click || !sound->back_click)
        return (84);
    sound->click_buffer = sfSoundBuffer_createFromFile(CLICK);
    sound->back_click_buffer = sfSoundBuffer_createFromFile(BACK_CLICK);
    if (!sound->click_buffer || !sound->back_click_buffer)
        return (84);
    sfSound_setBuffer(sound->click, sound->click_buffer);
    sfSound_setBuffer(sound->back_click, sound->back_click_buffer);
    return (0);
}