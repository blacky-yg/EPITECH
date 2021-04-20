/*
** EPITECH PROJECT, 2021
** day09
** File description:
** Hunter
*/

#ifndef HUNTER_HPP
#define HUNTER_HPP

#include "Character.hpp"
#include "Warrior.hpp"

class Hunter : public Warrior {
    public:
        // CTOR && DTOR
        Hunter(const std::string &name, int level);
        ~Hunter();

        // OTHER METHODS
        int CloseAttack();
        int RangeAttack();
        void Heal();
        void RestorePower();
};

#endif /* !HUNTER_HPP */