/*
** EPITECH PROJECT, 2021
** day06
** File description:
** test_my_cat
*/

#include "test_redirect.hpp"
#include "../ex00/find.hpp"

Test(find, test_find, .init=redirect_stdout) {
    OSRedirector oss(std::cout);

    std::list<int> list;
    list.push_back(0);
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(10);

    std::cout << *do_find(list, 10) << std::endl;
    cr_assert_eq(oss.getContent(), "10\n");
}

Test(find2, test_find, .init=redirect_stdout) {
    OSRedirector oss(std::cout);

    std::list<int> list;
    list.push_back(25);
    list.push_back(27);
    list.push_back(40);
    list.push_back(15);
    list.push_back(46);

    std::cout << *do_find(list, 5) << std::endl;
    cr_assert_eq(oss.getContent(), "5\n");
}