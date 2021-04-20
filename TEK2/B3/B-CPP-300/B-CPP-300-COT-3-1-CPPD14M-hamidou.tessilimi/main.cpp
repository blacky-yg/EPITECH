/*
** EPITECH PROJECT, 2021
** day14m
** File description:
** main
*/

#include "Lemon.hpp"
#include "Banana.hpp"
#include "Fruit.hpp"
#include "FruitBox.hpp"
#include "Lime.hpp"
#include "LittleHand.hpp"

int main(void)
{
    // EX00

    // Lemon l;
    // Banana b;
    // std::cout << l.getVitamins() << std::endl;
    // std::cout << b.getVitamins() << std::endl;
    // std::cout << l.getName() << std::endl;
    // std::cout << b.getName() << std::endl;
    // Fruit &f = l;
    // std::cout << f.getVitamins() << std::endl;
    // std::cout << f.getName() << std::endl;

    // EX00 Linked List
    // Banana b;
    // Lemon l;
    // Banana b2;
    // FruitBox box(2);
    // Fruit *f;

    // (void)f;
    // f = box.pickFruit();
    // if (f == nullptr)
    //     std::cout << "is nullptr" << std::endl;
    // std::cout << box.nbFruits() << std::endl;
    // if (box.putFruit(&l) == false)
    //     std::cout << "put error" << std::endl;
    // std::cout << box.nbFruits() << std::endl;
    // f = box.pickFruit();
    // if (f == nullptr)
    //     std::cout << "is nullptr" << std::endl;
    // else
    //     std::cout << f->getName() << std::endl;
    // std::cout << box.nbFruits() << std::endl;
    // if (box.putFruit(&l) == false)
    //     std::cout << "put error" << std::endl;
    // std::cout << box.nbFruits() << std::endl;
    // if (box.putFruit(&l) == false)
    //     std::cout << "put error" << std::endl;
    // std::cout << box.nbFruits() << std::endl;
    // if (box.putFruit(&b) == false)
    //     std::cout << "put error" << std::endl;
    // std::cout << box.nbFruits() << std::endl;
    // if (box.putFruit(&b2) == false)
    //     std::cout << "put error" << std::endl;
    // std::cout << box.nbFruits() << std::endl;


    // EX01
    Banana *bananas = new Banana[3];
    Lemon *lemons = new Lemon[3];
    Lime *limes = new Lime[3];
    FruitBox unsorted(9);
    FruitBox banana_Box(3);
    FruitBox lemon_Box(3);
    FruitBox limes_Box(2);
    Fruit *f = 0;

    (void)f;
    for (int i = 0; i < 3; i++)
    {
        if (unsorted.putFruit(&bananas[i]) == false)
        {
            std::cerr << "Error: putFruit" << std::endl;
            return (84);
        }
        if (unsorted.putFruit(&lemons[i]) == false)
        {
            std::cerr << "Error: putFruit" << std::endl;
            return (84);
        }
        if (unsorted.putFruit(&limes[i]) == false)
        {
            std::cerr << "Error: putFruit" << std::endl;
            return (84);
        }
    }
    LittleHand::sortFruitBox(unsorted, lemon_Box, banana_Box, limes_Box);
    std::cout << unsorted.nbFruits() << std::endl;
    std::cout << lemon_Box.nbFruits() << std::endl;
    std::cout << banana_Box.nbFruits() << std::endl;
    std::cout << limes_Box.nbFruits() << std::endl;

    // for (; (f = unsorted.pickFruit()) != nullptr;)
    //     std::cout << f->getName() << std::endl;
    // for (; (f = lemon_Box.pickFruit()) != nullptr;)
    //     std::cout << f->getName() << std::endl;
    // for (; (f = banana_Box.pickFruit()) != nullptr;)
    //     std::cout << f->getName() << std::endl;
    // for (; (f = limes_Box.pickFruit()) != nullptr;)
    //     std::cout << f->getName() << std::endl;
    delete[] bananas;
    delete[] lemons;
    delete[] limes;

    return (0);
}