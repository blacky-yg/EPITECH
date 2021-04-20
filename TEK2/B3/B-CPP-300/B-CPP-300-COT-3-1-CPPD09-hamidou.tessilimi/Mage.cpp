/*
** EPITECH PROJECT, 2021
** day09
** File description:
** Mage
*/

#include "Mage.hpp"

Mage::Mage(const std::string &name, int level): Character(name, level)
{
    _strength = 6;
    _stamina = 6;
    _intelligence = 12;
    _spirit = 11;
    _agility = 7;
    std::cout << _name << " teleported" << std::endl;
}

Mage::~Mage()
{
}

int Mage::CloseAttack()
{
    if (Range == RANGE)
        return (0);
    if (_power < 10) {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
    _power -= 10;
    std::cout << _name << " blinks" << std::endl;
    Range = RANGE;
    return (0);
}

int Mage::RangeAttack()
{
    if (_power < 25) {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
    _power -= 25;
    std::cout << _name << " launches a fire ball" << std::endl;
    return (20 + _spirit);
}

void Mage::RestorePower()
{
    _power += (50 + _intelligence);
    if (_power > 100)
        _power = 100;
    std::cout << _name << " takes a mana potion" << std::endl;
}