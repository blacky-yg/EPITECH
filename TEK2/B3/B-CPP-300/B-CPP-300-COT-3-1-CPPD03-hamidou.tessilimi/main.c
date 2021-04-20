/*
** EPITECH PROJECT, 2021
** day03
** File description:
** main
*/

#include "../B-CPP-300-COT-3-1-CPPD03-hamidou.tessilimi/string.h"

// int main(void)
// {
//     string_t s;
//     char **str;

//     string_init(&s, "Hamidou est trop noir");
//     str = s.split_c(&s, ' ');
//     printf("%s\n", str[3]);
//     string_destroy(&s);
//     return (0);
// }

int main(void)
{
    string_t string;
    string_t saver;
    char *tab;

    string_init(&saver, "1234567");
    string_init(&string, "ABCDEFGH");
    tab = strdup("femiange");
    size_t size = copy(&saver, tab, 3, 5);
    printf("%s\n%ld\n", tab, size);
    printf("%s\n", saver.str);
    string_destroy(&string);
    string_destroy(&saver);
    free(tab);
}