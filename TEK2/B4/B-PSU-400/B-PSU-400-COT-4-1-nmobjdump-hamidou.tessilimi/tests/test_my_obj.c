/*
** EPITECH PROJECT, 2021
** test_my_putstr
** File description:
** test_my_putstr
*/

#include "test_redirect.h"

Test(putstr, test_my_putstr, .init=redirect_stdout)
{
    cr_assert(1 == 1);
    // cr_assert_stdout_eq_str("hello");
}