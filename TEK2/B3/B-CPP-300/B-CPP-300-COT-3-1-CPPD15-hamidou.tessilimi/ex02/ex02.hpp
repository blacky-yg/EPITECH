/*
** EPITECH PROJECT, 2021
** day15
** File description:
** ex02
*/

#ifndef EX02_HPP
#define EX02_HPP

#include <iostream>

template<typename T>
T const &min(T const &first, T const &second)
{
    std::cout << "template min" << std::endl;
    if (first < second)
        return (first);
    return (second);
}

int const min(const int &first, const int &second)
{
    std::cout << "non-template min" << std::endl;
    if (first < second)
        return (first);
    return (second);
}

template<typename T>
T templateMin(const T *array, int size)
{
    int i = 1;
    T res = array[0];
    for (; i < size; i++)
        res = min<T>(res, array[i]);
    return (res);
}

int nonTemplateMin(const int *array, int size)
{
    int i = 1;
    int res = array[0];
    for (; i < size; i++)
        res = min(res, array[i]);
    return (res);
}

#endif /* !EX02_HPP */