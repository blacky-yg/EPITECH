/*
** EPITECH PROJECT, 2020
** boxerNameFormatter
** File description:
** main
*/

#include <unistd.h>

void my_strlowcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
}

int find_the(char *str, int i)
{
    if (str[i - 1] == 32 && str[i] == 'T' &&
        str[i + 1] == 'h' && str[i + 2] == 'e' && str[i + 3] == 32) {
        str[i] = 't';
        return (1);
    }
    return (0);
}

int find_last_middle_char(char *str)
{
    int space = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '-' && space == 0)
            space++;
        if (space == 1 && str[i] == 32)
            return (i);
    }
    return (0);
}

void boxerNameFormatter(char *str)
{
    my_strlowcase(str);
    str[0] = str[0] - 32;
    for (int i = 0; str[i]; i++) {
        if (str[i] == 32 || str[i] == 45)
            str[i + 1] = str[i + 1] - 32;
        if (find_the(str, i))
            write(1, "\"", 1);
        if (find_last_middle_char(str) == i)
            write(1, "\"", 1);
        write(1, &str[i], 1);
    }
    write(1, "\n", 1);
}

int main(int ac, char *av[])
{
    if (ac != 2) {
        write(2, "Usage: boxerNameFormatter string\n", 33);
        return (84);
    } else
        boxerNameFormatter(av[1]);
    return (0);
}