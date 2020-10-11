/*
** EPITECH PROJECT, 2020
** anagram
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

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
    return (str);
}

void my_swap(char *let1, char *let2)
{
    char tmp = '0';

    tmp = *let1;
    *let1 = *let2;
    *let2 = tmp;
}

int anagram(char *str1, char *str2)
{
    str1 = my_strlowcase(str1);
    str2 = my_strlowcase(str2);
    for (int i = 0; str1[i] && str2[i]; i++) {
        for (int j = i + 1; str1[j] && str2[j]; j++) {
            if (str1[i] > str1[j])
                my_swap(&str1[i], &str1[j]);
            if (str2[i] > str2[j])
                my_swap(&str2[i], &str2[j]);
        }
    }
    for (int i = 0; str1[i] && str2[i]; i++) {
        if (str1[i] != str2[i]) {
            write(1, "no anagrams.\n", 13);
            return (0);
        }
    }
    write(1, "anagram!\n", 9);
    return (0);
}

int main(int ac, char *av[])
{
    if (ac != 3) {
        write(2, "Error: not enough arguments.\n", 29);
        return (84);
    } else {
        if (my_strlen(av[1]) != my_strlen(av[2]))
            write(1, "no anagrams.\n", 13);
        else
            anagram(av[1], av[2]);
    }
    return (0);
}