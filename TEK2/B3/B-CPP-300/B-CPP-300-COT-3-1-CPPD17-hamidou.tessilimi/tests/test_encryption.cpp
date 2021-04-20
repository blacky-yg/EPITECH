/*
** EPITECH PROJECT, 2021
** day17
** File description:
** test_encryption
*/

#include "test_redirect.hpp"
#include "../ex03/Encryption.hpp"
#include "../ex03/Cesar.hpp"

Test(encryptString, test_encrypt_string, .init=redirect_stdout) {
    OSRedirector oss(std::cout);

    Cesar c;
    Encryption::encryptString(c, "Je m'appelle Blacky!");

    cr_assert_eq(oss.getContent(), "Mi s'iyzpxys Rcsvet!\n");
}

Test(decryptString, test_decrypt_string, .init=redirect_stdout) {
    OSRedirector oss(std::cout);

    Cesar c;
    Encryption::decryptString(c, "Mi s'iyzpxys Rcsvet!");

    cr_assert_eq(oss.getContent(), "Je m'appelle Blacky!\n");
}