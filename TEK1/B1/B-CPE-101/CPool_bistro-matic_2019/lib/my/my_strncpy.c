/*
** EPITECH PROJECT, 2019
** Pointers are back: my_strncpy
** File description:
** A function that copies n characters from a string into another.
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    i = 0;
    while(i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
