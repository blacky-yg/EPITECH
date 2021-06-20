/*
** EPITECH PROJECT, 2021
** unsold
** File description:
** test_args
*/

#include "test_redirect.hpp"

Test(usage, test_usage, .init=redirect_stdout) {
    char *str = strdup("h");
    error(2, &str);
    cr_assert_stderr_eq_str("You must pass two parameters to the programm\n");
}