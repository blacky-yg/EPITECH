/*
** EPITECH PROJECT, 2021
** day10
** File description:
** AEnemy
*/

#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, const std::string &type): _HP(hp), _type(type)
{
}

AEnemy::~AEnemy()
{
}

const std::string &AEnemy::getType() const
{
    return (_type);
}

int AEnemy::getHP() const
{
    return (_HP);
}

void AEnemy::takeDamage(int damage)
{
    if (damage < 0)
        return ;
    _HP -= damage;
}