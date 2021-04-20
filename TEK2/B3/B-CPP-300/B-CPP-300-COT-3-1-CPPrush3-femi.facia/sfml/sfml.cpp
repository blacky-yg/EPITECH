/*
** EPITECH PROJECT, 2021
** rush3
** File description:
** Sfml namespace
*/

#include "sfml.hpp"
#include "getData.hpp"


void Sfml::DateTime::setPosition(position_t &pos) {
    _position.x = pos.x;
    _position.y = pos.y;
}

void Sfml::DateTime::refreshData() {
    date_time = getDate();
    _text[1].setString(date_time);
}

const Sfml::position_t & Sfml::DateTime::getPosition() const
{
    return _position;
}

const std::string &Sfml::DateTime::getData() const {
    return date_time;
}

Sfml::DateTime::~DateTime() {
    delete [] _text;
}

Sfml::DateTime::DateTime() {
    date_time = getDate();
    _position.x = 0;
    _position.y = 0;
    _text = new sf::Text [2];
    _font.loadFromFile("./font.ttf");
     for (int i = 0; i < 2; i++) {
    _text[i].setFont(_font);
    _text[i].setCharacterSize(16);
    _text[i].setPosition(0, 0);
    _text[i].setFillColor(sf::Color::White);
    }
    std::string space("                                       ");
    _text[0].setString("oooooo-Date and Time-oooooo");
    _text[1].setString(date_time);
    _text[0].setFillColor(sf::Color::Magenta);
    
}

void Sfml::OsKernel::setPosition(position_t &pos) {
    _position.x = pos.x;
    _position.y = pos.y;
}

void Sfml::OsKernel::refreshData() {
    os = getOs();
    kernel = getKernel();
    tmp = kernel + " + " + os;
    _text[1].setString(os);
    _text[3].setString(kernel);
}

const Sfml::position_t & Sfml::OsKernel::getPosition() const
{
    return _position;
}

const std::string &Sfml::OsKernel::getData() const {
    return tmp;
}

Sfml::OsKernel::~OsKernel() {
    delete []_text;
}

Sfml::OsKernel::OsKernel() {
    os = getOs();
    kernel = getKernel();
    tmp = kernel + " + " + os;
    _position.x = 0;
    _position.y = 0;
    _text = new sf::Text [4];
    _font.loadFromFile("./font.ttf");
     for (int i = 0; i < 4; i++) {
    _text[i].setFont(_font);
    _text[i].setCharacterSize(16);
    _text[i].setPosition(0, 0);
    _text[i].setFillColor(sf::Color::White);
    }
    std::string space("                                       ");
    _text[0].setString("\\\\\\\\System////");
    _text[1].setString(os);
    _text[2].setString("\\\\\\\\Kernel Version////");
    _text[3].setString(kernel);
    _text[0].setFillColor(sf::Color::Cyan);
    _text[2].setFillColor(sf::Color::Magenta);
}

void Sfml::UserHostName::setPosition(position_t &pos) {
    _position.x = pos.x;
    _position.y = pos.y;
}

void Sfml::UserHostName::refreshData() {
    username = getUserName();
    hostname = getHostName();
    std::string space("              ");
    tmp = username + " + " + hostname;
    _text[1].setString(space + "         " + hostname);
    _text[3].setString(space + "         " + username);
}

const Sfml::position_t & Sfml::UserHostName::getPosition() const
{
    return _position;
}

const std::string &Sfml::UserHostName::getData() const {
    return tmp;
}

Sfml::UserHostName::~UserHostName() 
{
    delete [] _text;
}

Sfml::UserHostName::UserHostName() {
    username = getUserName();
    hostname = getHostName();
    tmp = username + " + " + hostname;
    _position.x = 0;
    _position.y = 0;
    _text = new sf::Text [4];
    _font.loadFromFile("./font.ttf");
     for (int i = 0; i < 4; i++) {
    _text[i].setFont(_font);
    _text[i].setCharacterSize(16);
    _text[i].setPosition(0, 0);
    _text[i].setFillColor(sf::Color::White);
    }
    std::string space("                       ");
    _text[0].setString(space + "+++Hostname+++");
    _text[1].setString(space + "     " + hostname);
    _text[2].setString(space + "---Username---");
    _text[3].setString(space + "     " + username);
    _text[0].setFillColor(sf::Color::Green);
    _text[1].setFillColor(sf::Color::Yellow);
    _text[2].setFillColor(sf::Color::Green);
    _text[3].setFillColor(sf::Color::Cyan);
}

void Sfml::MonitorCore::setPosition(position_t &pos) {
    _position.x = pos.x;
    _position.y = pos.y;
}

void Sfml::MonitorCore::refreshData() {
    temp = getMonitorCore();
    _text[1].setString(temp  + std::string(" degree"));
    std::string tmp = temp;
    tmp[2] = '.';
    _text[3].setString(std::string("In fact it is just ") + tmp);
}

const Sfml::position_t & Sfml::MonitorCore::getPosition() const
{
    return _position;
}

const std::string &Sfml::MonitorCore::getData() const {
    return temp;
}

Sfml::MonitorCore::~MonitorCore() 
{
    delete [] _text;
}

Sfml::MonitorCore::MonitorCore()
{
    temp = getMonitorCore();
    _position.x = 0;
    _position.y = 0;
    _text = new sf::Text [4];
    _font.loadFromFile("./font.ttf");
    _font2.loadFromFile("./font3.ttf");
    for (int i = 0; i < 4; i++) {
    _text[i].setFont(_font);
    _text[i].setCharacterSize(16);
    _text[i].setPosition(0, 0);
    _text[i].setFillColor(sf::Color::White);
    }
    std::string tmp = temp;
    tmp[2] = '.';
    std::string space("                   ");
    _text[0].setString( + "***Monitor Core***");
    _text[0].setCharacterSize(16);
    _text[1].setString(this->getData() + std::string(" degree"));
    _text[2].setString("Nope I'am trolling you ;)");
    _text[3].setString(std::string("In fact it is just ") + tmp);
    _text[0].setFillColor(sf::Color::Cyan);
    _text[3].setFillColor(sf::Color::Green);
}

void Sfml::Ram::refreshData()
{
    delete [] _array;
    _array = getRam();
    std::string name = "          ";

    for (int i = 0; i < 7; i++)
        _text2[i].setString(name + _array[i] + " Mb");
}

Sfml::Ram::~Ram()
{
    delete []_text1;
    delete [] _text2;
    delete [] _array;
}

Sfml::Ram::Ram()
{
    _position.x = 0;
    _position.y = 0;
    _array = getRam();
    _text1 = new sf::Text [8];
    _text2 = new sf::Text [7];
    _font.loadFromFile("./font.ttf");
    for (int i = 0; i < 7; i++) {
    _text1[i].setFont(_font);
    _text1[i].setCharacterSize(16);
    _text1[i].setPosition(0, 0);
    _text1[i].setFillColor(sf::Color::White);
    _text2[i].setFont(_font);
    _text2[i].setCharacterSize(16);
    _text2[i].setPosition(0, 0);
    _text2[i].setFillColor(sf::Color::White);
    }
    refreshData();
    _text1[0].setString("title:");
    _text1[1].setString("total:");
    _text1[2].setString("used:");
    _text1[3].setString("free:");
    _text1[4].setString("share:");
    _text1[5].setString("cache:");
    _text1[6].setString("available:");
    _text1[0].setFillColor(sf::Color::Red);
    _text1[1].setFillColor(sf::Color::Red);
    _text1[2].setFillColor(sf::Color::Green);
    _text1[3].setFillColor(sf::Color::Green);
    _text1[4].setFillColor(sf::Color::Blue);
    _text1[5].setFillColor(sf::Color::Cyan);
    _text1[6].setFillColor(sf::Color::Cyan);
    _text1[7].setFont(_font);
    _text1[7].setCharacterSize(20);
    _text1[7].setPosition(0, 0);
    _text1[7].setFillColor(sf::Color::Magenta);
    _text1[7].setString("RAM");
}

const Sfml::position_t &Sfml::Ram::getPosition() const
{
    return (_position);
}

const std::string &Sfml::Ram::getData() const {
    return _title;
}

void Sfml::Ram::setPosition(position_t &pos) {
    _position.x = pos.x;
    _position.y = pos.y;
}

void Sfml::CPU::refreshData()
{
    delete [] _array;
    _array = getCPU();
    int i = 0;
    for (/*std::vector<std::string>::iterator it = _array.begin()*/; i < 4; i++) {
        _text[i].setString(_array[i]);
//        std::cout << it->c_str();
    }
}

Sfml::CPU::CPU()
{
    int i = 0;
    _position.x = 0;
    _position.y = 0;
    _array = getCPU();
    _text = new sf::Text[4];
    _text2 = new sf::Text[5];
    _font.loadFromFile("./font.ttf");
    for (/*std::vector<std::string>::iterator it = _array.begin()*/; i < 4; i++) {
        _text[i].setFont(_font);
        _text[i].setCharacterSize(16);
        _text[i].setPosition(0, 0);
        _text[i].setFillColor(sf::Color::White);
        _text[i].setString(_array[i]);
        _text2[i].setFont(_font);
        _text2[i].setCharacterSize(16);
        _text2[i].setPosition(0, 0);
        _text2[i].setFillColor(sf::Color::White);
//        std::cout << it->c_str();
    }
    _text2[0].setString("CPU");
    _text2[1].setString("Model");
    _text2[2].setString("Frequency");
    _text2[3].setString("Core id");
    _text2[4].setString("Nb Core");
    _text2[0].setFillColor(sf::Color::Red);
_text2[1].setFillColor(sf::Color::Yellow);
_text2[2].setFillColor(sf::Color::Green);
_text2[3].setFillColor(sf::Color::Blue);
_text2[4].setFillColor(sf::Color::Cyan);
        _text2[4].setFont(_font);
        _text2[4].setCharacterSize(16);
        _text2[4].setPosition(0, 0);

}

Sfml::CPU::~CPU()
{
delete [] _array;
delete [] _text;
delete [] _text2;
}

const Sfml::position_t &Sfml::CPU::getPosition() const
{
    return (_position);
}

const std::string &Sfml::CPU::getData() const {
    return temp;
}

void Sfml::CPU::setPosition(position_t &pos) {
    _position.x = pos.x;
    _position.y = pos.y;
}