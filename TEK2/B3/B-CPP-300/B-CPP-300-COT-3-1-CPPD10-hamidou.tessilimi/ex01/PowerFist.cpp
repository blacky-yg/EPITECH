/*
** EPITECH PROJECT, 2021
** day10
** File description:
** PowerFist
*/

#include "PowerFist.hpp"

PowerFist::PowerFist(const std::string &name, int apcost, int damage): AWeapon(name, apcost, damage)
{
}

PowerFist::~PowerFist()
{
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}