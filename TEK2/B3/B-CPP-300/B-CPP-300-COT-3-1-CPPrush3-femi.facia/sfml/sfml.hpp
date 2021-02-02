/*
** EPITECH PROJECT, 2021
** rush3
** File description:
** Sfml namespace header
*/

#ifndef SFML_HPP_
#define SFML_HPP_

#include <string>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Sound.h>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

namespace Sfml {
    typedef struct position {
        int x;
        int y;
    } position_t;

    class IMonitorModule {
    public:
        //virtual ~IMonitorModule() = 0;
        virtual void refreshData() = 0;
        virtual const std::string &getData() const = 0;
    protected:
    private:
    };

    class IMonitorDisplay {
    public:
        //virtual ~IMonitorDisplay() = 0;
        // Get Position
        virtual const position_t &getPosition() const = 0;
        // SetPosition
        virtual void setPosition(position_t &pos) = 0;
    protected:
    private:
    };

    class MonitorCore : public IMonitorDisplay, public IMonitorModule {
    public:
        sf::Text *_text;
        sf::Font _font;
        sf::Font _font2;
        MonitorCore();
        virtual ~MonitorCore();
        void refreshData() override;
        const std::string &getData() const override;
        const position_t &getPosition() const override;
        void setPosition(position_t &pos) override;
    private:
        std::string temp;
        position_t _position;
    };

    class UserHostName : public IMonitorModule, IMonitorDisplay {
    public:
        sf::Text *_text;
        sf::Font _font;
        UserHostName();
        virtual ~UserHostName();
        void refreshData() override;
        const std::string &getData() const override;
        const position_t &getPosition() const override;
        void setPosition(position_t &pos) override;

    private:
        std::string hostname;
        std::string username;
        std::string tmp;
        position_t _position;
    };

    class OsKernel : public IMonitorModule, IMonitorDisplay {
    public:
        sf::Text *_text;
        sf::Font _font;
        OsKernel();
        virtual ~OsKernel();
        void refreshData() override;
        const std::string &getData() const override;
        const position_t &getPosition() const override;
        void setPosition(position_t &pos) override;
    private:
        std::string os;
        std::string kernel;
        std::string tmp;
        position_t _position;
    };

    class DateTime : public IMonitorDisplay, public IMonitorModule {
    public:
        sf::Text *_text;
        sf::Font _font;
        DateTime();
        virtual ~DateTime();
        void refreshData() override;
        const std::string &getData() const override;
        const position_t &getPosition() const override;
        void setPosition(position_t &pos) override;
    private:
        std::string date_time;
        position_t _position;
    };

    class Ram : public IMonitorDisplay, public IMonitorModule {
    public:
        Ram();
        sf::Text *_text1;
        sf::Text *_text2;
        sf::Font _font;
        virtual ~Ram();
        void refreshData() override;
        const std::string &getData() const override;
        const position_t &getPosition() const override;
        void setPosition(position_t &pos) override;
    private:
        position_t _position;
       
        std::string _title;
        std::string _total;
        std::string _used;
        std::string _free;
        std::string _share;
        std::string _cache;
        std::string _available;
        std::string *_array;
    };

    class CPU : public IMonitorDisplay, public IMonitorModule {
    public:
        CPU();
        sf::Text *_text;
        sf::Text *_text2;
        std::string *_array;
        sf::Font _font;
        virtual ~CPU();
        void refreshData() override;
        const std::string &getData() const override;
        const position_t &getPosition() const override;
        void setPosition(position_t &pos) override;
    private:
        position_t _position;
        std::string temp;
    };
}
#endif /* !SfmlS_HPP_ */