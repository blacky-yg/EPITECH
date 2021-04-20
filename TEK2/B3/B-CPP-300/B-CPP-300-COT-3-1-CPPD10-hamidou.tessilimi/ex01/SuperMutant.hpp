/*
** EPITECH PROJECT, 2021
** day10
** File description:
** SuperMutant
*/

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "AEnemy.hpp"

class SuperMutant : public AEnemy {
    public:
        SuperMutant(int hp = 170, const std::string &type = "Super Mutant");
        ~SuperMutant();

        void takeDamage(int damage);

    protected:
    private:
};

#endif /* !SUPERMUTANT_HPP */