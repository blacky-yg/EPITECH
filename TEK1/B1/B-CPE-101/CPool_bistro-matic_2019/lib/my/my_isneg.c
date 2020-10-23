/*
** EPITECH PROJECT, 2019
** C Programming my_isneg
** File description:
** A function that displays N negative or P, positive according to parameter
*/

#include "my.h"

int my_isneg(int n)
{
    if(n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return (0);
}
