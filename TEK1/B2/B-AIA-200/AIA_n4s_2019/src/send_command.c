/*
** EPITECH PROJECT, 2020
** n4stek
** File description:
** send command
*/

#include "../include/n4s.h"
#include "../include/my.h"

char *send_take(char *str)
{
    int x = 0;
    char *ans = NULL;
    size_t size = 0;

    write(1, str, my_strlen(str));
    x = getline(&ans, &size, stdin);
    if (x == -1 || ans[0] == '\n')
        return (NULL);
    else
        return (ans);
}
