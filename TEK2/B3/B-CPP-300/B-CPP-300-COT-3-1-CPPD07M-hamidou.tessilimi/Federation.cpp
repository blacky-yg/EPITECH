/*
** EPITECH PROJECT, 2021
** day07m
** File description:
** Federation
*/

#include "Borg.hpp"
#include "Federation.hpp"

// FEDERATION STARFLEET SHIP

Federation::Starfleet::Ship::Ship() :_photonTorpedo(0)
{
    _length = 289;
    _width = 132;
    _name = "Entreprise";
    _maxWarp = 6;
    _home = EARTH;
    std::cout << "The ship USS " << _name << " has been finished." << std::endl;
    std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << _maxWarp << "!" << std::endl;
}

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp, int torpedo): _photonTorpedo(0)
{
    _length = length;
    _width = width;
    _name = name;
    _maxWarp = maxWarp;
    _photonTorpedo = torpedo;
    _home = EARTH;
    std::cout << "The ship USS " << _name << " has been finished." << std::endl;
    std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << _maxWarp << "!" << std::endl;
    if (torpedo)
        std::cout << "Weapons are set: " << torpedo << " torpedoes ready." << std::endl;
}

Federation::Starfleet::Ship::~Ship()
{
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
    std::cout << "USS " << _name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore(void)
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();
    std::string is_stable;
    if (reactor->isStable())
        is_stable = "stable";
    else
        is_stable = "unstable";
    std::cout << "USS " << _name << ": The core is " << is_stable << " at the time." << std::endl;
}

void Federation::Starfleet::Ship::promote(Federation::Starfleet::Captain *captain)
{
    _captain = captain;
    std::cout << captain->getName() << ": I'm glad to be the captain of the USS " << _name << "." << std::endl;
}

bool Federation::Starfleet::Ship::move(int warp, Destination d)
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();

    if (warp <= _maxWarp && d != _location && reactor->isStable() == true) {
        _location = d;
        return (true);
    } else
        return (false);
}

bool Federation::Starfleet::Ship::move(int warp)
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();

    if (warp <= _maxWarp && reactor->isStable() == true) {
        _location = _home;
        return (true);
    } else
        return (false);
}

bool Federation::Starfleet::Ship::move(Destination d)
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();

    if (d != _location && reactor->isStable() == true) {
        _location = d;
        return (true);
    } else
        return (false);
}

bool Federation::Starfleet::Ship::move()
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();
    if (reactor->isStable() == true) {
        _location = _home;
        return (true);
    } else
        return (false);
}

int Federation::Starfleet::Ship::getShield()
{
    return (_shield);
};

void Federation::Starfleet::Ship::setShield(int shield)
{
    _shield = shield;
}

int Federation::Starfleet::Ship::getTorpedo()
{
    return (_photonTorpedo);
}

void Federation::Starfleet::Ship::setTorpedo(int torpedo)
{
    _photonTorpedo = torpedo;
};

void Federation::Starfleet::Ship::fire(Borg::Ship *target)
{
    int shield;
    _photonTorpedo -= 1;
    std::cout << _name << ": Firing on target. " << _photonTorpedo << " torpedoes remaining." << std::endl;
    shield = target->getShield();
    target->setShield(shield * 50);
    if (target->getShield() < 0)
        std::cout << _name << ": No more torpedo to fire, " << this->_captain->getName() << std::endl;
    if (_photonTorpedo == 0)
        std::cout << _name << ": No enough torpedoes to fire, " << this->_captain->getName() << std::endl;
}

void Federation::Starfleet::Ship::fire(int torpedoes, Borg::Ship *target)
{
    int shield;
    _photonTorpedo -= torpedoes;
    std::cout << _name << ": Firing on target. " << _photonTorpedo << " torpedoes remaining." << std::endl;
    shield = target->getShield();
    target->setShield(shield * 50);
    if (target->getShield() < 0)
        std::cout << _name << ": No more torpedo to fire, " << this->_captain->getName() << std::endl;
    if (_photonTorpedo == 0)
        std::cout << _name << ": No enough torpedoes to fire, " << this->_captain->getName() << std::endl;
}

// FEDERATION STARFLEET CAPTAIN

Federation::Starfleet::Captain::Captain(std::string name)
{
    _name = name;
}

Federation::Starfleet::Captain::~Captain()
{
}

std::string Federation::Starfleet::Captain::getName(void)
{
    return (_name);
}

int Federation::Starfleet::Captain::getAge(void)
{
    return (_age);
}

void Federation::Starfleet::Captain::setAge(int age)
{
    _age = age;
}

// FEDERATION STARFLEET ENSIGN

Federation::Starfleet::Ensign::Ensign(std::string name)
{
    _name = name;
    std::cout << "Ensign " << _name << ", awaiting orders." << std::endl;
}

Federation::Starfleet::Ensign::~Ensign()
{
}

// FEDERATION SHIP

Federation::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
    _length = length;
    _width = width;
    _name = name;
    _maxWarp = maxWarp;
    _home = VULCAN;
    std::cout << "The independent ship " << _name << " just finished its construction." << std::endl;
    std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
}

Federation::Ship::~Ship()
{
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
    std::cout << _name << ": The core is set." << std::endl;
}

void Federation::Ship::checkCore(void)
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();
    std::string is_stable;
    if (reactor->isStable())
        is_stable = "stable";
    else
        is_stable = "unstable";
    std::cout << _name << ": The core is " << is_stable << " at the time." << std::endl;
}

WarpSystem::Core *Federation::Ship::getCore()
{
    return (_core);
}

bool Federation::Ship::move(int warp, Destination d)
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();

    if (warp <= _maxWarp && d != _location && reactor->isStable() == true) {
        _location = d;
        return (true);
    } else
        return (false);
}

bool Federation::Ship::move(int warp)
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();

    if (warp <= _maxWarp && reactor->isStable() == true) {
        _location = _home;
        return (true);
    } else
        return (false);
}

bool Federation::Ship::move(Destination d)
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();

    if (d != _location && reactor->isStable() == true) {
        _location = d;
        return (true);
    } else
        return (false);
}

bool Federation::Ship::move()
{
    WarpSystem::QuantumReactor *reactor = _core->checkReactor();
    if (reactor->isStable() == true) {
        _location = _home;
        return (true);
    } else
        return (false);
}