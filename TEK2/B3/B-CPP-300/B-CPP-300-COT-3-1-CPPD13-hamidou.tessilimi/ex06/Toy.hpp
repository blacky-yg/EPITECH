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
        class Error {
            public:
                typedef enum ErrorType {
                    UNKNOWN,
                    PICTURE,
                    SPEAK
                } ErrorType;

                std::string what() const;
                std::string where() const;
                ErrorType type;
        };

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
        Toy &operator<<(const std::string str);

        void setName(const std::string &name);
        bool setAscii(const std::string &filename);

        std::string getName() const;
        std::string getAscii() const;
        ToyType getType() const;

        virtual void speak(const std::string statement);
        virtual bool speak_es(const std::string statement);

        Toy::Error getLastError() const;

    protected:
        ToyType _type;
        std::string _name;
        Picture _picture;
        Toy::Error error;
};

std::ostream &operator<<(std::ostream &s, const Toy &ref);

#endif /* !TOY_HPP */