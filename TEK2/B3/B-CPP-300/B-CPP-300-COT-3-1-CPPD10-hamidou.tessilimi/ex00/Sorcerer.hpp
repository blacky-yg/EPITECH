/*
** EPITECH PROJECT, 2021
** day10
** File description:
** Sorcerer
*/

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>

#include "Victim.hpp"

class Sorcerer {
    public:
        Sorcerer(const std::string &name, const std::string &title);
        ~Sorcerer();

        // GETTER
        const std::string &getName() const;
        const std::string &getTitle() const;

        // OTHER METHODS
        void polymorph(const Victim &victim) const;

    protected:
    private:
        const std::string _name;
        const std::string _title;
};

std::ostream &operator<<(std::ostream &s, Sorcerer &sorce);

#endif /* !SORCERER_HPP */