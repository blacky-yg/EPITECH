/*
** EPITECH PROJECT, 2021
** day14m
** File description:
** FruitBox
*/

#ifndef FRUIT_BOX_HPP
#define FRUIT_BOX_HPP

#include "FruitNode.hpp"

class FruitBox {
    public:
        FruitBox(int size);
        ~FruitBox();

        int nbFruits() const;
        bool putFruit(Fruit *f);
        Fruit *pickFruit();
        FruitNode *head() const;
        bool searchFruit(Fruit *f);

        // REMOVE
        void displayList(FruitNode *f) const {
            for (; f != NULL; f = f->next)
                std::cout << "LIST " << f->fruit->getName() << " >> ";
            std::cout << std::endl;
        }

    protected:
        int _nb;
        int _size;
        FruitNode *_f;
};

#endif /* !FRUIT_BOX_HPP */