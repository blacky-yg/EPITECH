/*
** EPITECH PROJECT, 2021
** day02
** File description:
** func_ptr
*/

#include "func_ptr.h"

void print_normal(const char *str)
{
    write(1, str, strlen(str));
    write(1, "\n", 1);
}

void print_reverse(const char *str)
{
    char *string = strdup(str);
    char c = '0';
    int i = strlen(string) - 1, j = 0;

    for (; i > j; i--, j++) {
        c = string[i];
        string[i] = string[j];
        string[j] = c;
    }
    write(1, string, strlen(string));
    write(1, "\n", 1);
    free(string);
}

void print_upper(const char *str)
{
    char *string = strdup(str);
    for (int i = 0; string[i]; i++)
        string[i] = toupper(string[i]);
    write(1, string, strlen(string));
    write(1, "\n", 1);
    free(string);
}

void print_42(const char *str)
{
    (void)str;
    write(1, "42", 2);
    write(1, "\n", 1);
}

void do_action(action_t action, const char *str)
{
    void (*func_ptr[])(const char *str) = {
        print_normal, print_reverse,
        print_upper, print_42
    };

    (*func_ptr[action])(str);
}