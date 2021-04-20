/*
** EPITECH PROJECT, 2021
** day15
** File description:
** ex04
*/

#ifndef EX04_HPP
#define EX04_HPP

#include <iostream>
#include <string>

template<typename T>
bool equal(const T &first, const T &second);

template<typename T>
class Tester {
    public:
        bool equal(const T &first, const T &second);
};

#endif /* !EX04_HPP */