/*
** EPITECH PROJECT, 2021
** day09
** File description:
** Character
*/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

class Character
{
    public:
        // CTOR && DTOR
        Character(const std::string &name, int level);
        ~Character();

        // ENUM
        typedef enum AttackRange
        {
            CLOSE,
            RANGE
        } AttackRange;

        // GETTER
        const std::string &getName() const;
        int getLvl() const;
        int getPv() const;
        int getPower() const;

        // OTHER METHODS
        int CloseAttack();
        void Heal();
        int RangeAttack();
        void RestorePower();
        void TakeDamage(int damage);

        // PUBLIC PROPRIETIES
        AttackRange Range;

    protected:
        int _strength;
        int _stamina;
        int _intelligence;
        int _spirit;
        int _agility;
        std::string _name;
        int _level;
        int _pv;
        int _power;
};

#endif /* !CHARACTER_HPP */