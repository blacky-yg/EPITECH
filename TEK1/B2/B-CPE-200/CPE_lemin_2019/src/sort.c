/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** sort
*/

#include "../include/lemin.h"

int nb_path(void)
{
    int a = 0;
    for (; bank[a] != NULL && bank[a][0] != '\0'; a++);
    return (a);
}

int is_gd(int *n_ants, int nb)
{
    int s = 0;

    for (int i = 0; i < nb; i++)
        s += n_ants[i];
    return (s);
}

void sort(void)
{
    char *temp = NULL;
    int a = 0, b = 0;
    for (int i = 0; bank[i] != NULL && bank[i][0] != '\0'; i++) {
        for (int j = i + 1; bank[j] != NULL && bank[j][0] != '\0'; j++) {
            a = count_this(bank[i], '-');
            b = count_this(bank[j], '-');
            if (a > b) {
                temp = malloc(sizeof(char) * (my_strlen(bank[i]) + 1));
                temp[0] = '\0';
                my_catt(temp, bank[i]);
                bank[i][0] = '\0';
                my_catt(bank[i], bank[j]);
                bank[j][0] = '\0';
                my_catt(bank[j], temp);
                free(temp);
            }
        }
    }
}