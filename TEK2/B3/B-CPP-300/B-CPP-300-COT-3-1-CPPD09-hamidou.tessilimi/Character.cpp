/*
** EPITECH PROJECT, 2021
** day09
** File description:
** Character
*/

#include "Character.hpp"

// CTOR

Character::Character(const std::string &name, int level): Range(CLOSE), _strength(5), _stamina(5), _intelligence(5), _spirit(5), _agility(5),
    _name(name), _level(level), _pv(100), _power(100)
{
    std::cout << _name << " Created" << std::endl;
}

// DTOR

Character::~Character()
{
}

// GETTER

const std::string &Character::getName() const
{
    return (_name);
}

int Character::getLvl() const
{
    return (_level);
}

int Character::getPv() const
{
    return (_pv);
}

int Character::getPower() const
{
    return (_power);
}

// OTHER METHODS

int Character::CloseAttack()
{
    if (Range == RANGE)
        return (0);
    if (_power < 10) {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
    _power -= 10;
    std::cout << _name << " strikes with a wooden stick" << std::endl;
    return (10 + _strength);
}

void Character::Heal()
{
    _pv += 50;
    if (_pv > 100)
        _pv = 100;
    std::cout << _name << " takes a potion" << std::endl;
}

int Character::RangeAttack()
{
    if (_power < 10) {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
    _power -= 10;
    std::cout << _name << " tosses a stone" << std::endl;
    return (5 + _strength);
}

void Character::RestorePower()
{
    this->_power = 100;
    std::cout << _name << " eats" << std::endl;
}

void Character::TakeDamage(int damage)
{
    _pv -= damage;
    if (_pv > 0) {
        std::cout << _name << " takes " << damage << " damage" << std::endl;
    } else
        std::cout << _name << " out of combat" << std::endl;
}