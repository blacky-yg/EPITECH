/*
** EPITECH PROJECT, 2021
** objdump
** File description:
** init_struct
*/

#include "../include/objdump.h"

int get_size(long int nb)
{
    int size = 0;
    for (long int i = 1; i < nb || size < 4; size++)
        i *= 16;
    return (size);
}

void *init_struct(gen_t *gen)
{
    struct stat st;
    int fd = 0;
    if ((fd = open(gen->_arg_name, O_RDONLY)) == BAD_RET)
        return (display_error(gen->_arg_name, NOT_FOUND));
    if (access(gen->_arg_name, R_OK) == BAD_RET)
        return (display_error(gen->_arg_name, P_ERROR));
    if (stat(gen->_arg_name, &st) == BAD_RET)
        return (display_error(gen->_arg_name, EMPTY));
    gen->size = st.st_size;
    gen->data = mmap(NULL, gen->size, PROT_READ, MAP_SHARED, fd, 0);
    if (gen->data == MAP_FAILED || gen->size <= 0) {
        close(fd);
        display_warning(gen->_arg_name, BAD_FILE);
        return (MAP_FAILED);
    }
    return (gen->data);
}