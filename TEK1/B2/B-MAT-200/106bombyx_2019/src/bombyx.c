/*
** EPITECH PROJECT, 2020
** bombyx
** File description:
** bombyx
*/

#include "../include/bombyx.h"

int bomb(bombyx_t *bombyx)
{
    int i = 1;
    double result = bombyx->n;
    double res = bombyx->n;

    if (!bombyx->flag) {
        if (result == 0 || result > 1000)
            printf("%d 0.00\n", i);
        else
            printf("%d %.2f\n", i, bombyx->n);
        for (; i < 100; i++) {
            bombyx->n = bombyx->k * bombyx->n * ((1000 - bombyx->n) / 1000);
            if (result > 1000 || result == 0)
                printf("%d 0.00 \n", i+1);
            else
                printf("%d %.2f\n", i+1, bombyx->n);
        }
    } else {
        for (double k = 1; k <= 4; k += 0.01) {
            i = 1;
            result = bombyx->n;
            for (i = 1; i < bombyx->begin; i++)
                result = k * result * ((1000 - result) / 1000);
            for (; i <= bombyx->end; i++) {
                if (res >= 1000 || res == 0)
                    printf("%.2f 0.00\n", k);
                else
                    printf("%.2f %.2f\n", k, (float)result);
                result = k * result * ((1000 - result) / 1000);
            }
        }
    }
    return (0);
}