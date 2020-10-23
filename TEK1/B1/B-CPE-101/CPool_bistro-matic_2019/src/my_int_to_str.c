/*
** EPITECH PROJECT, 2019
** Bistro-matic
** File description:
** my_int_to_str: function that convert int to char
*/

#include "bistromatic.h"
#include "my.h"

void reverse(char *s)
{
    int c, i, j;

    for (i = 0, j = my_strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

char *my_int_to_str(int n, char *s)
{
    int i, sign;

    if ((sign = n) < 0)
        n = -n;
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
    return (s);
}
