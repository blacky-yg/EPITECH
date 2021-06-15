
/*
** EPITECH PROJECT, 2021
** Project
** File description:
** Ncurses
*/

#include "../include/Ncurses.hpp"

LibNcurses::LibNcurses()
{
    initscr();
    curs_set(0);
    cbreak();
    keypad(stdscr, TRUE);
    this->_libName = "ncurses";
}

LibNcurses::~LibNcurses()
{
}

void LibNcurses::init(void)
{
}

void LibNcurses::colored(void)
{
    if (has_colors() == FALSE)
    {
        endwin();
        std::cout << "Your terminal doesn't support color\n";
        exit(84);
    }
    start_color();
    init_pair(1, COLOR_YELLOW, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);
    init_pair(3, COLOR_BLUE, COLOR_BLACK);
    init_pair(4, COLOR_GREEN, COLOR_BLACK);
    init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(6, COLOR_CYAN, COLOR_BLACK);
    init_pair(7, COLOR_WHITE, COLOR_BLACK);
}

void LibNcurses::getPlayerName()
{
    nocbreak();
    mvprintw(23, 53, "PLEASE ENTER YOUR NAME: ");
    move(23, 77);
    int ch = getch();

    while (ch != '\n')
    {
        _name.push_back(ch);
        ch = getch();
    }
    move(23, 53);
    clrtoeol();
    mvprintw(23, 53, "Welcome : ");
    printw(_name.c_str());
    mvprintw(24, 53, "Select the game you want to Play:");
    cbreak();
}

void LibNcurses::setPlayerName()
{
}

void LibNcurses::drawRedRectOnWindow(int x, int y)
{
    start_color();
    init_pair(12, COLOR_RED, COLOR_RED);

    WINDOW *win = newwin(2, 6, y, x);

    box(win, 0, 0);
    touchwin(win);
    wbkgd(win, COLOR_PAIR(12));
    wrefresh(win);
}

void LibNcurses::drawSimpleRectOnWindow(int x, int y)
{
    start_color();
    init_pair(10, COLOR_WHITE, COLOR_WHITE);

    WINDOW *win = newwin(2, 6, y, x);

    box(win, 0, 0);
    touchwin(win);
    wbkgd(win, COLOR_PAIR(10));
    wrefresh(win);
}

bool LibNcurses::isKeyUpPressed()
{
    if (_choice == KEY_UP)
        return true;
    return false;
}

bool LibNcurses::isKeyDownPressed()
{
    if (_choice == KEY_DOWN)
        return true;
    return false;
}

bool LibNcurses::isKeyLeftPressed()
{
    if (_choice == KEY_LEFT)
        return true;
    return false;
}

bool LibNcurses::isKeyLibChangedPressed()
{
    if (_choice == KEY_BACKSPACE)
        return true;
    return false;
}

bool LibNcurses::isKeyRightPressed()
{
    if (_choice == KEY_RIGHT)
        return true;
    return false;
}

bool LibNcurses::isKeyEnterPressed()
{
    if (_choice == KEY_ENTER)
        return true;
    return false;
}

void LibNcurses::showMenu()
{
    colored();
    box(stdscr, '*', '*');
    touchwin(stdscr);

    for (int i = 52; i < 63; i++)
        mvprintw(26, i, "*");
    for (int i = 27; i < 31; i++)
        mvprintw(i, 52, "*");
    for (int i = 27; i < 31; i++)
        mvprintw(i, 62, "*");
    for (int i = 52; i < 63; i++)
        mvprintw(31, i, "*");

    int highlight = 0;
    noecho();
    while (1)
    {
        for (int i = 0, pos = 27; i < 2; i++, pos++)
        {
            if (i == highlight)
                attron(COLOR_PAIR(6));

            mvprintw(pos + 1, 54, _menulist[i].c_str());
            attroff(COLOR_PAIR(6));
        }

        _choice = getch();

        if (this->isKeyUpPressed()) {
                highlight--;
            if (highlight == -1)
                highlight = 0;
        
        }
        else if (this->isKeyDownPressed()) {
            highlight++;
            if (highlight == 2)
                highlight = 1;
        }
        if (_choice == 10)
        {
            this->_game->play();
        }
        //
    }
}

void LibNcurses::run()
{
    this->getPlayerName();
    this->showMenu();
}

void LibNcurses::setGame(IGame *game)
{
    _game = game;
}

extern "C"
{
    LibNcurses *loadLib()
    {
        return new LibNcurses();
    }
}