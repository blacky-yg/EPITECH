/*
** EPITECH PROJECT, 2021
** day06
** File description:
** test_my_cat
*/

#include "test_redirect.hpp"

Test(is_pair, test_is_pair, .init = redirect_stdout)
{
    OSRedirector oss(std::cout);

    int i = is_pair(2);
    cr_assert(i == 0);
    int j = is_pair(3);
    cr_assert(j == 1);
}