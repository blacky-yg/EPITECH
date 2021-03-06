/*
** EPITECH PROJECT, 2021
** day14m
** File description:
** FruitBox
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int size): _nb(0), _size(size), _f(nullptr)
{
}

FruitBox::~FruitBox()
{
    delete _f;
}

bool FruitBox::putFruit(Fruit *f)
{
    FruitNode *t = _f;
    if (nbFruits() >= _size)
        return (false);
    FruitNode *newFruit = new FruitNode;
    newFruit->fruit = f;
    if (_f == nullptr) {
        _f = new FruitNode;
        _f = newFruit;
        newFruit->next = nullptr;
        _nb++;
        return (true);
    }
    for (; t->next; t = t->next);
    t->next = newFruit;
    newFruit->next = nullptr;
    _nb++;
    return (true);
}

Fruit *FruitBox::pickFruit()
{
    if (_f == nullptr)
        return (nullptr);
    FruitNode* tmp = _f;
    _f = _f->next;
    _nb--;
    return (tmp->fruit);
}

FruitNode *FruitBox::head() const
{
    if (nbFruits() == 0)
        return (nullptr);
    return (_f);
}

bool FruitBox::searchFruit(Fruit *f)
{
    FruitNode *head = _f;
    for (; head; head = head->next)
        if (head->fruit == f)
            return (true);
    return (false);
}

int FruitBox::nbFruits() const
{
    return (_nb);
}