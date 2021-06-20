/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** my_split
*/

#include "../../include/cmds.h"
#include "../../include/inc.h"
#include "../../include/server.h"

void free_two_tab(char **_tab)
{
    for (int i = 0; _tab[i] != NULL; i++)
        free(_tab[i]);
    free(_tab);
}

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