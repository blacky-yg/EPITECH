/*
** EPITECH PROJECT, 2020
** my_cd
** File description:
** Same behavior with cd
*/

#include "../include/minishell.h"
#include "../include/list.h"

int search_add(list_t env, char *str, char *str_add)
{
    elem_t *box = env.first;

    while (box != NULL) {
        if (my_strncmp(str, box->str, my_strlen(str)) == 1) {
            box->str = my_strcat(box->str, my_strcat("/", str_add));
        }
        box = box->next;
    }
}

int search_reset(list_t env, char *str, char *new_str)
{
    elem_t *box = env.first;

    while (box != NULL) {
        if (my_strncmp(str, box->str, my_strlen(str)) == 1) {
            box->str = my_strcat(str, my_strcat("=", new_str));
        }
        box = box->next;
    }
}

int error_manage(char *path)
{
    struct stat info;

    int i = stat(path, &info);
    if (my_strcmp(path, "-") == 1)
        return (0);
    if (i == -1) {
        my_printf("%s: No such file or directory.\n", path);
        return (-1);
    }
    if (S_ISDIR(info.st_mode) == 0) {
        my_printf("%s: Not a directory.\n", path);
        return (-1);
    }
    if (access(path, X_OK) == -1) {
        my_printf("%s: Permission denied.\n", path);
        return (-1);
    }
    return (0);
}

int go_to_dir(list_t *env, char *dir)
{
    char *str;
    char *tmp = my_strcpy(my_getenv(*env, "OLDPWD"));

    if (my_strcmp(dir, "-") == 1) {
        if (my_strlen(tmp) == 0) {
            my_printf(": No such file or directory.\n");
            return (0);
        }
        search_reset(*env, "OLDPWD", getcwd(str, 256));
        chdir(tmp);
        search_reset(*env, "PWD", getcwd(str, 256));
    } else {
        search_reset(*env, "OLDPWD", getcwd(str, 256));
        chdir(dir);
        search_reset(*env, "PWD", getcwd(str, 256));
    }
    return (0);
}

int my_cd(list_t env, char **arg)
{
    int len = tab_len(arg);

    if (len > 2) {
        my_printf("cd: too many arguments.\n");
        return (84);
    } else if (len == 1 || is_same_str("~", arg[1])) {
        chdir(my_getenv(env, "HOME"));
    } else {
        if (is_same_str("-", arg[1]))
            my_printf(": No such file or directory.\n");
        else if (chdir(arg[1]) == -1 && !check_input(arg))
            my_printf("%s: %s.\n", arg[1], strerror(errno));
    }
}
