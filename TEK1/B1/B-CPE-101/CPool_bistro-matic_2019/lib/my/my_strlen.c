/*
** EPITECH PROJECT, 2019
** Pointers : my_strlen
** File description:
** A function that returns the number of character in the string
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
