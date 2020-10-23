/*
** EPITECH PROJECT, 2020
** minishell2
** File description:
** signal
*/

#include "../include/minishell2.h"

void handle_signal(int sgl)
{
    if (sgl == SIGINT) {
        my_putstr("\n<~~Blacky~~> ");
        signal(SIGINT, handle_signal);
    }
}

void display_sig(char *sig)
{
    if (!my_strcmp(sig, "Floating point exception")) {
        my_putstr("Floating exception");
        return;
    }
    my_putstr(sig);
}

int wait_sig(pid_t pid)
{
    int status = 0;
    int term_sig = 0;
    int ret = waitpid(pid, &status, 0);
    if (WIFSIGNALED(status)) {
        term_sig = WTERMSIG(status);
        if (term_sig != SIGINT && term_sig != 0) {
            display_sig(strsignal(term_sig));
            if (WCOREDUMP(status))
                my_putstr(" (core dumped)");
            write(1, "\n", 1);
        }
    }
}