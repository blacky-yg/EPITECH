/*
** EPITECH PROJECT, 2021
** rush3
** File description:
** Ncurses namespace
*/

#include "ncurses.hpp"

void Ncurse::Cpu::displayData() {
    werase(_win);
    if (!activity) {
        wrefresh(_win);
        return;
    }
    auto my_tab = splitstring("Model: Frequences: IdCore: CoreNumber:");
    wborder(_win, '#', '#', '#', '#', '#', '#', '#', '#');
    print(_win,(LINES  / 14),((COLS / 4) / 2), title.c_str(), 1, true);
    wmove(_win, (LINES  / 8), 0 );
    for (int i = 0; i <  (COLS/4 + COLS / 8 + 1); i++)
        wprintw(_win, "#");
    auto ret = getCPU();
    auto it = ret.begin();
    for (int j = 0, k = 0; it != ret.end(); it++, j++, k++) {
        wmove(_win, (LINES / 7) + j, 3);
        wcolor_set(_win, 3, NULL);
        wprintw(_win, (my_tab[k] + " ").c_str());
        wcolor_set(_win, 0, NULL);
        wcolor_set(_win, 6, NULL);
        wprintw(_win, (it->c_str()));
        wcolor_set(_win, 0, NULL);
        if (k == 3)
            break;
    }
        wrefresh(_win);
}

Ncurse::Cpu::Cpu() : title("CPU MODULE"), _win(subwin(stdscr, LINES / 2, (COLS/4 + COLS / 8 + 2), LINES / 2, (COLS/2 + COLS / 8))), activity(false)
{
}

Ncurse::Cpu::~Cpu()
{
    delwin(_win);
}

void Ncurse::NetworkCore::displayData() {
    werase(_win);
    if (!activity) {
        wrefresh(_win);
        return;
    }
    refreshData();
    wborder(_win, '#', '#', '#', '#', '#', '#', '#', '#');
    wmove(_win, (LINES  / 8), 0 );
    for (int i = 0; i <  (COLS/4 + COLS / 8); i++)
        wprintw(_win, "#");
    print(_win,(LINES  / 14),((COLS / 4) / 4), title.c_str(), 1, true);
    for (int i = 3, j = 2; i < 10; i++, j++) {
        print(_win, (LINES / 6) + j, 3, (_interfaces[i] +  ' ').c_str(), 4, false);
        wcolor_set(_win, 2, NULL);
        wprintw(_win, _address[i].c_str());
        wcolor_set(_win, 0, NULL);
    }
    wrefresh(_win);
}

void Ncurse::NetworkCore::refreshData() {
    int i = 0;
    struct ifaddrs *ifap;
    getifaddrs(&ifap);
    for (struct ifaddrs *ifa = ifap; ifa; ifa = ifa->ifa_next, i++) {
        if (ifa->ifa_addr && (ifa->ifa_addr->sa_family == AF_INET6)) {
            char addr[INET6_ADDRSTRLEN];
            getnameinfo(ifa->ifa_addr, sizeof(struct sockaddr_in6), addr, sizeof(addr), NULL, 0, NI_NUMERICHOST);
            _interfaces[i] = ifa->ifa_name;
            _address[i] = addr;
        } else if (ifa->ifa_addr && ifa->ifa_addr->sa_family == AF_INET) {
            struct sockaddr_in *sa = (struct sockaddr_in *)ifa->ifa_addr;
            char *addr = inet_ntoa(sa->sin_addr);
            _interfaces[i] = ifa->ifa_name;
            _address[i] = addr;
        }
    }
    freeifaddrs(ifap);
}

Ncurse::NetworkCore::NetworkCore() : title("NetworkCore"), _win(subwin(stdscr, LINES / 2, (COLS/4 + COLS / 8), LINES / 2, COLS/4)), activity(false)
{
    int i = 0;
    struct ifaddrs *ifap;
    getifaddrs(&ifap);
    for (struct ifaddrs *ifa = ifap; ifa; ifa = ifa->ifa_next, i++) {
        if (ifa->ifa_addr && (ifa->ifa_addr->sa_family == AF_INET6)) {
            char addr[INET6_ADDRSTRLEN];
            getnameinfo(ifa->ifa_addr, sizeof(struct sockaddr_in6), addr, sizeof(addr), NULL, 0, NI_NUMERICHOST);
            _interfaces[i] = ifa->ifa_name;
            _address[i] = addr;
        } else if (ifa->ifa_addr && ifa->ifa_addr->sa_family == AF_INET) {
            struct sockaddr_in *sa = (struct sockaddr_in *)ifa->ifa_addr;
            char *addr = inet_ntoa(sa->sin_addr);
            _interfaces[i] = ifa->ifa_name;
            _address[i] = addr;
        }
    }
    freeifaddrs(ifap);
}

Ncurse::NetworkCore::~NetworkCore()
{
    delwin(_win);
}

void Ncurse::Ram::displayData() {
    werase(_win);
    auto ram = getRam();
    auto names = splitstring("Total: Used: Free: Share: Cache: Available: ");

    total = ram[1], used = ram[2], _free = ram[3], share = ram[4], cache = ram[5], available = ram[6];
    if (!activity) {
        wrefresh(_win);
        return;
    }
    wborder(_win, '#', '#', '#', '#', '#', '#', '#', '#');
    wmove(_win, (LINES  / 6), 0 );
    for (int i = 0; i < (COLS / 4); i++)
        wprintw(_win, "#");
    print(_win,(LINES  / 12),((COLS / 4) / 3), title.c_str(), 1, true);
    for (int i = 1, j = 0; i < 7; i++, j++) {
        print(_win, (LINES / 5 + j) , 3, (names[j] + '\t').c_str(), 4, false);
        wcolor_set(_win, 6, NULL);
        wprintw(_win, ram[i].c_str());
        wcolor_set(_win, 0, NULL);
    }
    wrefresh(_win);
}


Ncurse::Ram::~Ram() {
    delwin(_win);
}

Ncurse::Ram::Ram() : title("RAM MODULE"), _win(subwin(stdscr, LINES / 2, COLS/4, LINES / 2, 0)), activity(false) {
    auto ram = getRam();

    total = ram[1];
    used = ram[2];
    _free = ram[3];
    share = ram[4];
    cache = ram[5];
    available = ram[6];
}

void Ncurse::MonitorCore::displayData() {
    werase(_win);
    if (!activity) {
        wrefresh(_win);
        return;
    }
    temp = getMonitorCore();
    int max = atoi(temp.c_str()) / 1000;
    temp = std::to_string(atoi(temp.c_str()) / 1000) + " °C";
    wborder(_win, '#', '#', '#', '#', '#', '#', '#', '#');
    wmove(_win, (LINES  / 6), 0 );
    for (int i = 0; i < (COLS / 4); i++)
        wprintw(_win, "#");
    print(_win,(LINES  / 12),((COLS / 4) / 4), title.c_str(), 1, true);
    print(_win, (LINES / 4),  (COLS / 10), temp.c_str(), 2, false);
    wmove(_win, (LINES / 4) + (LINES  / 13),  2);
    wprintw(_win, "Monitor core estimation: ");
    wcolor_set(_win, 5, NULL);
    for (int i = 0; i < max / 10; i++)
        wprintw(_win, "*");
    wcolor_set(_win, 0, NULL);
    wrefresh(_win);
}


Ncurse::MonitorCore::~MonitorCore() {
    delwin(_win);
}

Ncurse::MonitorCore::MonitorCore() : title("YOUR MONITOR CORE"), temp(getMonitorCore()), _win(subwin(stdscr, LINES / 2, COLS/4, 0, 0)), activity(false) {
}

void Ncurse::DateTime::displayData() {
    werase(_win);
    if (!activity) {
        wrefresh(_win);
        return;
    }
    date = getDate();
    wborder(_win, '#', '#', '#', '#', '#', '#', '#', '#');
    wmove(_win, (LINES  / 6), 0 );
    for (int i = 0; i < (COLS / 4); i++)
        wprintw(_win, "#");
    print(_win,(LINES  / 12),((COLS / 4) / 4), title.c_str(), 1, true);
    print(_win, (LINES / 3),  3, date.c_str(), 6, false);
    wrefresh(_win);
}


Ncurse::DateTime::~DateTime() {
    delwin(_win);
}

Ncurse::DateTime::DateTime() : title("DATE AND TIME"), date(getDate()), _win(subwin(stdscr, LINES / 2, COLS/4, 0, (3 * COLS)/4)), activity(false) {
}

void Ncurse::UserHostName::displayData() {
    werase(_win);
    if (!activity) {
        wrefresh(_win);
        return;
    }
    username = getUserName();
    wborder(_win, '#', '#', '#', '#', '#', '#', '#', '#');
    print(_win, (LINES  / 15) ,((COLS / 4) / 4), utitle.c_str(), 1, true);
    wmove(_win, (LINES  / 4) / 2, 0 );
    for (int i = 0; i < (COLS / 4); i++)
        wprintw(_win, "#");
    print(_win, (LINES / 6), (COLS / 4) / 4, username.c_str(), 3, false);
    wmove(_win, (LINES  / 4), 0 );
    for (int i = 0; i < (COLS / 4); i++)
        wprintw(_win, "#");
    print(_win, (LINES / 4) + (LINES / 16), (COLS / 4) / 4, htitle.c_str(), 1, true);
    wmove(_win, (LINES  / 4) + (LINES / 10), 0 );
    for (int i = 0; i < (COLS / 4); i++)
        wprintw(_win, "#");
    print(_win,(LINES  / 4) + (LINES / 7), ((COLS / 4) / 4), hostname.c_str(), 2, false);
    wrefresh(_win);
}


Ncurse::UserHostName::~UserHostName() {
    delwin(_win);
}

Ncurse::UserHostName::UserHostName() : utitle("USERNAME"), htitle("HOSTNAME"), username(getUserName()), hostname(getHostName()), _win(subwin(stdscr, LINES / 2, COLS/4, 0, COLS/4)), activity(false) {

}

void Ncurse::OsKernel::displayData() {
    werase(_win);
    if (!activity) {
        wrefresh(_win);
        return;
    }
    os = getOs();
    wborder(_win, '#', '#', '#', '#', '#', '#', '#', '#');
    print(_win, (LINES  / 15) ,((COLS / 4) / 4), ostitle.c_str(), 1, true);
    wmove(_win, (LINES  / 4) / 2, 0 );
    for (int i = 0; i < (COLS / 4); i++)
        wprintw(_win, "#");
    print(_win, (LINES / 6), (COLS / 4) / 4, os.c_str(), 4, false);
    wmove(_win, (LINES  / 4), 0 );
    for (int i = 0; i < (COLS / 4); i++)
        wprintw(_win, "#");
    print(_win, (LINES / 4) + (LINES / 16), (COLS / 4) / 4, ktitle.c_str(), 1, true);
    wmove(_win, (LINES  / 4) + (LINES / 10), 0 );
    for (int i = 0; i < (COLS / 4); i++)
        wprintw(_win, "#");
    print(_win,(LINES  / 4) + (LINES / 7), ((COLS / 4) / 4), kernel.c_str(), 5, false);
    wrefresh(_win);
}


Ncurse::OsKernel::~OsKernel() {
    delwin(_win);
}

Ncurse::OsKernel::OsKernel() : ostitle("OPERATING SYSTEM"), ktitle("KERNEL VERSION"), os(getOs()), kernel(getKernel()), _win(subwin(stdscr, LINES / 2, COLS/4, 0, COLS/2)), activity(false) {

}

void Ncurse::MonitorCore::setActivity() {
    if (activity)
        activity = false;
    else if (!activity)
        activity = true;
}

void Ncurse::UserHostName::setActivity() {
    if (activity)
        activity = false;
    else if (!activity)
        activity = true;
}

void Ncurse::DateTime::setActivity() {
    if (activity)
        activity = false;
    else if (!activity)
        activity = true;
}

void Ncurse::OsKernel::setActivity() {
    if (activity)
        activity = false;
    else if (!activity)
        activity = true;
}

void Ncurse::Ram::setActivity() {
    if (activity)
        activity = false;
    else if (!activity)
        activity = true;
}

void Ncurse::NetworkCore::setActivity() {
    if (activity)
        activity = false;
    else if (!activity)
        activity = true;
}

void Ncurse::Cpu::setActivity() {
    if (activity)
        activity = false;
    else if (!activity)
        activity = true;
}