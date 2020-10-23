/*
** EPITECH PROJECT, 2019
** rush 1
** File description:
** rush 1
*/

#include <unistd.h>

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}

void my_print_dash(int x, int nb_dash)
{
    nb_dash = x - 2;
    my_putchar('o');
    while (nb_dash > 0) {
        my_putchar('-');
        nb_dash--;
    }
    if (x >= 2)
        my_putchar('o');
}

void my_print_pipe(int x, int nb_pipe)
{
    nb_pipe = x - 2;
    my_putchar('|');
    while (nb_pipe > 0) {
        my_putchar(' ');
        nb_pipe--;
    }
    if(x >= 2)
        my_putchar('|');
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0)
        my_putstr("Invalide Size\n");
    for (int i = 1; i <= y; i++) {
        if (i == 1 || i == y)
            my_print_dash(x, y);
        else
            my_print_pipe(x, y);
        my_putchar('\n');
    }
}
