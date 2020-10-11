
/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** handopt
*/

#include "../include/tetris.h"

char *cut(char *str)
{
    int len = my_strlen(str), i = 0, j = 0;
    char *string = NULL;

    for (; str[i] != '\0' && str[i] != '.'; i++);
    string = malloc(sizeof(char) * (len - i + 1));
    string[0] = '\0';
    for (; str[i] != '\0'; i++, j++)
        string[j] = str[i];
    string[j] = '\0';
    return (string);
}

char *get_key(char *str)
{
    if (my_strlen(str) == 1)
            return (str);
        else
            exit(84);
}

map_size_t get_size(char *str)
{
    map_size_t map_size = {0, 0};
    int i = 0, len = my_strlen(str);

    if (str[i] == '{')
        i++;
    check_error(str);
    for (; i < len && str[i] != ','; i++)
        map_size.nb_rows = (map_size.nb_rows * 10) + (str[i] - '0');
    i++;
    for (; str[i] != '\0' && str[i] != '}'; i++)
        map_size.nb_cols = (map_size.nb_cols * 10) + (str[i] - '0');
    return (map_size);
}

void touch_cmp(tetris_t tetris)
{
    if (!my_strcmp(tetris.key_left, tetris.key_right)
    || !my_strcmp(tetris.key_left, tetris.key_turn)
    || !my_strcmp(tetris.key_left, tetris.key_drop)
    || !my_strcmp(tetris.key_left, tetris.key_quit)
    || !my_strcmp(tetris.key_left, tetris.key_pause))
        exit(84);
    else if (!my_strcmp(tetris.key_right, tetris.key_turn)
    || !my_strcmp(tetris.key_right, tetris.key_drop)
    || !my_strcmp(tetris.key_right, tetris.key_quit)
    || !my_strcmp(tetris.key_right, tetris.key_pause))
        exit(84);
    if (!my_strcmp(tetris.key_turn, tetris.key_drop)
    || !my_strcmp(tetris.key_turn, tetris.key_quit)
    || !my_strcmp(tetris.key_turn, tetris.key_pause))
        exit(84);
    else if (!my_strcmp(tetris.key_drop, tetris.key_quit)
    || !my_strcmp(tetris.key_drop, tetris.key_pause))
        exit(84);
    if (!my_strcmp(tetris.key_quit, tetris.key_pause))
        exit(84);
}

tetris_t handopt(const struct option *longopts, int ac, char **av,
                        tetris_t tetris)
{
    int longindex = 0;
    char ch = getopt_long(ac, av, "L:l:r:t:d:q:p:wD", longopts, &longindex);
    for (; ch != -1; ) {
        switch (ch) { case 'h': usage(av); break;
        case 'L': tetris.level = my_getnbr(optarg); break;
        case 'l': tetris.key_left = get_key(optarg); break;
        case 'r': tetris.key_right = get_key(optarg); break;
        case 't': tetris.key_turn = get_key(optarg); break;
        case 'd': tetris.key_drop = get_key(optarg); break;
        case 'q': tetris.key_quit = get_key(optarg); break;
        case 'p': tetris.key_pause = get_key(optarg); break;
        case 'm': tetris.map_size = get_size(optarg); break;
        case 'w': tetris.next = 0;break;
        case 'D': break;
        case '?': exit(84);
        } ch = getopt_long(ac, av, "L:l:r:t:d:q:p:wD", longopts, &longindex);
    }
    if (optind < ac)
        exit(84);
    touch_cmp(tetris);
    return (tetris);
}
