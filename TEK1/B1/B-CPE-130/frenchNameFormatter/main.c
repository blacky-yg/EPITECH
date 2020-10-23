/*
** EPITECH PROJECT, 2020
** frenchNameFormatter
** File description:
** main
*/

#include <unistd.h>

void my_strlowercase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
}

int my_strlen(char *str)
{
    int i = 0;

    for (; *str; str++, i++);
    return (i);
}

void french_name_formatter(char *str)
{
    int counter = 0;

    my_strlowercase(str);
    str[0] = str[0] - 32;
    for (int i = 0; str[i]; i++)
        if (str[i] == 45 && (str[i + 1] >= 97 && str[i + 1] <= 122))
            str[i + 1] = str[i + 1] - 32;
    for (; str[counter] != 32; counter++);
    for (; str[counter]; counter++)
        if (str[counter] >= 65 && str[counter] <= 90)
            str[counter] = str[counter] + 32;
        else if (str[counter] >= 97 && str[counter] <= 122)
            str[counter] = str[counter] - 32;
    write(1, str, my_strlen(str));
}

int main(int ac, char *av[])
{
    if (ac != 2) {
        write(2, "Usage: frenchNameFormatter string\n", 34);
        return (84);
    } else {
        french_name_formatter(av[1]);
        write(1, "\n", 1);
    }
    return (0);
}