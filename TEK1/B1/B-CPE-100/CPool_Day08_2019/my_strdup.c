/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** allocates memory and copy the string given as argument
*/

int *my_strdup(char *str)
{
    char *string;

    string = malloc((my_strlen(str) + 1) * sizeof(char));
    my_strcpy(string, str);
    return (string);
}
