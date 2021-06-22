/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Error
*/

#include "Engine.hpp"

bool check_env(char **env)
{
    if (env == NULL || env[0] == NULL)
        return (false);
    for (size_t i = 0; env[i]; i++)
        if (std::string(env[i]).find("DISPLAY=:") != std::string::npos)
            return (true);
    return (false);
}