/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

void write_in_term(void);
int cat_file(char *file);

int main(int ac, char **av)
{
    int i = 1;

    if (ac == 1)
        write_in_term();
    else {
        while (i < ac) {
            cat_file(av[i]);
            i++;
        }
    }
    return (0);
}
