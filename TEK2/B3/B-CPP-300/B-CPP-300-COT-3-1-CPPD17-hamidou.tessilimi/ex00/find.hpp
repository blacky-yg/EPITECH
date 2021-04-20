/*
** EPITECH PROJECT, 2021
** day17
** File description:
** find
*/

#ifndef FIND_HPP
#define FIND_HPP

#include <iterator>
#include <algorithm>

template<typename U>
auto do_find(U &ref, int nb) {
    auto res = std::find(ref.begin(), ref.end(), nb);
    return (res);
}

#endif /* !FIND_HPP */