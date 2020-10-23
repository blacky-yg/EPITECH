/*
** EPITECH PROJECT, 2019
** Pointers are back: my_strcmp
** File description:
** Reproduce the behavior of the strcmp function.
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i;
    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
        i++;
    if (s1[i] < s2[i])
        return (-1);
    else if (s1[i] == s2[i])
        return (0);
    else
        return (1);
}
