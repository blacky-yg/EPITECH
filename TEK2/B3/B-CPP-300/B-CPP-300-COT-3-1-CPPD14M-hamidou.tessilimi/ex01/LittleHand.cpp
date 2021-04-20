/*
** EPITECH PROJECT, 2021
** day14m
** File description:
** LittleHand
*/

#include "LittleHand.hpp"

LittleHand::LittleHand()
{
}

LittleHand::~LittleHand()
{
}

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
    FruitNode *head = unsorted.head();
    int nb = unsorted.nbFruits();
    int i = 0;

    while (i < nb && head != NULL) {
        if (head->fruit->getName() == "lemon") {
            lemons.putFruit(head->fruit);
            unsorted.pickFruit();
            // delete head->fruit;
        } else if (head->fruit->getName() == "lime") {
            limes.putFruit(head->fruit);
            unsorted.pickFruit();
            // delete head->fruit;
        } else if (head->fruit->getName() == "banana") {
            bananas.putFruit(head->fruit);
            unsorted.pickFruit();
        }
        i++;
        head = head->next;
    }
}