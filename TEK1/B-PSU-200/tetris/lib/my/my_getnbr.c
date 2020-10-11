/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** return the number send to the fct as a string
*/

#include "../../include/my.h"

int my_getnbr(char *str)
{
    int i = 0;
    int k = 0;
    int res = 0;

    for (; (str[i] == '+' || str[i] == '-') && str[i] != '\0'; i++)
        if (str[i] == '-')
            k++;
    for (int j = 0; str[i] != '\0'; i++, j = 0) {
        for (char c = '0'; c <= '9'; c++) {
            if (c == str[i]) {
                res = (res * 10) + (c - '0');
                j = 1;
            }
        }
        if (j == 0)
            break;
    }
    if ((k % 2) == 1)
        res *= -1;
    return (res);
}