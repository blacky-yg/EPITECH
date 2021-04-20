/*
** EPITECH PROJECT, 2021
** day13
** File description:
** Toy
*/

#ifndef TOY_HPP
#define TOY_HPP

#include "Picture.hpp"

class Toy {
    public:
        typedef enum ToyType {
            BASIC_TOY,
            ALIEN
        } ToyType;

        Toy(): _type(BASIC_TOY), _name("toy"), _picture("") {}
        Toy(ToyType type, const std::string &name, const std::string &filename);
        ~Toy();

        void setName(const std::string &name);
        bool setAscii(const std::string &filename);

        std::string getName() const;
        std::string getAscii() const;
        ToyType getType() const;

    protected:
        const ToyType _type;
        std::string _name;
        Picture _picture;
};

#endif /* !TOY_HPP */