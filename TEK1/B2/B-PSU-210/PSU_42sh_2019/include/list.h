/*
** EPITECH PROJECT, 2020
** list
** File description:
** linked list definition
*/

#include <stdlib.h>

typedef struct element {
    struct element *prev;
    char *str;
    struct element *next;
} elem_t;

typedef struct list {
    elem_t *first;
    elem_t *last;
} list_t;

void add_last(list_t *l, char *str);
void add_first(list_t *l, char *str);
void rm_elem(elem_t **box);
void free_list(list_t list);
int my_printf(char *str, ...);
void view_list(list_t list);
void env_to_list(list_t *list, char **env);
char **list_to_env(list_t list);
void my_unsetenv(list_t env, char **arg);
int  my_setenv(list_t env, char **arg);
char *my_getenv(list_t env, char *str);
int my_cd(list_t env, char **arg);
int exec_cmd(char *cmd, list_t env);
int use_path(char **arg, char **tab_env, list_t env);
int minishell(list_t env);
int my_pipe(list_t env, char **cmds);
