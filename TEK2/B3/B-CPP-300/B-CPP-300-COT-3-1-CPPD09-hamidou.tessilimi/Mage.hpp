/*
** EPITECH PROJECT, 2021
** day09
** File description:
** Mage
*/

#ifndef MAGE_HPP
#define MAGE_HPP

#include "Character.hpp"

class Mage : virtual public Character
{
    public:
        // CTOR && DTOR
        Mage(const std::string &name, int level);
        ~Mage();

        // OTHER METHODS
        int CloseAttack();
        int RangeAttack();
        void RestorePower();
};

#endif /* !MAGE_HPP */