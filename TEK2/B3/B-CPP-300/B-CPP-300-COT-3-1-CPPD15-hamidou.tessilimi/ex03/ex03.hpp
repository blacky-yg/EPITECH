/*
** EPITECH PROJECT, 2021
** day15
** File description:
** ex03
*/


#ifndef EX00_HPP
#define EX00_HPP

#include <iostream>

template<typename T>
void print(T const &elem)
{
    std::cout << elem << std::endl;
}

template<typename T>
void foreach(const T *element, void (&func)(const T &elem), const int &size)
{
    for (int i = 0; i < size; i++)
        func(element[i]);
}

#endif /* !EX00_HPP */