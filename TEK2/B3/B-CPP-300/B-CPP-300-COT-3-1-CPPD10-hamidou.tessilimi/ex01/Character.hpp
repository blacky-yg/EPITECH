/*
** EPITECH PROJECT, 2021
** day10
** File description:
** Character
*/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Character {
    public:
        Character(const std::string &name);
        ~Character();

        const std::string &getName() const;
        int getAP() const;
        AWeapon *getWeapon() const;

        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(AEnemy *enemy);

    private:
        const std::string _name;
        int _AP;
        AWeapon *_weapon;
};

std::ostream &operator<<(std::ostream &s, Character &character);

#endif /* !CHARACTER_HPP */