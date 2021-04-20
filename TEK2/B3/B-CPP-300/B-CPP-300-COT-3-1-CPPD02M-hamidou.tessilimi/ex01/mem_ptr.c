/*
** EPITECH PROJECT, 2021
** day02
** File description:
** mem_ptr
*/

#include "mem_ptr.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void add_str(const char *str1, const char *str2, char **res)
{
    *res = malloc(sizeof(char) * (strlen(str1) + strlen(str2) + 1));
    strcpy(*res, str1);
    strcat(*res, str2);
}

void add_str_struct(str_op_t *str_op)
{
    str_op->res = malloc(sizeof(char) * (strlen(str_op->str1) +
                strlen(str_op->str2) + 1));
    strcpy(str_op->res, str_op->str1);
    strcat(str_op->res, str_op->str2);
}