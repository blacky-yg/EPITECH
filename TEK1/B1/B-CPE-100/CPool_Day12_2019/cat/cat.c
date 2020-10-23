/*
** EPITECH PROJECT, 2019
** cat
** File description:
** cat
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include "include/my.h"

void write_in_term(void)
{
    char *str;

    while (read(STDIN_FILENO, &str, 1) > 0)
        write(1, &str, 1);
}

void is_dir(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '/')
        {
            my_putstr("cat: ");
            my_putstr(str);
            my_putstr(" Is a directory\n");
        }
    }
}

int cat_file(char *file)
{
    int i = 0;
    int file_desc;
    int reader;
    char buffer[25690];

    file_desc = open(file, O_RDONLY);
    reader = read(file_desc, buffer, 25689);
    if (file_desc == -1)
    {
        my_putstr("cat: ");
        my_putstr(file);
        my_putstr(" : No such file or directory\n");
        close(file_desc);
        return (84);
    } else {
    while (buffer[i] != '\0') {
        my_putchar(buffer[i]);
        i++;
    }
    }
    close(file_desc);
    return (0);
}
