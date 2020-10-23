/*
** EPITECH PROJECT, 2020
** clean_str
** File description:
** main
*/

#include <unistd.h>

void clean_str(char *str)
{
    int i = 0;

    for (; str[i] == ' ' || str[i] == '\t'; i++);
    for (; str[i] != '\0';) {
        for (; str[i] != 32 && str[i] != '\t'; i++)
            write(1, &str[i], 1);
        for (; str[i] == 32 || str[i] == '\t'; i++);
        if (str[i] != '\0')
            write(1, " ", 1);
    }
    write(1, "\n", 1);
}

int main(int ac, char *av[])
{
    if (ac != 2)
        write(1, "\n", 1);
    else
        clean_str(av[1]);
    return (0);
}