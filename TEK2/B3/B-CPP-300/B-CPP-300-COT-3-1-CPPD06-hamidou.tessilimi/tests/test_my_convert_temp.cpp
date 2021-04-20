/*
** EPITECH PROJECT, 2021
** day06
** File description:
** test_my_convert_temp
*/

#include "test_redirect.hpp"
#include "../ex01/my_convert_temp.hpp"

Test(Redirector, fahrenheit) {
    OSRedirector oss(std::cout);

    cel_to_far(-10.0);
    cr_assert_eq(oss.getContent(), "          14.000      Fahrenheit\n");
}

Test(Redirector, celsius) {
    OSRedirector oss(std::cout);

    far_to_cel(46.400);
    cr_assert_eq(oss.getContent(), "           8.000         Celsius\n");
}