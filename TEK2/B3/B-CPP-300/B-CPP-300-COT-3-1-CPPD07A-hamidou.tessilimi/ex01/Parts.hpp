/*
** EPITECH PROJECT, 2021
** day07a
** File description:
** Parts
*/

#ifndef PARTS_HPP
#define PARTS_HPP

#include <iostream>

// Arms
class Arms
{
    public:
        Arms(const std::string &serial = "A-01", bool functional = true);
        ~Arms();

        bool is_Functional() const;
        std::string serial();
        void informations() const;

    private:
        std::string _serial;
        bool _functional;
};

// Legs
class Legs
{
    public:
        Legs(const std::string &serial = "L-01", bool functional = true);
        ~Legs();

        bool is_Functional() const;
        std::string serial();
        void informations() const;

    private:
        std::string _serial;
        bool _functional;
};

// Head
class Head
{
    public:
        Head(const std::string &serial = "H-01", bool functional = true);
        ~Head();

        bool is_Functional() const;
        std::string serial();
        void informations() const;

    private:
        std::string _serial;
        bool _functional;
};

#endif /* !PARTS_HPP */