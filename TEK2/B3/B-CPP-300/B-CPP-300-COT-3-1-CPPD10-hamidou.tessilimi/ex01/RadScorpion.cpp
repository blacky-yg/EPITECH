/*
** EPITECH PROJECT, 2021
** day10
** File description:
** RadScorpion
*/

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(int hp, const std::string &type): AEnemy(hp, type)
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage)
{
    damage -= 3;
    if (damage < 0)
        return ;
    _HP -= damage;
}