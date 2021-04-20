/*
** EPITECH PROJECT, 2021
** day09
** File description:
** Paladin
*/

#ifndef PALADIN_HPP
#define PALADIN_HPP

#include "Character.hpp"
#include "Warrior.hpp"
#include "Priest.hpp"

class Paladin : public Warrior, public Priest
{
    public:
        // CTOR && DTOR
        Paladin(const std::string &name, int level);
        ~Paladin();

        // OTHER METHODS
        int CloseAttack();
        int RangeAttack();
        void Heal();
        void RestorePower();
        int Intercept(void);
};

#endif /* !PALADIN_HPP */