/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** my_sh
*/

#include "../include/minishell1.h"

int my_sh(char *env[])
{
    char *str = get_str();
    char **array = NULL;
    char *buffer = NULL;
    int nb_of_words = 0;
    list_t *list = malloc(sizeof(list_t));

    while (my_strcmp(str, "exit") != 0) {
        signal(SIGINT, handle_ctrl_c);
        str = clean_str(str);
        nb_of_words = words_nb(str);
        array = my_str_to_word_array(str);
        list = my_env(env);
        minishell(array, env, list);
        str = get_str();
    }
    my_putstr("exit\n");
    return (0);
}