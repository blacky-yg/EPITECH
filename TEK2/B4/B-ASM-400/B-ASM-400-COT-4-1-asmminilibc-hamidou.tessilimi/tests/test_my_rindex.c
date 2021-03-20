/*
** EPITECH PROJECT, 2021
** minilibc
** File description:
** tests_my_rindex
*/

#include "asm.h"

Test(my_rindex, simple1, .init=init, .fini=fini)
{
    str = strdup("blacky");
    cr_assert(my_rindex(str, 'k') == rindex(str, 'k'));
}

Test(my_rindex, simple2, .init=init, .fini=fini)
{
    str = strdup("");
    cr_assert(my_rindex(str, 'k') == rindex(str, 'k'));
}