/*
** EPITECH PROJECT, 2021
** test_my_strlen
** File description:
** test_my_strlen
*/

#include "asm.h"

Test(my_strlen, string, .init=init, .fini=fini)
{
	str = strdup("Just a test");
	cr_assert(my_strlen(str) == strlen(str));
}

Test(my_strlen, empty_str, .init=init, .fini=fini)
{
    str = strdup("");
	cr_assert(my_strlen(str) == strlen(str));
}

Test(my_strlen, s_character_1, .init=init, .fini=fini)
{
	str = strdup("yes\n");
	cr_assert(my_strlen(str) == strlen(str));
}

Test(my_strlen, s_character_2, .init=init, .fini=fini)
{
	str = strdup("no\n");
	cr_assert(my_strlen(str) == strlen(str));
}