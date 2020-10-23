/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec
** File description:
** returns the factorial of the number
*/

int my_compute_factorial_rec(int nb)
{
    int factorial;

    factorial = 1;
    if (nb < 0 || nb > 12)
        return (0);
    else if (nb == 0 || nb == 1)
        return (1);
    else
        factorial = nb * my_compute_factorial_rec(nb - 1);
    return (factorial);
}
