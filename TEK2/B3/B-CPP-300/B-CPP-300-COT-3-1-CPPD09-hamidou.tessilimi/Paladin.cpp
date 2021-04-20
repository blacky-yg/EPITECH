/*
** EPITECH PROJECT, 2021
** day09
** File description:
** Paladin
*/

#include "Paladin.hpp"

Paladin::Paladin(const std::string &name, int level): Character(name, level), Warrior(name, level), Priest(name, level)
{
    _strength = 9;
    _stamina = 10;
    _intelligence = 10;
    _spirit = 10;
    _agility = 2;
    _weaponName = "hammer";
    std::cout << "the light falls on " << _name << std::endl;
}

Paladin::~Paladin()
{
}

int Paladin::CloseAttack()
{
    return (Warrior::CloseAttack());
}

int Paladin::RangeAttack()
{
    return (Priest::RangeAttack());
}

void Paladin::Heal()
{
    Priest::Heal();
}

void Paladin::RestorePower()
{
    Warrior::RestorePower();
}

int Paladin::Intercept(void)
{
    return (Warrior::RangeAttack());
}