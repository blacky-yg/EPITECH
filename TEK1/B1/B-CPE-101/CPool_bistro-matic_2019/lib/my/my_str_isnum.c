/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** my_str_isnum
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str = "")
        return (1);
    while (str[i] != '\0') {
        if (str[i] < 48 || str[i] > 57)
            return (0);
        i++;
    }
    return (1);
}
