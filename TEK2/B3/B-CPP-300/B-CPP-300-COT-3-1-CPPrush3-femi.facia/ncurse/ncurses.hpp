/*
** EPITECH PROJECT, 2021
** rush3
** File description:
** Ncurses namespace header
*/

#ifndef NCURSES_HPP_
#define NCURSES_HPP_

#include "getData.hpp"

namespace Ncurse {
    typedef struct position {
        int x;
        int y;
    } position_t;

    class IMonitorModule {
    public:
        virtual void setActivity() = 0;
    protected:
    private:
    };

    class IMonitorDisplay {
    public:
        virtual void displayData() = 0;
    };

    class MonitorCore : public IMonitorDisplay, public IMonitorModule {
    public:
        MonitorCore();
        ~MonitorCore();
        void displayData() override;
        void setActivity() override;
    private:
        std::string title;
        std::string temp;
        WINDOW *_win;
        bool activity;
    };

    class UserHostName : public IMonitorModule, IMonitorDisplay {
    public:
        UserHostName();
        ~UserHostName();
        void displayData() override;
        void setActivity() override;
    private:
        std::string utitle;
        std::string htitle;
        std::string username;
        std::string hostname;
        WINDOW *_win;
        bool activity;
    };

    class OsKernel : public IMonitorModule, IMonitorDisplay {
         public:
        OsKernel();
        ~OsKernel();
        void displayData() override;
        void setActivity() override;

    private:
        std::string ostitle;
        std::string ktitle;
        std::string os;
        std::string kernel;
        WINDOW *_win;
        bool activity;
    };

    class DateTime : public IMonitorDisplay, public IMonitorModule {
    public:
        DateTime();
        ~DateTime();
        void displayData() override;
        void setActivity() override;
    private:
        std::string title;
        std::string date;
        WINDOW *_win;
        bool activity;
    };
    class Ram : public IMonitorDisplay, public IMonitorModule {
    public:
        Ram();
        ~Ram();
        void displayData() override;
        void setActivity() override;
    private:
        std::string title;
        std::string total;
        std::string used;
        std::string _free;
        std::string share;
        std::string cache;
        std::string available;
        WINDOW *_win;
        bool activity;
    };
    class NetworkCore : public IMonitorModule, IMonitorDisplay {
    public:
        NetworkCore();
        virtual ~NetworkCore();
        void refreshData();
        void displayData() override;
        void setActivity() override;

    private:
        std::string title;
        std::string _interfaces[10];
        std::string _address[10];
        WINDOW *_win;
        bool activity;
    };
    class Cpu : public IMonitorModule, IMonitorDisplay {
    public:
        Cpu();
        virtual ~Cpu();
        void displayData() override;
        void setActivity() override;

    private:
        std::string title;
        WINDOW *_win;
        bool activity;
    };
}

#endif /* !NCURSES_HPP_ */