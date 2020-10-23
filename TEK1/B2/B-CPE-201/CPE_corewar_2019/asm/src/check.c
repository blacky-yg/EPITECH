/*
** EPITECH PROJECT, 2020
** asm
** File description:
** check
*/

#include "../include/asm.h"

void check_file(asm_t *assembl)
{
    if (open(assembl->av[1], O_RDONLY) < 0) {
        assembl->return_value = 84;
        exit(assembl->return_value);
    }
    if (check_ext(assembl->av[1])) {
        assembl->return_value = 84;
        exit(assembl->return_value);
    }
    parse_file(assembl);
    check_header(assembl, assembl->file.lines);
}

void parse_file(asm_t *assembl)
{
    int fd = open(assembl->av[1], O_RDONLY);
    int size = lseek(fd, 0, SEEK_END);
    char *buffer = NULL;
    if (fd == -1) {
        assembl->return_value = 84;
        exit(assembl->return_value);
    }
    buffer = malloc(sizeof(char) * (size + 1));
    if (read(fd, buffer, size + 1) < 0) {
        assembl->return_value = 84;
        exit(assembl->return_value);
    }
    assembl->file.lines = my_str_to_word_array(buffer, '\n');
}

int check_ext(char *name)
{
    int i = 0;
    for (; name[i]; i++);
    if (name[i - 1] != 's')
        return (1);
    if (name[i - 2] != '.')
        return (1);
    return (0);
}

void check_header(asm_t *assembl, char **lines)
{
    for (int i = 0; lines[i]; i++) {
        lines[i] = clean_str(lines[i]);
        if (lines[i][0] != '\0') {
            check_name(assembl, lines, i);
            check_comment(assembl, lines, i);
        }
    }
    if (assembl->file.nb_name > 1 || assembl->file.nb_comment > 1)
        assembl->return_value = 84;
    if (assembl->file.name == NULL || assembl->file.comment == NULL)
        assembl->return_value = 84;
}