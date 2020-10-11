/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** my_debug
*/

#include "../include/tetris.h"

tetrimino_t check_name(tetrimino_t tetrimino, char *str)
{
    int i = 0;
    char *string = NULL;

    for (; str[i] != '\0' && str[i] != '.'; i++);
    if (str[i] == '\0') {
        tetrimino.error = 0;
        return (tetrimino);
    } else
        string = cut(str);
    if (my_strcmp(string, ".tetrimino") != 0)
        tetrimino.error = 0;
    return (tetrimino);
}

tetrimino_t check_line(char **str, int fd, tetrimino_t tetrimino,
                            tetris_t tetris)
{
    int *tab = malloc(sizeof(int) * 4), height = 0, lenght = 0;
    *str = get_next_line(fd);
    if (*str == NULL || *str[0] == '\0')
        return ((tetrimino_t){0, 0, 0});
    tetrimino.error = check_file(*str);
    tetrimino.width = 0, tetrimino.height = 0, tetrimino.color = 0;
    for (int i = 0; i < 3 && *(*str) != '\0'; i++, *(*str)++) {
        for (tab[i] = 0; ('0' <= *(*str) && *(*str) <= '9') && *(*str) != '\0';
        *(*str)++)
            tab[i] = (tab[i] * 10) + (*(*str) - '0');
    } tetrimino.width = tab[0],
    tetrimino.height = tab[1], tetrimino.color = tab[2];
    if (tetrimino.color < 0 || tetrimino.color > 7 || tetrimino.height >
    tetris.map_size.nb_rows || tetrimino.width > tetris.map_size.nb_cols)
        tetrimino.error = 0;
    for (*str = get_next_line(fd); *str != NULL; height++,
    *str = get_next_line(fd))
        lenght = (my_strlen(*str) == tetrimino.width) ? 1 : lenght;
    tetrimino.error = (height != tetrimino.height) ? 0 : tetrimino.error;
    return (tetrimino);
}

void print_tetrimino(tetrimino_t tetrimino, char *filepath, char **mino)
{
    my_putstr("Tetriminos :  Name ");
    my_putstr_mino(filepath);
    my_putstr(" :  ");
    if (tetrimino.error == 0)
        my_putstr("Error\n");
    else {
        my_putstr("Size ");
        my_putnbr(tetrimino.width);
        write(1, "*", 1);
        my_putnbr(tetrimino.height);
        my_putstr(" :  Color ");
        my_putnbr(tetrimino.color);
        my_putstr(" :\n");
        for (int i = 0; mino[i] != NULL; i++) {
            my_putstr(mino[i]);
            write(1, "\n", 1);
        }
    }
}

tetrimino_t manage_tetrimino(char *filepath, tetris_t tetris)
{
    int fd = open(my_strcat(my_strcat("tetriminos", "/"), filepath), O_RDONLY);
    char *str = NULL;
    tetrimino_t tetrimino;

    tetrimino.mino = NULL, tetrimino.void_mino = NULL;
    tetrimino.error = 0;
    tetrimino = check_line(&str, fd, tetrimino, tetris);
    close(fd);
    if (tetrimino.error != 0) {
        tetrimino.void_mino = fill_space(tetrimino.height, tetrimino.width);
        tetrimino.mino = mem_alloc_2d_array(tetrimino.height, tetrimino.width);
        fd = open(my_strcat(my_strcat("tetriminos", "/"), filepath), O_RDONLY);
        get_next_line(fd);
        for (int i = 0; i < tetrimino.height; i++)
            tetrimino.mino[i] = get_next_line(fd);
    }
    close(fd);
    tetrimino = check_name(tetrimino, filepath);
    print_tetrimino(tetrimino, filepath, tetrimino.mino);
    return (tetrimino);
}

tetrimino_t *my_debug(tetris_t tetris, int *nb)
{
    DIR *dir = NULL;
    struct dirent *rd_dir = NULL;
    int i = 0;
    tab_int_t my_tab = open_tetriminos(dir, rd_dir, i);
    tetrimino_t *tetriminos = NULL;

    if (my_tab.nb_tetris_files) {
        tetriminos = malloc(sizeof(tetrimino_t)
        * (my_tab.nb_tetris_files + 1));
        *nb = my_tab.nb_tetris_files;
        print_debug(tetris);
        my_putstr("Tetriminos :  ");
        my_putnbr(my_tab.nb_tetris_files);
        write(1, "\n", 1);
        for (int i = 0; my_tab.tab[i] != NULL; i++)
            tetriminos[i] = manage_tetrimino(my_tab.tab[i], tetris);
        my_putstr("Press any key to start Tetris\n");
        return (tetriminos);
    } else
        exit(84);
}
