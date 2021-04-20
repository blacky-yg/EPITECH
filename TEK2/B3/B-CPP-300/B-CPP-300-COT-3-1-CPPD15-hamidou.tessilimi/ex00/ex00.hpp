/*
** EPITECH PROJECT, 2021
** day15
** File description:
** ex00
*/

#ifndef EX00_HPP
#define EX00_HPP

#include <iostream>

template<typename T>
void swap(T &first, T &second)
{
    T third;
    third = first;
    first = second;
    second = third;
}

template<typename T>
T min(T &first, T &second)
{
    if (first < second)
        return (first);
    else if (first == second)
        return (second);
    return (second);
}

template<typename T>
T max(T &first, T &second)
{
    if (first > second)
        return (first);
    else if (first == second)
        return (second);
    return (second);
}

template<typename T>
T add(T &first, T &second)
{
    return (first + second);
}

#endif /* !EX00_HPP */