/*
** EPITECH PROJECT, 2021
** day09
** File description:
** Hunter
*/

#include "Hunter.hpp"

Hunter::Hunter(const std::string &name, int level): Character(name, level), Warrior(name, level)
{
    _strength = 9;
    _stamina = 9;
    _intelligence = 5;
    _spirit = 6;
    _agility = 25;
    _weaponName = "sword";
    std::cout << _name << " is born from a tree" << std::endl;
}

Hunter::~Hunter()
{
}

int Hunter::CloseAttack(void)
{
    return (Warrior::CloseAttack());
}

int Hunter::RangeAttack(void)
{
    if (Range == CLOSE)
        return (0);
    if (_power < 25) {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
    _power -= 25;
    std::cout << _name << " uses his bow" << std::endl;
    Range = CLOSE;
    return (20 + _agility);
}

void Hunter::Heal()
{
    Warrior::Heal();
}

void Hunter::RestorePower(void)
{
    _power += 100;
    if (_power > 100)
        _power = 100;
    std::cout << _name << " meditates" << std::endl;
}