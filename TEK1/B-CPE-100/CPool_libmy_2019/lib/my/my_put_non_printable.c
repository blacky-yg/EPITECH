/*
** EPITECH PROJECT, 2019
** library
** File description:
** my_put_non_printable
*/

#include "../../include/my.h"

void my_put_non_printable(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] == 127) {
            write(1, "\\", 1);
            write(1, "0", 1);
            my_putnbr_base((int)str[i], "01234567");
        } else
            write(1, &str[i], 1);
        i++;
    }
}