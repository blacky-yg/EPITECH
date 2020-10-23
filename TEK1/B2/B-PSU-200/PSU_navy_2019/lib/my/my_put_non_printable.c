/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my_put_non_printable
*/

#include "../../include/my.h"

void my_put_non_printable(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] == 127) {
            write(1, "\\", 1);
            write(1, "0", 1);
            my_putnbr_base((int)str[i], "01234567");
        } else
            write(1, &str[i], 1);
        i++;
    }
}
