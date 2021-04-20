/*
** EPITECH PROJECT, 2021
** day10
** File description:
** AEnemy
*/

#ifndef AENEMY_HPP
#define AENEMY_HPP

#include <iostream>

class AEnemy {
    public:
        AEnemy(int hp, const std::string &type);
        virtual ~AEnemy();

        const std::string &getType() const;
        int getHP() const;

        virtual void takeDamage(int Damage);

    protected:
        int _HP;
        const std::string _type;

    private:
};

#endif /* !AENEMY_HPP */