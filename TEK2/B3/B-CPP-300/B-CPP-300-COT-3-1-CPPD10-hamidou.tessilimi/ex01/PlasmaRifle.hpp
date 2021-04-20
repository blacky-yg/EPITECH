/*
** EPITECH PROJECT, 2021
** day10
** File description:
** PlasmaRifle
*/

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
    public:
        PlasmaRifle(const std::string &name = "Plasma Rifle", int apcost = 5, int damage = 21);
        ~PlasmaRifle();

        void attack() const;

    protected:
    private:
};

#endif /* !PLASMARIFLE_HPP */