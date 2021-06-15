/*
** EPITECH PROJECT, 2021
** Project
** File description:
** CoreException
*/

#ifndef CORE_EXCEPTION_HPP
#define CORE_EXCEPTION_HPP

#include "header.hpp"

class CoreException {
    public:
        CoreException(const std::string &) throw();
        ~CoreException();
        const std::string what() const throw();

    private:
        std::string _msg;
};

#endif /* !CORE_EXCEPTION_HPP */