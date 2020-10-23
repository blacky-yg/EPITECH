/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** displays all the numbers composed by 3 != digits numbers
*/

#include <unistd.h>

int my_print_comb(void)
{
    for (int i = 48; i <= 55; i++) {
        for (int j = i + 1; j <= 56; j++) {
            for (int k = j + 1; k <= 57; k++) {
                my_putchar(i);
                my_putchar(j);
                my_putchar(k);
                if (i == 55 && j == 56 && k == 57)
                {
                } else {
                    my_putchar(44);
                    my_putchar(32);
                }
            }
        }
    }
    my_putchar(10);
}
