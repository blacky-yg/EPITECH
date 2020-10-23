/*
** EPITECH PROJECT, 2020
** fizzbuzz
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

void fizzbuzz(int begin, int end)
{
    for (int i = begin; i <= end; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz\n");
        else if (i % 3 == 0)
            printf("Fizz\n");
        else if (i % 5 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
}

int main(int ac, char *av[])
{
    char *str_error = "Error: the second parameter must\
                be greater than the first one.\n";
    int begin = 0;
    int end = 0;

    if (ac != 3)
        return (84);
    else {
        begin = atoi(av[1]);
        end = atoi(av[2]);
        if (begin > end) {
            write(2, str_error, my_strlen(str_error));
            return (84);
        } else
            fizzbuzz(begin, end);
    }
    return (0);
}