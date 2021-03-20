/*
** EPITECH PROJECT, 2021
** minilibc
** File description:
** tests_my_strncmp
*/

#include "asm.h"

Test(my_strncmp, simple1, .init=init, .fini=fini)
{
    cr_assert(my_strncmp("", "", 0) == strncmp("", "", 0));
}

Test(my_strncmp, simple2, .init=init, .fini=fini)
{
    cr_assert(my_strncmp("Blacky", "", 5) == strncmp("Blacky", "", 5));
}

Test(my_strncmp, simple3, .init=init, .fini=fini)
{
    cr_assert(my_strncmp("Blacky", "Blacky", 5) == strncmp("Blacky", "Blacky", 5));
}