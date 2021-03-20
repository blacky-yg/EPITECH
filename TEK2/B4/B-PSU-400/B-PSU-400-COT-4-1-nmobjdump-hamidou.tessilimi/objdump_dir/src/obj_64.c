/*
** EPITECH PROJECT, 2021
** objdump
** File description:
** obj_64
*/

#include "../include/objdump.h"

int obj_64(gen_t *gen)
{
    int error = 0;
    if (check_file_64(gen))
        return (ONE);
    gen->shdr_64 = (Elf64_Shdr *)((char *)gen->data + gen->elf->e_shoff);
    if ((error = check_trunc_64(gen))) {
        display_error(gen->_arg_name, (error == -1) ? FILE_TRUNC
            : BAD_FILE_FORMAT);
        return (ONE);
    }
    gen->strtab = (char *)((char *)gen->data
        + gen->shdr_64[gen->elf->e_shstrndx].sh_offset);
    display_arch_64(gen);
    return (ZERO);
}