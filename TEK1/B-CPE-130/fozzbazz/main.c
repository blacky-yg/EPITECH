/*
** EPITECH PROJECT, 2020
** fozzbazz
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}

void fozzbazz(int begin, int end)
{
    for (int i = begin; i <= end; i++) {
        if (i % 2 == 0 && i % 9 == 0)
            printf("FozzBazz\n");
        else if (i % 2 == 0)
            printf("Fozz\n");
        else if (i % 9 == 0)
            printf("Bazz\n");
        else
            printf("%d\n", i);
    }
}

int main(int ac, char *av[])
{
    int begin = 0;
    int end = 0;

    if (ac != 3)
        return (84);
    else {
        begin = atoi(av[1]);
        end = atoi(av[2]);
        if (begin > end)
            return (84);
        else
            fozzbazz(begin, end);
    }
    return (0);
}