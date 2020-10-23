/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** create_play_ressources
*/

#include "../../include/my.h"
#include "../../include/my_runner.h"

int create_play_ressources(play_t *play)
{
    play->texture[0] = create_texture_from_file("resources/background/1.png");
    play->texture[1] = create_texture_from_file("resources/background/2.png");
    play->texture[2] = create_texture_from_file("resources/background/3.png");
    play->texture[3] = create_texture_from_file("resources/background/4.png");
    play->texture[4] = create_texture_from_file("resources/background/5.png");
    play->texture[5] = create_texture_from_file("resources/background/6.png");
    play->texture[6] = create_texture_from_file("resources/background/7.png");
    for (int i = 0; i <= 6; i++) {
        play->sprite[i] = create_sprite();
        sfSprite_setTexture(play->sprite[i], play->texture[i], sfTrue);
    }
    play->text = sfText_create();
    if (!play->text)
        return (84);
    play->font = sfFont_createFromFile(FONT_PATH);
    if (!play->font)
        return (84);
    sfText_setFont(play->text, play->font);
    sfText_setColor(play->text, sfWhite);
    return (0);
}