/*
** EPITECH PROJECT, 2019
** add function
** File description:
** a function that perfoms addtion operation
*/

#include <stdlib.h>
#include "my.h"

char *add_operation(char *str1, char *str2, char *res)
{
    char *result;
    int len_1;
    int len_2;
    int len;
    int i;
    int rest;
    int tmp;

    len = 0;
    i = 0;
    rest = 0;
    len_1 = my_strlen(str1);
    len_2 = my_strlen(str2);
    if (len_1 >= len_2)
        len = len_1 + 1;
    else if (len_2 > len_1)
        len = len_2 + 1;
    result = (char *)malloc(len + 1);
    result[0] = '0';
    result[len] = 0;
    res = result;
    while (i < len_1 || i < len_2 || rest)
    {
        if (i >= len_1 && i >= len_2)
        {
            result[len - i - 1] = rest % 10 + '0';
            rest = rest / 10;
        }
        else if (i >= len_1)
        {
            result[len - i - 1] = (rest + str2[len_2 - i - 1] - '0') % 10 + '0';
            rest = (rest + str2[len_2 - i - 1] - '0') / 10;
        }
        else if (i >= len_2)
        {
            result[len - i - 1] = (rest + str1[len_1 - i - 1] - '0') % 10 + '0';
            rest = (rest + str1[len_1 - i - 1] - '0') / 10;
        }
        else
        {
            tmp = rest + str1[len_1 - i - 1] - '0' + str2[len_2 - i - 1] - '0';
            result[len - i - 1] = tmp % 10 + '0';
            rest = tmp / 10;
        }
        i++;
    }
    result = result + len - i;
    my_strcpy(res, result);
    return (result);
}
