/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** print_debug
*/

#include "../include/tetris.h"

void print_key(char const *str)
{
    for (int k = 0; str[k] != '\0'; k++) {
        if (str[k] == ' ')
            write(1, "(space)", my_strlen("(space)"));
        else
            write(1, &str[k], 1);
    }
}

void print_size(tetris_t tetris)
{
    my_putstr("\nSize :  ");
    my_putnbr(tetris.map_size.nb_cols);
    write(1, "*", 1);
    my_putnbr(tetris.map_size.nb_rows);
    write(1, "\n", 1);
}

void print_debug(tetris_t tetris)
{
    my_putstr("*** DEBUG MODE ***\n");
    my_putstr("Key Left :  ");
    print_key(tetris.key_left);
    my_putstr("\nKey Right :  ");
    print_key(tetris.key_right);
    my_putstr("\nKey Turn :  ");
    print_key(tetris.key_turn);
    my_putstr("\nKey Drop :  ");
    print_key(tetris.key_drop);
    my_putstr("\nKey Quit :  ");
    print_key(tetris.key_quit);
    my_putstr("\nKey Pause :  ");
    print_key(tetris.key_pause);
    my_putstr("\nNext :  ");
    (tetris.next == 1) ? my_putstr("Yes") : my_putstr("No");
    my_putstr("\nLevel :  ");
    my_putnbr(tetris.level);
    print_size(tetris);
}