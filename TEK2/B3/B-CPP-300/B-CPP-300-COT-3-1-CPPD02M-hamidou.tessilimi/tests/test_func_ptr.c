/*
** EPITECH PROJECT, 2021
** day02m
** File description:
** test_func_ptr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../ex03/func_ptr.h"
#include "test_redirect.h"

Test(func_ptr1, test_func_ptr1, .init=redirect_stdout)
{
    const char *str = "I'm using function pointers!";
    do_action(PRINT_NORMAL, str);
    cr_assert_stdout_eq_str("I'm using function pointers!\n");
}

Test(func_ptr2, test_func_ptr2, .init=redirect_stdout)
{
    const char *str = "I'm using function pointers!";
    do_action(PRINT_REVERSE, str);
    cr_assert_stdout_eq_str("!sretniop noitcnuf gnisu m'I\n");
}

Test(func_ptr3, test_func_ptr3, .init=redirect_stdout)
{
    const char *str = "I'm using function pointers!";
    do_action(PRINT_UPPER, str);
    cr_assert_stdout_eq_str("I'M USING FUNCTION POINTERS!\n");
}

Test(func_ptr4, test_func_ptr4, .init=redirect_stdout)
{
    const char *str = "I'm using function pointers!";
    do_action(PRINT_42, str);
    cr_assert_stdout_eq_str("42\n");
}