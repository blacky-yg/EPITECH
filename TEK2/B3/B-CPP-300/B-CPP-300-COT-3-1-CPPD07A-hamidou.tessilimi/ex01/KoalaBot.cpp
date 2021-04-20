/*
** EPITECH PROJECT, 2021
** day07a
** File description:
** KoalaBot
*/

#include "KoalaBot.hpp"

KoalaBot::KoalaBot(std::string serial)
{
    _serial = serial;
}

KoalaBot::~KoalaBot()
{
}

void KoalaBot::setParts(Arms &arms)
{
    _arms = arms;
}

void KoalaBot::setParts(Legs &legs)
{
    _legs = legs;
}

void KoalaBot::setParts(Head &head)
{
    _head = head;
}

void KoalaBot::swapParts(Arms &arms)
{
    setParts(arms);
}

void KoalaBot::swapParts(Legs &legs)
{
    setParts(legs);
}

void KoalaBot::swapParts(Head &head)
{
    setParts(head);
}

void KoalaBot::informations() const
{
    std::cout << "[KoalaBot] " << _serial << std::endl;
    _arms.informations();
    _legs.informations();
    _head.informations();
}

bool KoalaBot::status() const
{
    if (_arms.is_Functional() && _legs.is_Functional() && _head.is_Functional())
        return (true);
    return (false);
}