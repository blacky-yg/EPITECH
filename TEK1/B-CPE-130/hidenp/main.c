/*
** EPITECH PROJECT, 2020
** hidenp
** File description:
** main
*/

#include <unistd.h>

int main(int ac, char *av[])
{
    int i = 0;
    int j = 0;

    if (ac != 3) {
        write(2, "Usage: ./hidenp needle haystack\n", 32);
        return (84);
    } else {
        for (; av[1][i] && av[2][j]; j++)
            if (av[1][i] == av[2][j])
                i++;
        av[1][i] == '\0' ? write(1, "1", 1) : write(1, "0", 1);
    }
    write(1, "\n", 1);
    return (0);
}