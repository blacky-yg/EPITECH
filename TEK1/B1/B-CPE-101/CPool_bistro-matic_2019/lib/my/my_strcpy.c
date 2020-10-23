/*
** EPITECH PROJECT, 2019
** Pointers are back: my_strcpy
** File description:
**  a function that copies a string into another.
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
