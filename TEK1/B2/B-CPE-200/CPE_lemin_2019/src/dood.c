/*
** EPITECH PROJECT, 2020
** let me out
** File description:
** dood
*/

#include "../include/lemin.h"

char *dood(char *str)
{
    int x = 0, y = 0, x_x = 0, y_y = 0, d = 0, h = 0, s = 0, s_s = 0;
    for (str[0] = '\0'; (d != (nb_gal - 1)) && (h != (nb_gal - 1)); ) {
        h = h_equalize(&x_x, &y_y, &d, &h);
        if (d == 0 && h <= 0)
            return (NULL);
        if (h < 0) {
            mat[x_x][y_y] = 2;
            return (dood(str));
        }
        putt(str, d, h);
        if ((d == nb_gal - 1) || (h == nb_gal - 1))
            break;
        d = d_equalize(&x, &y, &d, &h);
        if (d < 0) {
            mat[x][y] = 2;
            return (dood(str));
        }
        putt(str, d, h);
    }
    return (str);
}

int check_now(void)
{
    int a = 0, b = 0;
    for (int y = nb_gal - 1; y >= 0; y--)
        (mat[y][nb_gal - 1] == 1) ? a++ : 0;
    for (int y = nb_gal - 1; y >= 0; y--)
        (mat[nb_gal - 1][y] == 1) ? b++ : 0;
    if (a == 0 || b == 0)
        return (0);
    return (1);
}

void dod(void)
{
    char *str = malloc(sizeof(char) * 10000000);
    int h = 0, a = 0;
    str[0] = '\0';
    my_catt(bank[0], dood(str));
    for (h = nb_gal - 1; h != 0 && mat[0][h] != 1; h--);
    (mat[0][h] == 1) ? mat[0][h] = 2 : mat[0][h];
    for (int i = 1; bank[i] != NULL; i++) {
        my_catt(bank[i], dood(str));
        if (bank[i] == NULL)
            break;
        for (h = nb_gal - 1; h != 0 && mat[0][h] != 1; h--);
        (mat[0][h] == 1) ? mat[0][h] = 2 : mat[0][h];
    }
}
