/*
** EPITECH PROJECT, 2021
** day16
** File description:
** Ratatouille
*/

#ifndef RATATOUILLE_HPP
#define RATATOUILLE_HPP

#include <iostream>
#include <sstream>

class Ratatouille {
    public:
        Ratatouille();
        ~Ratatouille();
        Ratatouille(const Ratatouille &copy);
        Ratatouille &operator=(const Ratatouille &ref);

        Ratatouille &addVegetable(unsigned char);
        Ratatouille &addCondiment(unsigned int);
        Ratatouille &addSpice(double);
        Ratatouille &addSauce(const std::string &);
        std::string kooc() const;

    private:
        std::ostringstream _food;
};

#endif /* !RATATOUILLE_HPP */