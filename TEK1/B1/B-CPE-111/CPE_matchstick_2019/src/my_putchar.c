/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** my_putchar
*/

#include "../include/matchstick.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}