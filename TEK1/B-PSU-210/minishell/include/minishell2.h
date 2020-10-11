/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** minishell2.h
*/

#ifndef MINISHELL_2
#define MINISHELL_2

#include "my.h"
#include "struct.h"
#include "header.h"
#include "define.h"
#include "get_next_line.h"

//get.c
char *get_str(void);
char **get_env(char **env);
char **get_path(char **env);
char *get_var(mini_t *mini, char *var);

//init struct
void init_struct(mini_t *mini, char **env);

//command
int check_cmd(mini_t *mini, char **cmd);
int check_redirect(mini_t *mini, char *cmd);
int check_unix_command(mini_t *mini, char **cmd);
int is_valid_cmd(mini_t *mini, char **cmd);
void my_cd(mini_t *mini, char **cmd);
void my_env(mini_t *mini, char **cmd);
void my_setenv(mini_t *mini, char **cmd);
void my_unsetenv(mini_t *mini, char **cmd);
void my_binary(mini_t *mini, char **cmd);
int check_exit(mini_t *mini, char **exit);

//error_output
void not_found(char *cmd);

//wait_sig
void handle_signal(int sgl);
void display_sig(char *sig);
int wait_sig(pid_t pid);

//put_in_file
int put_in_file(mini_t *mini, char **arg);

//engine
int engine(mini_t *mini);

//my_sh
char *get_cmd(mini_t *mini, char *str);
int my_sh(mini_t *mini);

#endif /* !MINISHELL_2 */