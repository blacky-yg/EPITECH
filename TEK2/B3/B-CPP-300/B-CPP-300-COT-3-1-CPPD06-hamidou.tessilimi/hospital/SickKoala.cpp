/*
** EPITECH PROJECT, 2021
** day06
** File description:
** sickkoala
*/

#include "SickKoala.hpp"

SickKoala::SickKoala(std::string name)
{
    this->name = name;
}

SickKoala::~SickKoala()
{
    std::cout << "Mr." << this->name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

void SickKoala::poke(void)
{
    std::cout << "Mr." << this->name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string str)
{
    if (str == "Mars" || str == "Kinder") {
        if (str == "Mars")
            std::cout << "Mr." << this->name << ": Mars, and it kreogs!" << std::endl;
        else if (str == "Kinder")
            std::cout << "Mr." << this->name << ": There is a toy inside!" << std::endl;
        return (true);
    } else {
        std::cout << "Mr." << this->name << ": Goerkreog!" << std::endl;
        return (false);
    }
}

void SickKoala::overDrive(std::string str)
{
    str = std::regex_replace(str, std::regex("Kreog!"), "1337!");
    std::cout << "Mr." << this->name << ": " << str << std::endl;
}

std::string SickKoala::getName(void)
{
    return this->name;
}