/*
** EPITECH PROJECT, 2021
** day02m
** File description:
** test_redirect
*/

#ifndef TEST_REDIRECT_H
#define TEST_REDIRECT_H

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <assert.h>
#include <dlfcn.h>

void redirect_stdout(void);
void init(void);
void fini(void);

#endif /* !TEST_REDIRECT_H */