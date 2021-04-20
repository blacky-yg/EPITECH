/*
** EPITECH PROJECT, 2021
** day02
** File description:
** tab_to_2dtab
*/

#include <criterion/criterion.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res);

Test(tab_to_2dtab, test_tab_to_2dtab)
{
    int **tab_2d;

    const int tab[42] = {
        0, 1, 2, 3, 4, 5, 6,
        7, 8, 9, 10, 11, 12,
        13, 14, 15, 16, 17,
        18, 19, 20, 21, 22, 23,
        24, 25, 26, 27, 28, 29,
        30, 31, 32, 33, 34, 35,
        36, 37, 38, 39, 40, 41
    };
    tab_to_2dtab(tab, 7, 6, &tab_2d);
    cr_assert(tab_2d[0][0] == 0);
    cr_assert(tab_2d[6][5] == 41);
    cr_assert(tab_2d[4][4] == 28);
    cr_assert(tab_2d[0][3] == 3);
    cr_assert(tab_2d[3][0] == 18);
    cr_assert(tab_2d[4][2] == 26);
}