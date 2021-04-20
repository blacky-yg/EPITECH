/*
** EPITECH PROJECT, 2021
** day17
** File description:
** test_encryption
*/

#include "test_redirect.hpp"
#include "../ex04/Container.hpp"

Test(container, test_container, .init=redirect_stdout) {
    OSRedirector oss(std::cout);
    contain<char, std::list> test;
    test.push('t');
    test.aff();
    cr_assert_eq(oss.getContent(), "Value: t\n");
}

Test(container2, test_container2, .init=redirect_stdout) {
    OSRedirector oss(std::cout);
    contain<char, std::list> test;
    test.push('t');
    test.add();
    test.aff();
    cr_assert_eq(oss.getContent(), "Value: u\n");
}