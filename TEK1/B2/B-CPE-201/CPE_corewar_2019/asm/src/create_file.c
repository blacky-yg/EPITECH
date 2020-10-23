/*
** EPITECH PROJECT, 2020
** asm
** File description:
** create_file
*/

#include "../include/asm.h"

char *get_file_name(char *name)
{
    int len = my_strlen(name);
    int i = 0;
    char *file_name = NULL;
    for (len -= 1; len >= 0 && name[len] != '/'; len--, i++);
    file_name = malloc(sizeof(char) * (i + 1));
    len = my_strlen(name);
    for (len -= 1, i = 0; len >= 0 && name[len] != '/'; len--, i++)
        file_name[i] = name[len];
    file_name[i] = '\0';
    my_revstr(file_name);
    return (file_name);
}

char *change_name(char *name)
{
    int len = my_strlen(name) + 3, i = 0;
    char *cor_file = malloc(sizeof(char) * len);
    if (cor_file == NULL)
        return (NULL);
    for (; name[i] && name[i] != '.'; i++)
        cor_file[i] = name[i];
    cor_file[i] = name[i];
    cor_file[i + 1] = 'c';
    cor_file[i + 2] = 'o';
    cor_file[i + 3] = 'r';
    cor_file[i + 4] = '\0';
    return (cor_file);
}

void create_cor_file(asm_t *assembl)
{
    char *file_name = get_file_name(assembl->av[1]);
    char *cor_file = NULL;
    if (file_name != NULL) {
        cor_file = change_name(file_name);
        if ((assembl->file.fd = open(cor_file, O_CREAT |
                            O_RDWR | O_TRUNC, 0666)) < 0)
            assembl->return_value = 84;
    }
}