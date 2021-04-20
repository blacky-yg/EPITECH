/*
** EPITECH PROJECT, 2021
** day08
** File description:
** Droid
*/

#ifndef DROID_HPP
#define DROID_HPP

#include <iostream>

class Droid {
    public:
        // CTOR && DTOR
        Droid(std::string serial = "");
        ~Droid();

        // COPY DROID
        Droid(const Droid &copy);

        // OPERATORS
        Droid &operator=(const Droid &ref);
        Droid &operator<<(std::size_t &ref_energy);
        bool operator==(const Droid &ref);
        bool operator!=(const Droid &ref);

        // SETTER
        void setId(const std::string);
        void setEnergy(const std::size_t);
        void setStatus(std::string *);

        // GETTER
        std::string getId() const;
        std::size_t getEnergy() const;
        const std::size_t &getAttack() const;
        const std::size_t &getToughness() const;
        std::string *getStatus() const;

        // OTHER METHODS

    private:
        std::string Id;
        std::size_t Energy;
        const size_t Attack;
        const size_t Toughness;
        std::string *Status;
};

std::ostream &operator<<(std::ostream &s, const Droid &ref);

#endif /* !DROID_HPP */