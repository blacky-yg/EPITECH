/*
** EPITECH PROJECT, 2020
** USNameFormatter
** File description:
** main
*/

#include <unistd.h>

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}

void my_strlowercase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
}

int get_nb_space(char *str)
{
    int space = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] == 32)
            space++;
    return (space);
}

void us_name_formatter(char *str)
{
    int space = get_nb_space(str);
    int i = 0;

    if (space == 1) {
        for (; str[i] != 32; i++)
            str[i] = str[i] - 32;
        str[i + 1] = str[i + 1] - 32;
        write(1, str, my_strlen(str));
    } else if (space == 2) {
        str[0] = str[0] - 32;
        for (int j = 0; str[j]; j++) {
            if (str[j - 1] == 32 && (str[j] >= 97 && str[j] <= 122) &&
                str[j + 1] == 32) {
                str[j] = str[j] - 32;
                str[j + 2] = str[j + 2] - 32;
                write(1, &str[j], 1);
                write(1, ".", 1);
            } else
                write(1, &str[j], 1);
        }
    }
}

int main(int ac, char *av[])
{
    if (ac != 2) {
        write(2, "Usage: USNameFormatter string\n", 30);
        return (84);
    } else {
        my_strlowercase(av[1]);
        us_name_formatter(av[1]);
        write(1, "\n", 1);
    }
    return (0);
}