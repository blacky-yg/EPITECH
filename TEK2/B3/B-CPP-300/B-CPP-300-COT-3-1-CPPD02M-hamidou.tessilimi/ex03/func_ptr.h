/*
** EPITECH PROJECT, 2021
** day02
** File description:
** func_ptr.h
*/

#ifndef FUNC_PTR_H
#define FUNC_PTR_H

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include "func_ptr_enum.h"

void print_normal(const char *str);
void print_reverse(const char *str);
void print_upper(const char *str);
void print_42(const char *str);
void do_action(action_t action, const char *str);

#endif /* !FUNC_PTR_H */