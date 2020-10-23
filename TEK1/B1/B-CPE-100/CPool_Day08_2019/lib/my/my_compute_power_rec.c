/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** first argument raised to power p
*/

int my_compute_power_rec(int nb, int p)
{
    int power = nb;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    if (p > 0)
        if (p == 1)
            return (nb);
        else
            return (nb * my_compute_power_rec(nb, p-1));
}
