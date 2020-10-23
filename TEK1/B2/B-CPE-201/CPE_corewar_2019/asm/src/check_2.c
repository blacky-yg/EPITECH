/*
** EPITECH PROJECT, 2020
** asm
** File description:
** check_2
*/

#include "../include/asm.h"

char *get_var(char *line, asm_t *assembl)
{
    char *str = NULL;
    int i = 0, j = 0, tmp = 0;

    for (; line[i] && line[i] != '"'; i++);
    if (line[i] == '\0')
        assembl->return_value = 84;
    i++;
    for (tmp = i; line[i] && line[i] != '"'; i++, j++);
    if (line[i] != '"' || (line[i + 1] != '\0' && line[i + 1] != ' ' &&
                                line[i + 1] != '\t'))
        assembl->return_value = 84;
    str = malloc(sizeof(char) * (j + 1));
    for (i = tmp, j = 0; line[i] && line[i] != '"'; i++, j++)
        str[j] = line[i];
    str[j] = '\0';
    return (str);
}

void check_name(asm_t *assembl, char **lines, int i)
{
    int name_len = my_strlen(NAME_CMD_STRING);
    int cmd_len = my_strlen(COMMENT_CMD_STRING);
    if (!my_strncmp(NAME_CMD_STRING, lines[i], name_len)) {
        assembl->file.nb_name += 1;
        assembl->file.name = get_var(lines[i], assembl);
        if (assembl->file.name == NULL)
            assembl->return_value = 84;
        if (my_strlen(assembl->file.name) > PROG_NAME_LENGTH)
            assembl->return_value = 84;
    }
}

void check_comment(asm_t *assembl, char **lines, int i)
{
    int cmd_len = my_strlen(COMMENT_CMD_STRING);
    if (!my_strncmp(COMMENT_CMD_STRING, lines[i], cmd_len)) {
        assembl->file.nb_comment += 1;
        assembl->file.comment = get_var(lines[i], assembl);
        if (assembl->file.comment == NULL)
            assembl->return_value = 84;
        if (my_strlen(assembl->file.comment) > COMMENT_LENGTH)
            assembl->return_value = 84;
    }
}