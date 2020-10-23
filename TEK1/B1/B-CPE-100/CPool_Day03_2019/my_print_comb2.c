/*
** EPITECH PROJECT, 2019
** my_print_comb2
** File description:
** displays 2 2 digits number in order
*/

#include <unistd.h>

void my_print_nb(int i, int j, int k, int l)
{
    my_putchar(i);
    my_putchar(j);
    my_putchar(32);
    my_putchar(k);
    my_putchar(l);
}

int my_print_comb2(void)
{
    for (int i = 48; i <= 57; i++) {
        for (int j = 48; j <= 57; j++) {
            for (int k = 48; k <= 57; k++) {
                for (int l = 48; l <= 57; l++) {
                    if ((i < k) || (i == k) && (j < l))
                    {
                        my_print_nb(i, j, k, l);
                        if (!(i == 57 && j == 56))
                        {
                            my_putchar(44);
                            my_putchar(32);
                        }
                    }
                }
            }
        }
    }
    my_putchar(10);
}
