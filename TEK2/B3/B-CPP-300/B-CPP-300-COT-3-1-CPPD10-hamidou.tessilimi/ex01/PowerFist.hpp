/*
** EPITECH PROJECT, 2021
** day10
** File description:
** PowerFist
*/

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
    public:
        PowerFist(const std::string &name = "Power Fist", int apcost = 8, int damage = 50);
        ~PowerFist();

        void attack() const;

    protected:
    private:
};

#endif /* !POWERFIST_HPP */