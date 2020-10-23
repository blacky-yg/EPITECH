/*
** EPITECH PROJECT, 2019
** my_compute_power_it
** File description:
** the first argument raised to the power p
*/

int my_compute_power_it(int nb, int p)
{
    int power = nb;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    if (p > 0)
        if (p == 1)
            return (nb);
        else {
            while (p != 1) {
                power = power * nb;
                p--;
            }
        }
    return (power);
}
