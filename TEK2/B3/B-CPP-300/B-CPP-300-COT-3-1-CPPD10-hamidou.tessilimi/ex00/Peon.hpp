/*
** EPITECH PROJECT, 2021
** day10
** File description:
** Peon
*/

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon(const std::string &name);
        ~Peon();

        void getPolymorphed() const;

    protected:
    private:
};

#endif /* !PEON_HPP */