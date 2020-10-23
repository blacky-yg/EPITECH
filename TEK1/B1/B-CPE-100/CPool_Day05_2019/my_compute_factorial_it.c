/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** factorial of the number
*/

int my_compute_factorial_it(int nb)
{
    int factorial;

    if (nb < 0 || nb > 12)
        return (0);
    else if (nb == 0 || nb == 1)
        return (1);
    else {
        for (factorial = nb; nb != 1; nb--)
            factorial = factorial * (nb - 1);
    }
    return (factorial);
}
