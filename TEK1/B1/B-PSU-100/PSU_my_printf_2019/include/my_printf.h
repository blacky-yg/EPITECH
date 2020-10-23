/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf.h
*/

#ifndef MY_PRINTF_H
#define MY_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int my_getnbr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
void my_put_non_printable(char *str);
int my_putnbr_base(int nb, char *base);
int my_putstr(char const *str);
int get_unsigned_int(int nb);
char *my_revstr(char *str);
int my_strlen(char const *str);
int my_printf(char *str, ...);
void char_and_string_flags(char *str, int counter, va_list ap);
void number_flags(char *str, int counter, va_list ap);
int ptr_flag(va_list ap, int i, char *str);
int check_number_flags(char c);
int check_str_flags(char c);

#endif /* MY_PRINTF_H */