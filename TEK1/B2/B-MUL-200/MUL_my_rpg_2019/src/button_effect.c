/*
** EPITECH PROJECT, 2020
** button effect
** File description:
** button effect
*/

#include "../include/game.h"

sfBool button_click(sfVector2i mouse, t_button button)
{
    float a = (float)mouse.x;
    float b = (float)mouse.y;
    sfFloatRect rect = sfText_getGlobalBounds(button.text);

    if (a > button.pos.x && a < (button.pos.x + rect.width + 20) &&
        b > button.pos.y && b < (button.pos.y + rect.height + 20)) {
        return (sfTrue);
    } else
        return (sfFalse);
}

t_button button_effect(sfVector2i mouse, t_button button)
{
    float a = (float)mouse.x;
    float b = (float)mouse.y;
    sfFloatRect rect = sfText_getGlobalBounds(button.text);

    if (a > button.pos.x && a < (button.pos.x + rect.width + 20) &&
        b > button.pos.y && b < (button.pos.y + rect.height + 20)) {
            sfText_setStyle(button.text, sfTextBold);
            sfText_setOutlineThickness(button.text, 7);
            sfText_setOutlineColor(button.text, sfBlue);
    } else {
        sfText_setStyle(button.text, sfTextRegular);
        sfText_setOutlineThickness(button.text, 0);
    }
    return (button);
}

#include "../include/game.h"

sfBool button_png_click(sfVector2i mouse, t_sprite sprite)
{
    float a = (float)mouse.x;
    float b = (float)mouse.y;
    sfFloatRect rect = sfSprite_getGlobalBounds(sprite.sprite);

    if (a > sprite.pos.x && a < (sprite.pos.x + rect.width + 20) &&
        b > sprite.pos.y && b < (sprite.pos.y + rect.height + 20)) {
        return (sfTrue);
    } else
        return (sfFalse);
}

t_sprite button_png_effect(sfVector2i mouse, t_sprite sprite)
{
    float a = (float)mouse.x;
    float b = (float)mouse.y;
    sfFloatRect rect = sfSprite_getGlobalBounds(sprite.sprite);

    if (a > sprite.pos.x && a < (sprite.pos.x + rect.width + 20) &&
        b > sprite.pos.y && b < (sprite.pos.y + rect.height + 20)) {
            sfSprite_setScale(sprite.sprite, (sfVector2f){1.5, 1.5});
    } else {
            sfSprite_setScale(sprite.sprite, (sfVector2f){1, 1});
    }
    return (sprite);
}