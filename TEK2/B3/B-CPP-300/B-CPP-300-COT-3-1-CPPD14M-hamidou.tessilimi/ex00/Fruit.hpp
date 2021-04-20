/*
** EPITECH PROJECT, 2021
** day14m
** File description:
** Fruit
*/

#ifndef FRUIT_HPP
#define FRUIT_HPP

#include <iostream>

class Fruit {
    public:
        Fruit(int vitamins, const std::string &name = "");
        virtual ~Fruit();

        virtual std::string getName() const;
        virtual int getVitamins() const;

    protected:
        std::string _name;
        int _vitamins;
};

#endif /* !FRUIT_HPP */