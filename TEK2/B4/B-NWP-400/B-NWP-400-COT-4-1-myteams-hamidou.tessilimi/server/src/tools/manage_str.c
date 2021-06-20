/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** manage_str.c
*/

#include "../../include/cmds.h"
#include "../../include/inc.h"

bool check_freed(char c, const char *freed)
{
    for (int i = 0; freed[i] != 0; i++) {
        if (c == freed[i])
            return (true);
    } return (false);
}

int get_len(char *str, const char *freed)
{
    int size = 0;
    for (; !check_freed(str[size], freed); size++);
    return (size);
}

int get_size_words(char *str, const char *freed)
{
    int words = 0;

    for (int i = 0; str[i] != 0; i++) {
        if (!check_freed(str[i], freed) &&
        (check_freed(str[i + 1], freed) || str[i + 1] == '\0')) {
            words++;
            i += get_len(&str[i], freed);
        }
    } return (words);
}

int get_nb_part(char **_sms)
{
    int _nb = 0;
    for (int i = 0; _sms[i] != NULL; i++)
        _nb++;
    return (_nb);
}
