/*
** EPITECH PROJECT, 2021
** day02
** File description:
** test_2_params
*/

#include <criterion/criterion.h>

void add_mul_2param(int *first, int *second);

Test(add_mul_2param, test_2params)
{
    int first = 5;
    int second = 6;
    int add_res = first;
    int mul_res = second;

    add_mul_2param(&add_res, &mul_res);
    cr_assert(add_res == 11);
    cr_assert(mul_res == 30);
}