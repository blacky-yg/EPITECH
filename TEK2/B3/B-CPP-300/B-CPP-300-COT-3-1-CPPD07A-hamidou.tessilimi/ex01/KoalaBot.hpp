/*
** EPITECH PROJECT, 2021
** day07a
** File description:
** KoalaBot
*/

#ifndef KOALABOT_HPP
#define KOALABOT_HPP

#include <iostream>
#include "Parts.hpp"

class KoalaBot {
    public:
        KoalaBot(std::string serial = "Bob-01");
        ~KoalaBot();

        void setParts(Arms &arms);
        void setParts(Legs &legs);
        void setParts(Head &head);

        void swapParts(Arms &arms);
        void swapParts(Legs &legs);
        void swapParts(Head &head);

        void informations() const;
        bool status() const;

    private:
        std::string _serial;
        Arms _arms;
        Legs _legs;
        Head _head;
};

#endif /* !KOALABOT_HPP */