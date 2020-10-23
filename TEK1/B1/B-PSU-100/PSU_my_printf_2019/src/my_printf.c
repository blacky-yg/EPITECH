/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include "../include/my_printf.h"

int my_printf(char *str, ...)
{
    va_list ap;
    int counter = 0;

    va_start(ap, str);
    while (str[counter] != '\0') {
        if (str[counter] == '%') {
            if (check_str_flags(str[counter + 1]) == 0)
                char_and_string_flags(str, counter++, ap);
            if (check_number_flags(str[counter + 1]) == 0)
                number_flags(str, counter++, ap);
            if (str[counter + 1] == 'p')
                ptr_flag(ap, counter++, str);
        } else
            write(1, &str[counter], 1);
        counter++;
    }
    va_end(ap);
    return (counter);
}