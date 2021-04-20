/*
** EPITECH PROJECT, 2021
** day09
** File description:
** Warrior
*/

#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "Character.hpp"

class Warrior : virtual public Character
{
    public:
        // CTOR && DTOR
        Warrior(const std::string &name, int level);
        ~Warrior();

        // OTHER METHODS
        int CloseAttack();
        int RangeAttack();

    protected:
        std::string _weaponName;
};

#endif /* !WARRIOR_HPP */