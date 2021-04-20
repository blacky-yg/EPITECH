/*
** EPITECH PROJECT, 2021
** day14m
** File description:
** Fruit
*/

#include "Fruit.hpp"

Fruit::Fruit(int vitamins, const std::string &name): _name(name), _vitamins(vitamins)
{
}

Fruit::~Fruit()
{
}

std::string Fruit::getName() const
{
    return (_name);
}

int Fruit::getVitamins() const
{
    return (_vitamins);
}