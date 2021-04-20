/*
** EPITECH PROJECT, 2021
** day02m
** File description:
** test_add
*/

#include <criterion/criterion.h>
#include "../ex04/castmania.h"

Test(normal_add, test_normal_add)
{
    cr_assert(normal_add(2, 4) == 6);
    cr_assert_not(normal_add(2, 5) == 6);
}

Test(absolute_add, test_absolute_add)
{
    cr_assert(absolute_add(4, -2) == 6);
    cr_assert_not(integer_div(2, 5) == 6);
}