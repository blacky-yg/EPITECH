/*
** EPITECH PROJECT, 2020
** 107transfer
** File description:
** transfer
*/

#include "../include/transfer.h"

int transfer(int ac, char *av[])
{
    double result = 1;
    double num = 0;
    double denum = 0;
    int step = 1;
    int len_str = 0;

    for (double i = 0; i < 1.0010; i += 0.001) {
        result = 1;
        step = 1;
        for (; step < ac; step += 2) {
            num = 0;
            len_str = my_strlen(av[step]) - 1;
            for (; len_str >= 0; len_str--) {
                for (; len_str >= 0 && av[step][len_str] != '*'; len_str--);
                num = num * i + get_double(&av[step][len_str + 1]);
            }
            denum = 0;
            len_str = my_strlen(av[step + 1]) - 1;
            for (; len_str >= 0; len_str--) {
                for (; len_str >= 0 && av[step + 1][len_str] != '*'; len_str--);
                denum = denum * i + get_double(&av[step + 1][len_str + 1]);
            }
            if (denum == 0)
                return (1);
            result *= num / denum;
            if (i == 0.001 && result == 0.00000)
                return (1);
        }
        printf("%.3f -> %.5f\n", i, result);
    }
    return (0);
}