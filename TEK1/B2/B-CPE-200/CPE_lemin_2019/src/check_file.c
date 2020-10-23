/*
** EPITECH PROJECT, 2020
** check_file
** File description:
** check_file
*/

#include "../include/lemin.h"

int is_n_a_pos_int(char **file)
{
    int i = 0, a = 0, b = is_to_ign(file[0]);
    a = count_this(file[0], ' ');
    if (a != 0 || b != 1 || file[0][0] == '\0')
        return (2);
    for (; file[0][i] != '\0' && file[0][i] >= '0' && file[0][i] <= '9'; i++);
    if (file[0][i] != '\0')
        return (2);
    if (my_strlen(file[0]) > 12)
        return (2);
    if ((ants = my_getnbr(file[0])) == 0)
        return (1);
    return (0);
}

int check_bloc_one(char **file, int *pos)
{
    int i = 1, err = 0, a = 0;
    for (; file[i] != NULL && ((have_start != 1 || have_end != 1)
            || is_not_a_tunnel(file[i]) == 0); i++) {
        (a == 0 && is_not_a_tunnel(file[i]) != 0) ? a = i : a;
        err = 0;
        (is_to_ign(file[i]) == 1) ? err += 1 : 0;
        (is_good_command(file, i) == 1) ? err += 1 : 0;
        ((my_strcmp(file[i], "##start") != 0) && (my_strcmp(file[i], "##end")
!= 0) && is_valid_gal(file, i) == 1) ? err += 1 : 0;
        if (err == 3 || (err == 2 && ((my_strcmp(file[i], "##start") == 0)
|| (my_strcmp(file[i], "##end") == 0)))) {
            file[i] = NULL;
            return (1);
        }
    }
    if (file[i] == NULL && (have_start + have_end) != 2)
        file[a] = NULL;
    h_gal = i + 1;
    *pos = i;
    return (0);
}

int check_bloc_two(char **file, int pos)
{
    int i = pos, j = 0;
    pos_tun = i;
    for (; file[i] != NULL; i++) {
        j = my_strlen(file[i]);
        (j > 0) ? j -= 1 : 0;
        if (file[i][j] == '-' ||
(is_not_a_tunnel(file[i]) == 0 && is_to_ign(file[i]) == 1)) {
            file[i] = NULL;
            return (1);;
        }
        h_tun++;
    }
    return (0);
}

int check_file(char **file)
{
    int a = 0, pos = 0;
    a = is_n_a_pos_int(file);
    (a != 0) ? return_value = 84 : 0;
    if (a == 2)
        return (2);
    if (check_bloc_one(file, &pos) == 1) {
        return_value = 84;
        return (1);
    }
    check_bloc_two(file, pos);
    return (0);
}
