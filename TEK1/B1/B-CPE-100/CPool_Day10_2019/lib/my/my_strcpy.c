/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** copies a string into another
*/

char *my_strcpy(char *dest, char const *src)
{
    int letter;

    for (letter = 0; src[letter] != '\0'; letter++) {
        dest[letter] = src[letter];
    }
    dest[letter] = '\0';
    return (dest);
}
