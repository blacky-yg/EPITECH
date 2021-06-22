/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** StudioException
*/

#pragma once

#include "Headers.hpp"

class StudioException : public std::exception
{
    public:
        /**
         * @brief Construct a new Studio Exception object
         *
         * @param msg error message
         */
        StudioException(const std::string &msg);

        /**
         * @brief Destroy the Studio Exception object
         *
         */
        ~StudioException();

        /**
         * @brief Get the error msg value
         *
         * @return std::string const&
         */
        std::string const &getMsg() const;

        /**
         * @brief Get the error msg if an exception is catch
         *
         * @return const char*
         */
        virtual const char *what() const throw();

    protected:
        /**
         * @brief store the error message
         *
         */
        std::string _msg;
};