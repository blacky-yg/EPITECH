/*
** EPITECH PROJECT, 2020
** geekNameFormatter
** File description:
** main
*/

#include <unistd.h>

void geek_name_formatter(char *str)
{
    int n = 1;

    for (int i = 0; str[i]; i++, n++) {
        if (n % 2 != 0 && (str[i] >= 97 && str[i] <= 122))
            str[i] = str[i] - 32;
        if (n % 2 == 0 && (str[i] >= 65 && str[i] <= 90))
            str[i] = str[i] + 32;
        str[i] == 'o' || str[i] == 'O' ? str[i] = '0' : str[i];
        str[i] == 'i' || str[i] == 'I' ? str[i] = '1' : str[i];
        str[i] == 'u' || str[i] == 'U' ? str[i] = '2' : str[i];
        str[i] == 'e' || str[i] == 'E' ? str[i] = '3' : str[i];
        str[i] == 'a' || str[i] == 'A' ? str[i] = '4' : str[i];
        str[i] == 'y' || str[i] == 'Y' ? str[i] = '5' : str[i];
        write(1, &str[i], 1);
    }
    write(1, "\n", 1);
}

int main(int ac, char *av[])
{
    if (ac != 2) {
        write(2, "Usage: geekNameFormatter string\n", 32);
        return (84);
    } else
        geek_name_formatter(av[1]);
    return (0);
}