/*
** EPITECH PROJECT, 2021
** rush2
** File description:
** Object
*/

#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <iostream>

class Object {
    public:
        Object(const std::string &title = "");
        ~Object();

        const std::string &getTitle() const;

    protected:
        std::string _title;

    private:
};

std::ostream &operator<<(std::ostream &my_stream, Object &my_object);

#endif /* !OBJECT_HPP */