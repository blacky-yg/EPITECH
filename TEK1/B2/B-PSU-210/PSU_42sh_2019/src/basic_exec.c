/*
** EPITECH PROJECT, 2020
** basic_exec
** File description:
** Basic execution
*/

#include "../include/list.h"
#include "../include/minishell.h"

int valid_path(char *path)
{
    struct stat info;
    int i = 0;

    errno = 0;
    i = stat(path, &info);
    if (i == -1)
        return (-2);
    if (S_ISDIR(info.st_mode) == 1) {
        my_printf("%s: Permission denied.\n", path);
        return (-1);
    } if (access(path, X_OK) == -1) {
        my_printf("%s: Permission denied.\n", path);
        return (-1);
    }
    return (0);
}

int solo_exec(char **arg, char **env)
{
    int i = 0;
    pid_t pid = fork();

    if (pid == 0) {
        execve(arg[0], arg, env);
    } else if (pid != 0 && pid != -1)
        wait(&i);
    return 0;
}

int solo_exec1(char **arg, char **env)
{
    int i = 0;
    int wrong = 0;
    pid_t pid = fork();

    if (pid == 0) {
        wrong = execve(arg[0], arg, env);
        if (wrong == -1 && errno == 8) {
            my_printf("%s\n", strerror(errno));
        }
    } else if (pid != 0 && pid != -1) {
        wait(&i);
        is_error(i);
    }
    return 0;
}

int basic_exec(char **arg, char **env)
{
    int i = valid_path(arg[0]);

    if (i == 0)
        solo_exec1(arg, env);
    else
        return (i);
    return (0);
}
