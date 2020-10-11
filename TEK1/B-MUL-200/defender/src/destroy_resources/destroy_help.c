/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** destroy_help
*/

#include "../../include/defender.h"

void destroy_help(help_t *help)
{
    for (int i = 0; i < 2; i++)
        sfText_destroy(help->text[i]);
    sfFont_destroy(help->font);
}