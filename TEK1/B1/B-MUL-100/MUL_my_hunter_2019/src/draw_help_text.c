/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** draw_help_text
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void draw_help_text(game_t *game)
{
    char const *help = "The goal of the game is to kill as many birds"
    "as possible.\nFor this you just have to left-click on the birds.\n"
    "You have the right to miss 3 shots.\n"
    "Every time you hit the bird, the score increases by 100\n\nCommands:\n\t"
    "- Press Key P to play\n\t- Press Key Q or Escape to quit\n\t"
    "- Press Key H to find help\n\t- You can also use the mouse cursor\n";

    sfText_setString(game->help.text, "\t\tMY HUNTER HELPER\n");
    sfText_setCharacterSize(game->help.text, 60);
    sfText_setPosition(game->help.text, (sfVector2f){10, 100});
    sfRenderWindow_drawText(game->screen.window, game->help.text, NULL);
    sfText_setString(game->help.text, help);
    sfText_setCharacterSize(game->help.text, 30);
    sfText_setPosition(game->help.text, (sfVector2f){10, 170});
    sfRenderWindow_drawText(game->screen.window, game->help.text, NULL);
    sfText_setString(game->play.text, "Menu");
    sfText_setCharacterSize(game->play.text, 70);
    sfText_setPosition(game->play.text, (sfVector2f){650, 620});
    sfRenderWindow_drawText(game->screen.window, game->play.text, NULL);
}