/*
** EPITECH PROJECT, 2019
** Pointers : my_getnbr
** File description:
** a function that returns a number, sent to the function as a string.
*/

int my_getnbr(char *str)
{
    int nbr_neg;
    int n;
    int i;

    i = 0;
    nbr_neg = 1;
    n = 0;
    while (str[i] <= ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            nbr_neg *= -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        n = n * 10 + (str[i] - 48);
        i++;
    }
    return (n * nbr_neg);
}
