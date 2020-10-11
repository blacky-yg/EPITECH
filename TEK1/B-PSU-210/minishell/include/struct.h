/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** struct.h
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct env_var_s
{
    char **path;
    char *home;
} env_var_t;

typedef struct mini_s
{
    int return_value;
    char **env;
    env_var_t env_var;
    char **cmd;
} mini_t;

#endif /* !STRUCT_H */