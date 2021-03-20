/*
** EPITECH PROJECT, 2021
** nm
** File description:
** compute64
*/

#include "../include/nm.h"

int compute_64(gen_t *gen)
{
    int error = 0;
    if (check_file_64(gen))
        return (ONE);
    gen->shdr_64 = (Elf64_Shdr *)((char *)gen->data
            + gen->elf->e_shoff);
    if ((error = check_trunc_64(gen))) {
        display_error(gen->_arg_name, (error == ONE) ? FILE_TRUNC
                : BAD_FILE_FORMAT);
        return (ONE);
    }
    gen->strtab = (char *)((char *)gen->data +
            gen->shdr_64[gen->elf->e_shentsize].sh_offset);
    display_arch_64(gen);
    return (ZERO);
}