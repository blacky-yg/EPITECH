/*
** EPITECH PROJECT, 2021
** bsmalloc
** File description:
** step1
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
}

size_t strlen(char *str)
{
    size_t nb = 0;
    for (int i = 0; str[i]; i++, nb++);
    my_putchar('a');
    return (nb);
}

void *malloc(size_t nb)
{
    my_putstr("Flying\n");
    return (NULL);
}