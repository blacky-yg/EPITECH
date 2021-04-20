/*
** EPITECH PROJECT, 2021
** day15
** File description:
** ex06
*/

#ifndef EX06_HPP
#define EX06_HPP

#include <iostream>
#include <sstream>

template<typename T>
std::string print(T var)
{
    (void)var;
    std::string str = "[???]";
    return (str);
}

template<>
std::string print(std::string var)
{
    return ("[string:\"" + var + "\"]");
}

template<>
std::string print(float var)
{
    std::ostringstream s;
    s << var;
    return ("[float:" + s.str() + "f]");
}

template<>
std::string print(int var)
{
    return ("[int:" + std::to_string(var) + "]");
}

template<typename T = int, typename U = T>
class Tuple {

    public:
        Tuple() {}
        ~Tuple() {}

        std::string toString(void) const {
            std::string str = "[TUPLE " + print(a) + " " + print(b) + "]";
            return (str);
        }

        T a;
        U b;
};

#endif /* !EX06_HPP */