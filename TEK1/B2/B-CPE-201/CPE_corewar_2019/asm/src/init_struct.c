/*
** EPITECH PROJECT, 2020
** asm
** File description:
** init_struct
*/

#include "../include/asm.h"

void init_struct(asm_t *assembl, int ac, char *av[])
{
    assembl->return_value = 0;
    assembl->ac = ac;
    assembl->av = av;
    assembl->file.nb_comment = 0;
    assembl->file.nb_name = 0;
    assembl->file.comment = NULL;
    assembl->file.name = NULL;
    assembl->file.fd = 0;
}