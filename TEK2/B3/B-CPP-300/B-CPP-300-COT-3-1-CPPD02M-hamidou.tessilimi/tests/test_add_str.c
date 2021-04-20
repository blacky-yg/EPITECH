/*
** EPITECH PROJECT, 2021
** day02
** File description:
** test_add_str
*/

#include <criterion/criterion.h>

void add_str(const char *str1, const char *str2, char **res);

Test(add_str, test_add_str)
{
    char *res;
    add_str("Hey, ", "it works!", &res);
    cr_assert_str_eq(res, "Hey, it works!");
}