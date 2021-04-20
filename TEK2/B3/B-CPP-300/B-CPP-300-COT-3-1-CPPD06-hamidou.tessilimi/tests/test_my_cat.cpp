/*
** EPITECH PROJECT, 2021
** day06
** File description:
** test_my_cat
*/

#include "test_redirect.hpp"
#include "../ex00/my_cat.hpp"

// Test(Redirector, read_all_content) {
//     OSRedirector oss(std::cout);

//     my_cat(1, "simple_file");
//     cr_assert_eq(oss.getContent(), "Blacky\n");
// }

Test(Redirector, not_exists_file) {
    OSRedirector oss(std::cerr);

    char const *str = "Blacky";
    my_cat(2, (char *)str);
    cr_assert_eq(oss.getContent(), "my_cat: Blacky: No such file or directory\n");
}

Test(Redirector, no_file) {
    OSRedirector oss(std::cerr);
    my_cat(0, NULL);
    cr_assert_eq(oss.getContent(), "my_cat: Usage: ./my_cat file [...]\n");
}