/*
** EPITECH PROJECT, 2021
** day15
** File description:
** ex04
*/

#include "ex04.hpp"

template<typename T>
bool Tester<T>::equal(const T &first, const T &second)
{
    if (first == second)
        return (true);
    return (false);
}

template
bool Tester<int>::equal(const int &first, const int &second);
template
bool Tester<float>::equal(const float &first, const float &second);
template
bool Tester<double>::equal(const double &first, const double &second);
template
bool Tester<std::string>::equal(const std::string &first, const std::string &second);

template<typename T>
bool equal(const T &first, const T &second)
{
    if (first == second)
        return (true);
    return (false);
}

template
bool equal<int>(const int &first, const int &second);
template
bool equal<float>(const float &first, const float &second);
template
bool equal<double>(const double &first, const double &second);
template
bool equal<std::string>(const std::string &first, const std::string &second);