/*
** EPITECH PROJECT, 2021
** day06
** File description:
** KoalaDoctor
*/

#include "KoalaDoctor.hpp"

KoalaDoctor::KoalaDoctor(std::string name)
{
    this->name = name;
    this->is_working = false;
    std::cout << "Dr." << this->name << ": I'm Dr." << this->name << "! How do you kreog?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
}

void KoalaDoctor::diagnose(SickKoala *koala)
{
    std::string drugs[] = {"Mars", "Kinder", "Crunch", "Maroilles", "Eucalyptus leaf"};
    std::string random_str;
    std::cout << "Dr." << this->name << ": So what's goerking you Mr." << koala->getName() << "?" << std::endl;
    koala->poke();
    std::string report = koala->getName() + ".report";
    random_str = drugs[random() % 5];
    std::ofstream filename(report);
    filename << random_str;
}

void KoalaDoctor::timeCheck(void)
{
    if (this->is_working == false) {
        std::cout << "Dr." << this->name << ": Time to get to work!" << std::endl;
        this->is_working = true;
    } else {
        std::cout << "Dr." << this->name << ": Time to go home to my eucalyptus forest!" << std::endl;
        this->is_working = false;
    }
}

std::string KoalaDoctor::getName(void)
{
    return (this->name);
}