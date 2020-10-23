/*
** EPITECH PROJECT, 2019
** Libmy, arguments
** File description:
** a function that concatenates n strings to two strings.
*/

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (*str != '\0') {
        str++;
        i++;
    }
    return (i);
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int dest_length;

    dest_length = my_strlen(dest);
    i = 0;
    while (src[i] != '\0' && i < nb) {
        dest[dest_length+i] = src[i];
        i++;
    }
    dest[dest_length+i] = '\0';
    return (dest);
}
