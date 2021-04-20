/*
** EPITECH PROJECT, 2021
** rush3
** File description:
** main
*/

#include "ncurses.hpp"

void initColor()
{
    init_pair(0, COLOR_WHITE, COLOR_BLACK);
    init_pair(1, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(2, COLOR_CYAN, COLOR_BLACK);
    init_pair(3, COLOR_BLUE, COLOR_BLACK);
    init_pair(4, COLOR_GREEN, COLOR_BLACK);
    init_pair(5, COLOR_RED, COLOR_BLACK);
    init_pair(6, COLOR_YELLOW, COLOR_BLACK);
}

void game()
{
    Ncurse::MonitorCore mon;
    Ncurse::DateTime date;
    Ncurse::UserHostName user;
    Ncurse::OsKernel os;
    Ncurse::Ram ram;
    Ncurse::NetworkCore network;
    Ncurse::Cpu cpu;
    char c = '\0';
    while (1) {
        timeout(0);
        c = getch();
        if (c == 'q')
            break;
        if (c == 'm')
            mon.setActivity();
        else if (c == 'd')
            date.setActivity();
        else if (c == 'u')
            user.setActivity();
        else if (c == 'o')
            os.setActivity();
        else if (c == 'r')
            ram.setActivity();
        else if (c == 'n')
            network.setActivity();
        else if (c == 'c')
            cpu.setActivity();
        mon.displayData();
        date.displayData();
        os.displayData();
        user.displayData();
        ram.displayData();
        network.displayData();
        cpu.displayData();
    }
}

int main(int ac, char **av)
{
    if (ac == 1) {
        initscr();
        noecho();
        curs_set(0);
        start_color();
        initColor();
        game();
        endwin();
    } else if (ac == 2 && strcmp(av[1], "-h") == 0)
        input();
    return 0;
}