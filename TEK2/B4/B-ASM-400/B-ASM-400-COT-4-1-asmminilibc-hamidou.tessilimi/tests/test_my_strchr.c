/*
** EPITECH PROJECT, 2021
** minilibc
** File description:
** tests_my_strchr
*/

#include "asm.h"

Test(my_strchr, found, .init=init, .fini=fini)
{
    str = strdup("Football");
    cr_assert(strchr(str, 'b') == my_strchr(str, 'b'));
}

Test(my_strchr, not_found, .init=init, .fini=fini)
{
    str = strdup("Football");
    cr_assert(my_strchr(str, 'i') == NULL);
}

Test(my_strchr, empty_str, .init=init, .fini=fini)
{
    str = strdup("");
    cr_assert(my_strchr(str, 'i') == NULL);
}