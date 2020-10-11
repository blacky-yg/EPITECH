/*
** EPITECH PROJECT, 2020
** palindrome
** File description:
** main
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    return (str);
}

int is_palindrome(char *str)
{
    int len = my_strlen(str) - 1;
    char *str_cpy;

    str = my_strlowcase(str);
    str_cpy = str;
    for (int i = 0; str[i] != '\0'; i++, len--)
        if (str[i] != str_cpy[len])
            return (0);
    return (1);
}

int main(int ac, char *av[])
{
    if (ac != 2) {
        write(2, "Error: missing arguments.\n", 26);
        return (84);
    } else {
        if (is_palindrome(av[1]))
            write(1, "palindrome!\n", 12);
        else
            write(1, "not a palindrome.\n", 18);
    }
    return (0);
}