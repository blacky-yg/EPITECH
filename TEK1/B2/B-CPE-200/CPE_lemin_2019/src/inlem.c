/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** inlem
*/

#include "../include/lemin.h"

int is_a_tun(char *line)
{
    if (count_this(line, '-') == 1 && count_this(line, ' ') == 0)
        return (0);
    return (1);
}

void display_input(char **input)
{
    int i = 1;
    my_putstr("#number_of_ants\n");
    my_put_nbr(ants);
    write(1, "\n", 1);
    my_putstr((input[1] != NULL) ? "#rooms\n" : "");
    for (; input[i] != NULL && input[i][0] != '\0'
&& is_a_tun(input[i]) == 1; i++) {
        write(1, input[i], my_strlen(input[i]));
        write(1, "\n", 1);
    }
    for (int j = i; input[i] != NULL && input[i][0] != '\0'; i++) {
        my_putstr((i == j) ? "#tunnels\n" : "");
        write(1, input[i], my_strlen(input[i]));;
        write(1, "\n", 1);
    }
}

int inlem(char **input, lem_t *lemin)
{
    char **lines = NULL;
    int a = 0;
    return_value = 0;
    input = read_file(0);
    if (input[0] == NULL) {
        return_value = 84;
        return (1);
    }
    if ((a = check_file(input)) == 2)
        return (1);
    else if (a == 2)
        parse_info_n_print(input);
    else
        solve_the_anthill(input);
    return (0);
}
