/*
** EPITECH PROJECT, 2021
** client
** File description:
** manage_cmd
*/

#include "../include/client.h"

int get_sms_word(char **_sms_word, char *_str, const char *freed)
{
    int _wsz = get_len(_str, freed);
    *_sms_word = malloc(sizeof(char) * (_wsz + 100));
    if (*_sms_word == NULL) {
        return (-1);
    } strncpy(*_sms_word, _str, _wsz);
    (*_sms_word)[_wsz] = 0;
    return (_wsz);
}

int get_str(char **_sms_word, char *_str)
{
    int len = 0;
    for (; _str[len] != '\0' && _str[len] != '"'; len++);
    *_sms_word = malloc(sizeof(char) * (len + 1));
    if (*_sms_word == NULL) {
        return (-1);
    } strncpy(*_sms_word, _str, len);
    (*_sms_word)[len] = 0;
    if (_str[len] == 0)
        return (len);
    return (len + 1);
}

int get_nb_part(char **_sms)
{
    int _nb = 0;
    for (int i = 0; _sms[i] != NULL; i++)
        _nb++;
    return (_nb);
}

void free_two_tab(char **_tab)
{
    for (int i = 0; _tab[i] != NULL; i++)
        free(_tab[i]);
    free(_tab);
}

int count_tab(char **tab)
{
    int i = 0;
    while (tab[i++]);
    return (i - 1);
}