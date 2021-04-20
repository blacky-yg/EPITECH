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
            ALIEN,
            BUZZ,
            WOODY
        } ToyType;

        Toy();
        Toy(ToyType type, const std::string &name, const std::string &filename);
        virtual ~Toy();

        Toy(const Toy &ref);
        Toy &operator=(const Toy &ref);

        void setName(const std::string &name);
        bool setAscii(const std::string &filename);

        std::string getName() const;
        std::string getAscii() const;
        ToyType getType() const;

    protected:
        ToyType _type;
        std::string _name;
        Picture _picture;
};

#endif /* !TOY_HPP */