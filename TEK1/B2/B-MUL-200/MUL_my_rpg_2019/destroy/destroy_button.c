/*
** EPITECH PROJECT, 2020
** destroy button
** File description:
** destroy button
*/

#include "../include/game.h"

t_rpg destroy_button(t_rpg game)
{
    sfText_destroy(game.play.text);
    sfText_destroy(game.quit.text);
    sfText_destroy(game.back.text);
    sfText_destroy(game.new_game.text);
    sfText_destroy(game.load_game.text);
    sfText_destroy(game.music_btn.text);
    sfText_destroy(game.menu.text);
    sfText_destroy(game.sound_btn.text);
    sfText_destroy(game.full_btn.text);
    sfText_destroy(game.h_content.text);
    return (game);
}