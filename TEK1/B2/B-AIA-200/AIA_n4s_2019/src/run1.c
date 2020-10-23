/*
** EPITECH PROJECT, 2020
** need4stek
** File description:
** run
*/

#include "../include/n4s.h"
#include "../include/my.h"

char *speed(char *str, char *stra, float left, float right)
{
    float value = atof(str);

    if (value >= 2000)
        stra = send_take("CAR_FORWARD:0.8\n");
    if (value < 2000 && value >= 1500)
        stra = send_take("CAR_FORWARD:0.5\n");
    if (value < 1500 && value >= 1000)
        stra = send_take("CAR_FORWARD:0.33\n");
    if (value < 1000 && value >= 600)
        stra = ("CAR_FORWARD:0.15\n");
    if (value < 600 && value >= 400)
        stra = send_take("CAR_FORWARD:0.1\n");
    if (value < 400 && value > 50)
        stra = send_take("CAR_FORWARD:0.05\n");
    if (value <= 50 || left <= 50 || right <= 50) {
        stra = send_take("CAR_BACKWARDS:0.5\n");
        if ((left - right) < 0)
            stra = send_take("WHEELS_DIR:-0.05\n");
        else
            stra = send_take("WHEELS_DIR:0.05\n");
    }
    return (stra);
}

char *rotate(char *stra, char *str, float value)
{
    char *word = malloc(20);

    if (value < 0)
        word = my_strcpy(word, "WHEELS_DIR:-");
    else
        word = my_strcpy(word, "WHEELS_DIR:");
    if (atof(str) >= 1500)
        word = my_strcat(word, "0.005\n");
    if (atof(str) < 1500 && atof(str) >= 1000)
        word = my_strcat(word, "0.05\n");
    if (atof(str) < 1000 && atof(str) >= 500)
        word = my_strcat(word, "0.15\n");
    if (atof(str) < 500 && atof(str) >= 200)
        word = my_strcat(word, "0.35\n");
    if (atof(str) < 200)
        word = my_strcat(word, "0.55\n");
    stra = send_take(word);
    return (stra);
}

char **get_info(char *str, char **tab)
{
    str = send_take("GET_INFO_LIDAR\n");
    tab = str_in_tab(str, ':');
    if (tab == NULL || count_tab(tab) < 3)
        return (NULL);
    return (tab);
}
