/*
** EPITECH PROJECT, 2020
** asm
** File description:
** struct
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct file_s
{
    char **lines;
    char *name;
    char *comment;
    int nb_comment;
    int nb_name;
    int fd;
} file_t;

typedef struct asm_s
{
    int return_value;
    int ac;
    char **av;
    file_t file;
} asm_t;

#endif /* !STRUCT_H */