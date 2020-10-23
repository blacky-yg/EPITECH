/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** displays the lowercase alphabet in ascending order on a single line
*/

#include <unistd.h>

int my_print_alpha(void)
{
    for (int alpha = 97; alpha <= 122; alpha++)
        my_putchar(alpha);
}
