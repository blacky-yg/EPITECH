/*
** EPITECH PROJECT, 2021
** day02
** File description:
** test_add_str_struct
*/

#include <criterion/criterion.h>
#include "../ex01/mem_ptr.h"

void add_str_struct(str_op_t *str_op);

Test(add_str_struct, test_add_str_struct)
{
    char *str1 = "Hey, ";
    char *str2 = "it works!";
    str_op_t str_op;

    str_op.str1 = str1;
    str_op.str2 = str2;
    add_str_struct(&str_op);
    cr_assert_str_eq(str_op.res, "Hey, it works!");
}