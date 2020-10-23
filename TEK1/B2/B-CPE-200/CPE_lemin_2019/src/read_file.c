/*
** EPITECH PROJECT, 2020
** file info
** File description:
** file rows, cols and size functions
*/

#include "../include/lemin.h"

int is_t_ign(char *line)
{
    int i = 0;
    for (; line[i] != '\0' && line[i] == ' '; i++);
    if (line[i] != '\0' && line[i] == '#' && line[i + 1] != '#')
        return (0);
    if (line[i] != '\0' && line[i] == '#'
&& line[i + 1] == '#' && (my_strcmp(line, "##start") != 0)
&& (my_strcmp(line, "##end") != 0))
        return (0);
    return (1);
}

void is_t_clean(char *line)
{
    for (int i = 0; line[i] != '\0'; i++)
        if (line[i] == '#' && (my_strcmp(line, "##start") != 0)
&& (my_strcmp(line, "##end") != 0)) {
            line[i] = '\0';
            break;
        }
}

char **read_file(int fd)
{
    char **tab = NULL;
    size_t a = 0;
    ssize_t s = 0;
    int i = 0;
    tab = malloc(sizeof(char *) * 1000000);
    for (i = 0; s != -1; i++) {
        tab[i] = NULL;
        a = 0;
        s = getline(&tab[i], &a, stdin);
        (s > 0) ? tab[i][s - 1] = '\0' : tab[i][s - 1];
        (s != -1 && i != 0 && (is_t_ign(tab[i]) == 0) &&
(my_strcmp(tab[i - 1], "##start") != 0) &&
(my_strcmp(tab[i - 1], "##end") != 0)) ? i -= 1 : 0;
        if (s != -1 && i != 0 && (my_strcmp(tab[i - 1], "##start") != 0)
&& (my_strcmp(tab[i - 1], "##end") != 0))
            is_t_clean(tab[i]);
    }
    tab[i - 1] = NULL;
    return (tab);
}
