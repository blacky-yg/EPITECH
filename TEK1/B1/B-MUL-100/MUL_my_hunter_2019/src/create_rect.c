/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** create_rect
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void create_rect(bird_t *bird)
{
    bird->rect.top = 0;
    bird->rect.width = 110;
    bird->rect.height = 110;
    bird->rect.left = 0;
}