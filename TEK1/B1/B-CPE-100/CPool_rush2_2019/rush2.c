/*
** EPITECH PROJECT, 2019
** rush2
** File description:
** what language is this??
*/

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);

int rush2(char *str, char word)
{
    int i;
    int count = 0;

    for ( i = 0; str[i] != '\0'; i++) {
        if (str[i] == word)
            count++;
        if (str[i] == word - 32 || str[i] == word + 32)
            count++;
    }
    return (count);
}

int main(int ac, char **av)
{
    int i = 2;

    while (i < ac) {
        my_putchar(av[i][0]);
        my_putchar(':');
        my_put_nbr(rush2(av[1], av[i][0]));
        my_putchar('\n');
        i++;
    }
    if ( i < ac)
        return (0);
    else
        return (84);
    return (0);
}
