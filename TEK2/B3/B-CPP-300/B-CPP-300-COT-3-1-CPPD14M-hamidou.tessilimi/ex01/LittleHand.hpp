/*
** EPITECH PROJECT, 2021
** day14m
** File description:
** LittleHand
*/

#ifndef LITTLE_HAND_HPP
#define LITTLE_HAND_HPP

#include "FruitBox.hpp"

class LittleHand {
    public:
        LittleHand();
        ~LittleHand();

        static void sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes);

    protected:
    private:
};

#endif /* !LITTLE_HAND_HPP */