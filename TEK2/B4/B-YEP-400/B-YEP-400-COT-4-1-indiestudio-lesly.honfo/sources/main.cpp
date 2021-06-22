/*
** EPITECH PROJECT, 2021
** indie studio
** File description:
** main
*/

#include "Engine.hpp"

std::shared_ptr<SceneManager> SceneManager::_manager = nullptr;

int main(int ac, char *av[], char **env)
{
    (void)ac;
    (void)av;
    std::shared_ptr<Engine> _engine;

    srand(time(NULL));
    #ifndef _WIN32
    if (!check_env(env))
        return (84);
    #endif
    try {
        _engine = std::make_shared<Engine>(1350, 690);
        _engine->launch();
    } catch (std::bad_alloc &e) {
        throw StudioException("Bad alloc for Engine");
    } catch (StudioException &e) {
        std::cerr << e.what() << std::endl;
        return (84);
    }
    return (0);
}