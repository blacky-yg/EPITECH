/*
** EPITECH PROJECT, 2020
** main
** File description:
** Main of the project
*/

#include "../include/list.h"
#include "../include/minishell.h"

int my_pipe(list_t env, char **cmds)
{
    int pid, status = 0, pipefd[2], len = tab_len(cmds);
    static int i = 0;

    if (pipe(pipefd) == -1)
        return (84);
    if ((pid = fork()) == 0) {
        close(pipefd[0]);
        dup2(pipefd[1], STDOUT_FILENO);
        exec_cmd(my_strcpy(cmds[i]), env);
        exit(0);
    } else if (pid != 0 && pid != -1) {
        close(pipefd[1]);
        dup2(pipefd[0], STDIN_FILENO);
        if (i + 2 >= len) {
            exec_cmd(my_strcpy(cmds[i + 1]), env);
        } else {
            i++;
            my_pipe(env, cmds);
        }
        wait(&status);
    } return (0);
}

int main(int ac, char **av, char **env)
{
    int i = 0;
    list_t list;

    env_to_list(&list, env);
    signal(SIGINT, SIG_IGN);
    i = minishell(list);
    free_list(list);
    return (i);
}
