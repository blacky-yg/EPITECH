/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** Project header file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int is_error(int status);
int check_input(char **av);
int tab_len(char **tab);
int my_strlen(char *str);
int my_getnbr(char const *str);
char *my_strcpy(char *src);
int my_printf(char *str, ...);
int info_nb(char *str, char c);
int find_next(char *str, char c);
char **parse_info(char *str, char c);
char *cut_cpy(char *str, int n1, int n2);
char *clean_str(char *str);
char *get_cmd(void);
char *my_strcat(char *dest, char *src);
int my_strcmp(char *s1, char *s2);
int my_strncmp(char *s1, char *s2, int n);
char **convert_to_tab(char *str);
int solo_exec(char **arg, char **env);
int basic_exec(char **arg, char **env);
void free_tab(char **tab);
char **clean_tab(char **tab);
void view_table(char **tab);
char **tab_realloc(char **tab, char *str);
int is_same_str(char *str1, char *str2);
int my_exit(char **arg);
