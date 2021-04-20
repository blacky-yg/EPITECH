/*
** EPITECH PROJECT, 2021
** day10
** File description:
** Victim
*/

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {
    public:
        Victim(const std::string &name);
        ~Victim();

        const std::string &getName() const;
        virtual void getPolymorphed() const;

    protected:
        const std::string _name;

    private:
};

std::ostream &operator<<(std::ostream &s, Victim &victim);

#endif /* !VICTIM_HPP */