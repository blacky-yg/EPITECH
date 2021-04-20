/*
** EPITECH PROJECT, 2021
** day06
** File description:
** test_my_cat
*/

#include "test_redirect.hpp"
#include "../ex03/Cesar.hpp"

Test(is_min_alpha, test_min_alpha, .init=redirect_stdout) {
    OSRedirector oss(std::cout);
    cr_assert(is_min_alpha('a') == true);
    cr_assert(is_min_alpha('A') == false);
}

Test(is_maj_alpha, test_maj_alpha, .init=redirect_stdout) {
    OSRedirector oss(std::cout);
    cr_assert(is_maj_alpha('A') == true);
    cr_assert(is_maj_alpha('a') == false);
}

Test(encryptChar, test_encrypt, .init=redirect_stdout) {
    OSRedirector oss(std::cout);

    Cesar c;
    c.reset();
    c.encryptChar('z');
    cr_assert_eq(oss.getContent(), "c");
}

Test(encryptChar2, test_encrypt2, .init=redirect_stdout) {
    OSRedirector oss(std::cout);

    Cesar c;
    c.reset();
    c.encryptChar('Z');
    cr_assert_eq(oss.getContent(), "C");
}

Test(decryptChar, test_decrypt, .init=redirect_stdout) {
    OSRedirector oss(std::cout);

    Cesar c;
    c.reset();
    c.decryptChar('c');

    cr_assert_eq(oss.getContent(), "z");
}

Test(decryptChar2, test_decrypt2, .init=redirect_stdout) {
    OSRedirector oss(std::cout);

    Cesar c;
    c.reset();
    c.decryptChar('C');

    cr_assert_eq(oss.getContent(), "Z");
}

Test(construct, test_construct, .init=redirect_stdout) {
    OSRedirector oss(std::cout);

    Cesar c;
    cr_assert_eq(oss.getContent(), "");
}

Test(destruct, test_destruct, .init=redirect_stdout) {
    OSRedirector oss(std::cout);

    Cesar c;
    c.~Cesar();
    cr_assert_eq(oss.getContent(), "");
}

Test(reset, test_reset, .init=redirect_stdout) {
    Cesar c;
    c.reset();

    cr_assert(c._nb_shift == 3);
}