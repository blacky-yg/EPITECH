/*
** EPITECH PROJECT, 2021
** day16
** File description:
** KoalaAction
*/

#include "KoalaAction.hpp"

KoalaAction::KoalaAction()
{
}

KoalaAction::~KoalaAction()
{
}

void KoalaAction::goTo(std::string const &str)
{
    std::cout << "I go to: " << str << std::endl;
}

void KoalaAction::eat(std::string const &str)
{
    std::cout << "I eat: " << str << std::endl;
}

void KoalaAction::sleep(std::string const &str)
{
    std::cout << "I sleep, and dream of: " << str << std::endl;
}

void KoalaAction::reproduce(std::string const &str)
{
    std::cout << "I attempt to reproduce with: " << str << std::endl;
}