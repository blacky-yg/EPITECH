/*
** EPITECH PROJECT, 2019
** my_print_revalpha
** File description:
** displays the lowercase alphabet in descending order on a single line
*/

#include <unistd.h>

int my_print_revalpha(void)
{
    for (int alpha = 122; alpha >= 97; alpha--)
        my_putchar(alpha);
}
