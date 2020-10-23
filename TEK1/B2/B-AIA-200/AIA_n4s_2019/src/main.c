/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** main
*/

#include "../include/n4s.h"

void free_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
}


int ending(char **tab)
{
    char *str;
    int cmp, cmp1;

    str = send_take("GET_INFO_LIDAR\n");
    tab = str_in_tab(str, ':');
    cmp = my_strncmp(tab[35], "Lap Cleared", 11);
    cmp1 = my_strncmp(tab[35], "Track Cleared", 13);
    free_tab(tab);
    if (cmp == 0 || cmp1 == 0)
        return (1);
    else
        return (-1);
}

int main(int ac, char *av[])
{
    char *str, *stra, **tab1, **tab2, **tab3;
    int end, value;

    end = 0;
    str = send_take("START_SIMULATION\n");
    if (str == NULL)
        return (84);
    while (end != 1) {
        tab1 = get_info(str, tab1);
        value = atof(tab1[3]) - atof(tab1[33]);
        stra = speed(tab1[18], stra, atof(tab1[3]), atof(tab1[33]));
        str = rotate(str, tab1[18], value);
        tab2 = str_in_tab(str, ':');
        end = ending(tab3);
    }
    str = send_take("END_SIMULATION\n");
    free(str);
    free_tab(tab1);
    free_tab(tab2);
    free_tab(tab3);
    return (0);
}
