/*
** EPITECH PROJECT, 2021
** ErrorNts
** File description:
** ErrorNts
*/

#ifndef ERROR_HPP_
#define ERROR_HPP_

#include <exception>
#include <iostream>

namespace nts
{
    class NtsError : public std::exception
    {
    public:
        NtsError(const std::string &msg) : _msg(msg) {}
        ~NtsError() {}
        const char *what() const noexcept override
        {
            return _msg.data();
        }

    private:
        std::string _msg;
    };
}

#endif /* !ERROR_HPP_ */
