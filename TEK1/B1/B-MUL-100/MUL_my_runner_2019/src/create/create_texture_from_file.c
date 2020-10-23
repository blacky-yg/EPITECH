/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** create_texture_from_file
*/

#include "../../include/my.h"
#include "../../include/my_runner.h"

sfTexture *create_texture_from_file(char const *filename)
{
    sfTexture *texture = sfTexture_createFromFile(filename, NULL);

    if (!texture)
        return (NULL);
    return (texture);
}