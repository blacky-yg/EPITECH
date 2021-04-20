/*
** EPITECH PROJECT, 2021
** day16
** File description:
** KoalaAction
*/

#ifndef KOALA_ACTION_HPP
#define KOALA_ACTION_HPP

#include <iostream>

class KoalaAction {
    public:
        KoalaAction();
        ~KoalaAction();

        void eat(std::string const &);
        void goTo(std::string const &);
        void sleep(std::string const &);
        void reproduce(std::string const &);
};

#endif /* !KOALA_ACTION_HPP */