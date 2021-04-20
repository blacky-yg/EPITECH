/*
** EPITECH PROJECT, 2021
** day07m
** File description:
** borg
*/

#include "Borg.hpp"

// BORG SHIP

Borg::Ship::Ship(int weaponFrequency, short repair): _side(300), _maxWarp(9), _shield(100)
{
    _weaponFrequency = weaponFrequency;
    _repair = repair;
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl;
    std::cout << "Your biological characteristics and technologies will be assimilated." << std::endl;
    std::cout << "Resistance is futile." << std::endl;
    _home = UNICOMPLEX;
}

Borg::Ship::~Ship()
{
}

void Borg::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
}

void Borg::Ship::checkCore(void)
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();
    std::string is_stable;
    if (reactor->isStable())
        std::cout << "Everything is in order." << std::endl;
    else
        std::cout << "Critical failure imminent." << std::endl;
}

bool Borg::Ship::move(int warp, Destination d)
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();

    if (warp <= _maxWarp && d != _location && reactor->isStable() == true) {
        _location = d;
        return (true);
    } else
        return (false);
}

bool Borg::Ship::move(int warp)
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();

    if (warp <= _maxWarp && reactor->isStable() == true) {
        _location = _home;
        return (true);
    } else
        return (false);
}

bool Borg::Ship::move(Destination d)
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();

    if (d != _location && reactor->isStable() == true) {
        _location = d;
        return (true);
    } else
        return (false);
}

bool Borg::Ship::move()
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();
    _location = _home;
    if (reactor->isStable() == true)
        return (true);
    else
        return (false);
}

void Borg::Ship::setShield(int shield)
{
    _shield = shield;
}

int Borg::Ship::getShield()
{
    return (_shield);
}

void Borg::Ship::setWeaponFrequency(int frequency)
{
    _weaponFrequency = frequency;
}

int Borg::Ship::getWeaponFrequency()
{
    return (_weaponFrequency);
}

void Borg::Ship::setRepair(int repair)
{
    _repair = repair;
}

short Borg::Ship::getRepair()
{
    return (_repair);
}

void Borg::Ship::fire(Federation::Starfleet::Ship *target)
{
    target->setShield(_weaponFrequency);
    std::cout << "Firing on target with " << _weaponFrequency << "GW frequency." << std::endl;
}

void Borg::Ship::fire(Federation::Ship *target)
{
    WarpSystem::Core *core = target->getCore();
    WarpSystem::QuantumReactor *reactor = core->checkReactor();
    std::cout << "Firing on target with " << _weaponFrequency << "GW frequency." << std::endl;
    reactor->setStability(false);
}

void Borg::Ship::repair()
{
    if (_repair > 0) {
        _repair -= 1;
        std::cout << "Begin shield re-initialisation... Done. Awaiting further instructions." << std::endl;
    } else
        std::cout << "Energy cells depleted, shield weakening." << std::endl;
    setShield(100);
}