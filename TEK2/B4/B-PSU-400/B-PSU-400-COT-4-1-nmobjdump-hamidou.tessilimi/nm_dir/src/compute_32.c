/*
** EPITECH PROJECT, 2021
** nm
** File description:
** compute32
*/

#include "../include/nm.h"

int compute_32(gen_t *gen)
{
    int error = 0;
    gen->elf_32 = (Elf32_Ehdr *)gen->data;
    if (check_file_32(gen))
        return (ONE);
    gen->shdr_32 = (Elf32_Shdr *)((char *)gen->data + gen->elf_32->e_shoff);
    if ((error = check_trunc_32(gen))) {
        display_error(gen->_arg_name, (error == ONE) ? FILE_TRUNC
                : BAD_FILE_FORMAT);
        return (ONE);
    }
    if (display_arch_32(gen))
        display_error(gen->_arg_name, NO_SYM);
    return (ZERO);
}