/*
** EPITECH PROJECT, 2021
** day02
** File description:
** test_4_params
*/

#include <criterion/criterion.h>

void add_mul_4param(int first, int second, int *sum, int *product);

Test(add_mul_4param, test_4params)
{
    int first = 5;
    int second = 6;
    int sum;
    int product;

    add_mul_4param(first, second, &sum, &product);
    cr_assert(sum == 11);
    cr_assert(product == 30);
}