/*
** EPITECH PROJECT, 2019
** Pointers : my_swap
** File description:
** A function that swaps the content of two integers.
*/

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
