/*
** EPITECH PROJECT, 2021
** minilibc
** File description:
** tests_my_strcmp
*/

#include "asm.h"

Test(my_strcmp, simple1, .init=init, .fini=fini)
{
    cr_assert(my_strcmp("Blacky", "Blacky") == strcmp("Blacky", "Blacky"));
}

Test(my_strcmp, simple4, .init=init, .fini=fini)
{
    cr_assert(my_strcmp("", "") == strcmp("", ""));
}