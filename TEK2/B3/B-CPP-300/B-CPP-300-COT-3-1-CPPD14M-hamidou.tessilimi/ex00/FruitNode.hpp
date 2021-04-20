/*
** EPITECH PROJECT, 2021
** day14m
** File description:
** FruitNode
*/

#ifndef FRUIT_NODE_HPP
#define FRUIT_NODE_HPP

#include "Fruit.hpp"

class FruitNode {
    public:
        FruitNode() : fruit(nullptr), next(nullptr) {};
        ~FruitNode() {};
        Fruit *fruit;
        FruitNode *next;

    protected:
};

#endif /* !FRUIT_NODE_HPP */