/*
** EPITECH PROJECT, 2021
** day10
** File description:
** AWeapon
*/

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {
    public:
        AWeapon(const std::string &name, int apcost, int damage);
        virtual ~AWeapon();

        const std::string &getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;

    protected:
        const std::string _name;
        int _AP;
        int _damage;

    private:
};

#endif /* !AWEAPON_HPP */