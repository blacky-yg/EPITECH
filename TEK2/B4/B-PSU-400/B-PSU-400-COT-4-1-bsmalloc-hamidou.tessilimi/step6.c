/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** step6
*/

#include <stdio.h>

int main(void)
{
    char *str = "toto";
    int i = 0;

    printf("main = %p\nprintf = %p\ni = %p\nstr = %p\n", main, printf, &i, &str);
    return (0);
}