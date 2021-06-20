/*
** EPITECH PROJECT, 2021
** client
** File description:
** my_split
*/

#include "../include/client.h"

char **my_split(char *_str, const char *freed)
{
    int _p = 0, i = 0;
    char **_words_tab = malloc(sizeof(char *) * (get_len(_str, freed) + 100));

    if (_words_tab == NULL || get_len(_str, freed) == 0)
        return (NULL);
    for (; _str[i] != 0; i++) {
        if (_str[i] == '"') {
            i += get_str(&_words_tab[_p], &_str[i + 1]);
            _p++;
        } else if (!check_freed(_str[i], freed)) {
            i += get_sms_word(&_words_tab[_p], &_str[i], freed);
            _p++;
        }
    } _words_tab[_p] = NULL;
    return (_words_tab);
}

bool check_freed(char c, const char *freed)
{
    for (int i = 0; freed[i] != 0; i++)
        if (c == freed[i])
            return (true);
    return (false);
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