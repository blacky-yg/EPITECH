/*
** EPITECH PROJECT, 2021
** rush2
** File description:
** Toy
*/

#ifndef TOY_HPP
#define TOY_HPP

#include "Object.hpp"

class Toy : public Object
{
    public:
        // CTOR && DTOR
        Toy(const std::string &title);
        ~Toy();

        typedef enum ToyType {
            TEDDY,
            LITTLEPONY
        } ToyType;

        void isTaken(void) const;
        ToyType getType() const;

    private:

    protected:
        ToyType _type;
};

// TEDDY
class Teddy : public Toy
{
    public:
        Teddy(const std::string &title);
        ~Teddy();

    private:
};

// LITTLEPONY
class LittlePony : public Toy
{
    public:
        LittlePony (const std::string &title);
        ~LittlePony ();

    private:
};

#endif /* !TOY_HPP */