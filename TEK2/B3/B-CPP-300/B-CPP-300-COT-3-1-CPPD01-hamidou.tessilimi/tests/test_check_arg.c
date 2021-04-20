/*
** EPITECH PROJECT, 2021
** day01
** File description:
** test_check_arg
*/

#include <criterion/criterion.h>
#include "../ex01/include/menger.h"

Test(check_arg, test_check_arg)
{
    cr_assert(check_arg(3, "0", "0") == 1);
    cr_assert(check_arg(3, "0", "1") == 1);
    cr_assert(check_arg(3, "1", "1") == 1);
    cr_assert(check_arg(3, "2", "1") == 1);
    cr_assert(check_arg(3, "3", "1") == 0);
}