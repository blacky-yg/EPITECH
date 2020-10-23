/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** minishell1.h
*/

#ifndef _MINISHELL_1_
#define _MINISHELL_1_

#include "c_header.h"

#ifndef READ_SIZE
#define READ_SIZE (1)
#endif /* !READ_SIZE_ */

typedef struct data_s
{
    char *str;
    struct data_s *next;
} data_t;

typedef struct list_s
{
    data_t *first;
} list_t;

void my_putstr(char *str);
char *my_strdup(char *str);
char *my_strcpy(char *dest, char *src);
int my_strlen(char *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int nb);

void handle_ctrl_c(int sgl);
char *get_next_line(int fd);
char *get_str(void);
int is_space(char *str, int i);
int is_not_space(char *str, int i);
char *clean_str(char *str);
int minishell(char **array, char *env[], list_t *list);
int command(char *array[], char *env[], list_t *list);
int words_nb(char *str);
int my_cd(char *array[], char *env[]);
list_t *my_env(char *env[]);
char *get_env(char *str, char *env[]);
char *my_strcat(char *dest, char const *src);
char **my_str_to_word_array(char *str);
void display_array(char **array, int nb_of_words);
int check_dir(char *str);
list_t *create_empty_env(char *array[], char *env[], list_t *list);
list_t *my_setenv(char *array[], char *env[], list_t *list);
void my_unsetenv(char *array[], char *env[]);

list_t *init_list();
void display_list(list_t *list);
list_t *put_in_list(list_t *list, char *str);
list_t *put_in_list_end(list_t *list, char *str);
int my_sh(char *env[]);

#endif /* !_MINISHELL_1_ */