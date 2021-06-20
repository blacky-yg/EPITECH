/*
** EPITECH PROJECT, 2021
** MY_TEAMS
** File description:
** laoding.c
*/

#include "logging_server.h"
#include "../../include/struct.h"
#include "../../include/user_func.h"
#include "../../include/loading.h"
#include "../../include/server.h"

int ressources_loading(m_server *svr, char *line)
{
    int (*func_tab[3])(m_server *, char **) = {
        &user_loading, sms_loading, &team_loading};
    const char *tools[3] = {"USER", "MESSAGE", "TEAM"};
    char **wrds_tab = my_split(line, " \n");

    if (wrds_tab == NULL)
        return (-1);
    for (int i = 0; i != 3; i++) {
        if (strcmp(wrds_tab[0], tools[i]) == 0) {
            func_tab[i](svr, wrds_tab);
            return (0);
        }
    } free_two_tab(wrds_tab);
    return (0);
}

int loader(m_server *svr)
{
    FILE *fd = fopen("backup.txt", "r");
    char *line = NULL;
    size_t n = 0;

    if (fd == NULL) {
        printf("Could not open save file.\n");
        return (-1);
    } while (getline(&line, &n, fd) != -1) {
        ressources_loading(svr, line);
        free(line);
        line = NULL;
        n = 0;
    } fclose(fd);
    return (0);
}