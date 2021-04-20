/*
** EPITECH PROJECT, 2021
** day02m
** File description:
** test_div
*/

#include <criterion/criterion.h>
#include "../ex04/castmania.h"

Test(integer_div, test_integer_div)
{
    cr_assert(integer_div(4, 2) == 2);
    cr_assert_not(integer_div(4, 2) == 0);
}

Test(decimale_div, test_decimale_div)
{
    cr_assert(decimale_div(5, 2) == 2.50);
    cr_assert_not(decimale_div(4, 2) == 3);
}