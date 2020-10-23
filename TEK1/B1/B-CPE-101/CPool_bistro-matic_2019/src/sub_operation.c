/*
** EPITECH PROJECT, 2019
** sub_operation function
** File description:
** function that perfoms subraction
*/

#include <stdlib.h>
#include "my.h"

char *sub_operation(char *str1, char *str2, char *res)
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
        len = len_1;
    else if (len_2 > len_1)
        len = len_2;
    result = (char *)malloc((len + 1) * sizeof(*result));
    result[len] = 0;
    res = result;
    while (i < len_1 || i < len_2)
    {
        if (i >= len_1)
        {
            tmp = (str2[len_2 - i - 1] - '0') - rest + 10;
            result[len - i - 1] = tmp % 10 + '0';
            rest = tmp < 0;
        }
        else if (i >= len_2)
        {
            tmp = (str1[len_1 - i - 1] - '0') - rest + 10;
            result[len - i - 1] = tmp % 10 + '0';
            rest = tmp < 0;
        }
        else
        {
            tmp = (str1[len_1 - i - 1] - '0') - (str2[len_2 - i - 1] - '0') - rest;
            result[len - i - 1] = tmp % 10 + '0';
            rest = tmp < 0;
        }
        i++;
    }
    result = result + len - i;
    while (result[0] == '0')
        result++;
    my_strcpy(res, result);
    return (result);
}
