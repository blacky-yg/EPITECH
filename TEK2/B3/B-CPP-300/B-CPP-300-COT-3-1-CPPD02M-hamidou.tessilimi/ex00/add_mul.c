/*
** EPITECH PROJECT, 2021
** day02
** File description:
** add_mul
*/

#include <stdio.h>

void add_mul_4param(int first, int second, int *sum, int *product)
{
    *sum = first + second;
    *product = first * second;
}

void add_mul_2param(int *first, int *second)
{
    int nb1 = *first;
    int nb2 = *second;

    *first = nb1 + nb2;
    *second = nb1 * nb2;
}