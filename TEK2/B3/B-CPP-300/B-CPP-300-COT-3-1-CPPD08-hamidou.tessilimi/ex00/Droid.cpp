/*
** EPITECH PROJECT, 2021
** day08
** File description:
** Droid
*/

#include "Droid.hpp"

// CTOR
Droid::Droid(std::string serial): Id(serial), Energy(50), Attack(25), Toughness(15), Status(new std::string ("Standing by"))
{
    std::cout << "Droid \'" << Id << "\' Activated" << std::endl;
}

// CTOR COPY
Droid::Droid(const Droid &copy): Id(copy.Id), Energy(copy.Energy), Attack(copy.Attack), Toughness(copy.Toughness), Status(copy.Status)
{
    std::cout << "Droid \'" << Id << "\' Activated, Memory Dumped" << std::endl;
}

// DTOR
Droid::~Droid()
{
    std::cout << "Droid \'" << Id << "\' Destroyed" << std::endl;
}

// OPERATORS IN CLASS

Droid &Droid::operator=(const Droid &ref)
{
    Id = ref.Id;
    Energy = ref.Energy;
    if (this == &ref)
        return (*this);
    if (Status)
        delete Status;
    Status = new std::string(*(ref.getStatus()));
    return (*this);
}

Droid &Droid::operator<<(std::size_t &ref_energy)
{
    if ((Energy + ref_energy) < 100)
        Energy += ref_energy;
    else {
        while (Energy != 100) {
            Energy++;
            ref_energy--;
        }
    }
    return (*this);
}

bool Droid::operator==(const Droid &ref)
{
    if (this->getId() == ref.getId() && this->getEnergy() == ref.getEnergy() &&
        this->getAttack() == ref.getAttack() && this->getToughness() == ref.getToughness() &&
            this->getStatus() == ref.getStatus())
        return (true);
    return (false);
}

bool Droid::operator!=(const Droid &ref)
{
    if (this->getId() != ref.getId() && this->getEnergy() != ref.getEnergy() &&
        this->getAttack() != ref.getAttack() && this->getToughness() != ref.getToughness() &&
            this->getStatus() != ref.getStatus())
        return (false);
    return (true);
}

// OPERATORS OUT OF CLASS

std::ostream &operator<<(std::ostream &s, const Droid &ref)
{
    std::cout << "Droid \'" << ref.getId() << "\', " << *ref.getStatus() << ", " << ref.getEnergy();
    return (s);
}

// SETTER

void Droid::setId(const std::string _Id)
{
    Id = _Id;
}

void Droid::setEnergy(const std::size_t _Energy)
{
    Energy = _Energy;
}

void Droid::setStatus(std::string *_Status)
{
    delete(Status);
    Status = new std::string (*_Status);
}

// GETTER
std::string Droid::getId() const
{
    return (Id);
}

std::size_t Droid::getEnergy() const
{
    return (Energy);
}

const std::size_t &Droid::getAttack() const
{
    return (Attack);
}

const std::size_t &Droid::getToughness() const
{
    return (Toughness);
}

std::string *Droid::getStatus() const
{
    return (Status);
}