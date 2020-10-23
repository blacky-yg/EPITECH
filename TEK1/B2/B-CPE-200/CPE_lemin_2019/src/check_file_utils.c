/*
** EPITECH PROJECT, 2020
** check_file
** File description:
** check_file_utils
*/

#include "../include/lemin.h"

int is_valid_gal(char **line, int i)
{
    int c = 0, j = 0;
    line[i] = clean_line(line[i]);
    if (count_this(line[i], ' ') != 2)
        return (1);
    for (j = 0; line[i][j] != ' ' && line[i][j] != '\0'; j++)
        (is_not_alpha(line[i][j]) && is_not_digit(line[i][j])) ? c = 1 : 0;
    if (c == 1)
        return (1);
    for (; line[i][j] != '\0'; j++)
        ((line[i][j] != ' ') && (is_not_digit(line[i][j]))) ? c = 1 : 0;
    if (c == 1)
        return (1);
    return (0);
}

int is_to_ign(char *line)
{
    if (line[0] != '\0' && line[0] == '#' && line[1] != '#')
        return (0);
    if (line[0] != '\0' && line[0] == '#'
&& line[1] == '#' && (my_strcmp(line, "##start") != 0)
&& (my_strcmp(line, "##end") != 0))
        return (0);
    return (1);
}

int is_good_command(char **line, int i)
{
    if (have_start == 0 && (my_strcmp(line[i], "##start") == 0)
        && (is_valid_gal(line, (i + 1)) == 0)) {
        pos_start = i;
        have_start = 1;
        return (0);
    }
    if (have_end == 0 && (my_strcmp(line[i], "##end") == 0)
        && (is_valid_gal(line, (i + 1)) == 0)) {
        pos_end = i;
        have_end = 1;
        return (0);
    }
    return (1);
}

int is_not_a_tunnel(char *line)
{
    int t = count_this(clean_line(line), '-');
    int e = count_this(clean_line(line), ' ');

    if (t != 1 || e != 0 || line[0] == '#')
        return (0);
    return (1);
}
