/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** destroy_pause
*/

#include "../../include/defender.h"

void destroy_pause(pause_t *pause)
{
    for (int i = 0; i < 4; i++)
        sfText_destroy(pause->text[i]);
    sfFont_destroy(pause->font);
}