/*
** EPITECH PROJECT, 2019
** test_my_strcpy
** File description:
** test_my_strcpy
*/

#include <criterion/criterion.h>

Test(my_strcpy, copy_a_string_into_another)
{
    char dest[8];

    my_strcpy(dest, "Hello");
    cr_assert_str_eq(dest, "Hello");
}
