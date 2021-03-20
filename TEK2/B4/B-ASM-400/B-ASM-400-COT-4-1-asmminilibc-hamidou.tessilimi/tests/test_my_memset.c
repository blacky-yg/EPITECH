/*
** EPITECH PROJECT, 2021
** minilibc
** File description:
** tests_my_memset
*/

#include "asm.h"

Test(my_memset, simple_memset, .init=init, .fini=fini)
{
    str = malloc(10);
    cr_assert(my_memset(str, 'f', 11) == memset(str, 'f', 11));
}

Test(my_memset, check_null, .init=init, .fini=fini)
{
    str = malloc(10);
    cr_assert(my_memset(str, 'f', 0) == memset(str, 'f', 0));
}