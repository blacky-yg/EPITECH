/*
** EPITECH PROJECT, 2021
** day09
** File description:
** Priest
*/

#ifndef PRIEST_HPP
#define PRIEST_HPP

#include "Mage.hpp"

class Priest : public Mage
{
    public:
        // CTOR && DTOR
        Priest(const std::string &name, int level);
        ~Priest();

        // OTHER METHODS
        int CloseAttack();
        void Heal();
};

#endif /* !PRIEST_HPP */