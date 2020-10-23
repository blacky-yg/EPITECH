/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** draw_help
*/

#include "../../include/defender.h"

void draw_help_text(game_t *game)
{
    char const *help = "The goal of the game is to kill as many birds"
    "as possible.\nFor this you just have to left-click on the birds.\n"
    "You have the right to miss 3 shots.\n"
    "Every time you hit the bird, the score increases by 100\n\nCommands:\n\t"
    "- Press Key P to play\n\t- Press Key Q or Escape to quit\n\t"
    "- Press Key H to find help\n\t- You can also use the mouse cursor\n";

    sfText_setString(game->help.text[0], "\t\tHow to play\n");
    sfText_setCharacterSize(game->help.text[0], 110);
    sfText_setPosition(game->help.text[0], (sfVector2f){10, 20});
    sfRenderWindow_drawText(game->screen.window, game->help.text[0], NULL);
}