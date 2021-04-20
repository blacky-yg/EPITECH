/*
** EPITECH PROJECT, 2021
** day10
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(const std::string &name): _name(name), _AP(40), _weapon(nullptr)
{
}

Character::~Character()
{
}

const std::string &Character::getName() const
{
    return (_name);
}

int Character::getAP() const
{
    return (_AP);
}

AWeapon *Character::getWeapon() const
{
    return (_weapon);
}

void Character::recoverAP()
{
    _AP += 10;
    if (_AP > 40)
        _AP = 40;
}

void Character::attack(AEnemy *enemy)
{
    if (_weapon == nullptr || _AP < _weapon->getAPCost())
        return;
    _AP -= _weapon->getAPCost();
    std::cout << _name <<" attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
    _weapon->attack();
    enemy->takeDamage(_weapon->getDamage());
    if (enemy->getHP() <= 0)
        enemy->~AEnemy();
}

void Character::equip(AWeapon *weapon)
{
    _weapon = weapon;
}

std::ostream &operator<<(std::ostream &s, Character &character)
{
    if (character.getWeapon())
        s << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon()->getName() << "\n";
    else
        s << character.getName() << " has " << character.getAP() << " AP and is unarmed" << "\n";
    return (s);
}