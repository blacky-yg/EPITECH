/*
** EPITECH PROJECT, 2021
** day10
** File description:
** RadScorpion
*/

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "AEnemy.hpp"

class RadScorpion : public AEnemy {
    public:
        RadScorpion(int hp = 80, const std::string &type = "RadScorpion");
        ~RadScorpion();

        void takeDamage(int damage);

    protected:
    private:
};

#endif /* !RADSCORPION_HPP */