/*
** EPITECH PROJECT, 2021
** day10
** File description:
** AWeapon
*/

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage): _name(name), _AP(apcost), _damage(damage)
{
}

AWeapon::~AWeapon()
{
}

const std::string &AWeapon::getName() const
{
    return (_name);
}

int AWeapon::getAPCost() const
{
    return (_AP);
}

int AWeapon::getDamage() const
{
    return (_damage);
}