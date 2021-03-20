/*
** EPITECH PROJECT, 2021
** minilibc
** File description:
** tests_my_memcpy
*/

#include "asm.h"

Test(my_memcpy, basic_memcpy, .init=init, .fini=fini)
{
    char *string = strdup("ya");
    char *string2 = strdup("ya");
    str = strdup("yi");
    str2 = strdup("yi");

    cr_assert(strcmp(my_memcpy(string, str, 2), memcpy(string2, str2, 2)) == 0);
}

Test(my_memcpy, memcpy, .init=init, .fini=fini)
{
    char *string = strdup("");
    char *string2 = strdup("");
    str = strdup("yi");

    cr_assert(strcmp(my_memcpy(string, str, strlen(str)), memcpy(string2, str, strlen(str))) == 0);
}