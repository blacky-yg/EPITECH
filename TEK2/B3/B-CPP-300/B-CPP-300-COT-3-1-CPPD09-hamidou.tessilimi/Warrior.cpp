/*
** EPITECH PROJECT, 2021
** day09
** File description:
** Warrior
*/

#include "Warrior.hpp"

// CTOR

Warrior::Warrior(const std::string &name, int level): Character(name, level), _weaponName("hammer")
{
    _strength = 12;
    _stamina = 12;
    _intelligence = 6;
    _spirit = 5;
    _agility = 7;
    std::cout << "I'm " << _name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

// DTOR

Warrior::~Warrior()
{
}

// OTHER METHODS

int Warrior::CloseAttack()
{
    if (Range == RANGE)
        return (0);
    if (_power < 30) {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
    _power -= 30;
    std::cout << _name << " strikes with his " << _weaponName << std::endl;
    return (20 + _strength);
}

int Warrior::RangeAttack()
{
    if (Range == CLOSE)
        return (0);
    if (_power < 10) {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
    _power -= 10;
    std::cout << _name << " intercepts" << std::endl;
    Range = CLOSE;
    return (0);
}