/*
** EPITECH PROJECT, 2021
** day17
** File description:
** test_one_time
*/

#include "test_redirect.hpp"
#include "../ex03/OneTime.hpp"
#include "../ex03/Encryption.hpp"
#include "../ex03/Cesar.hpp"

Test(oneTime, test_one_time, .init=redirect_stdout)
{
    OSRedirector oss(std::cout);
    OneTime o("blacky");

    Encryption::encryptString(o, "Zanoti");
    cr_assert_eq(oss.getContent(), "Alnqdg\n");
}

Test(oneTime2, test_one_time2, .init=redirect_stdout)
{
    OSRedirector oss(std::cout);
    OneTime o("blacky");

    Encryption::decryptString(o, "Alnqdg");
    cr_assert_eq(oss.getContent(), "Zanoti\n");
}